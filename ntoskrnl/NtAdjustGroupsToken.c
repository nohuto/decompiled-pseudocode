NTSTATUS __stdcall NtAdjustGroupsToken(
        HANDLE TokenHandle,
        BOOLEAN ResetToDefault,
        PTOKEN_GROUPS NewState,
        ULONG BufferLength,
        PTOKEN_GROUPS PreviousState,
        PULONG ReturnLength)
{
  void *v9; // r12
  char PreviousMode; // di
  __int64 v11; // rsi
  PTOKEN_GROUPS v12; // rbx
  NTSTATUS result; // eax
  int v14; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rsi
  __int64 v17; // r13
  int v18; // r8d
  __int64 v19; // r14
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  signed __int32 v23[8]; // [rsp+0h] [rbp-A8h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-80h]
  PSID DestinationSid; // [rsp+30h] [rbp-78h]
  char v26; // [rsp+50h] [rbp-58h]
  __int64 v27; // [rsp+54h] [rbp-54h] BYREF
  NTSTATUS v28; // [rsp+5Ch] [rbp-4Ch]
  int GroupCount; // [rsp+60h] [rbp-48h]
  unsigned int Object[3]; // [rsp+64h] [rbp-44h] BYREF
  __int64 v31; // [rsp+70h] [rbp-38h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+10h] BYREF
  ULONG v33; // [rsp+C8h] [rbp+20h]

  v33 = BufferLength;
  GroupCount = 0;
  v31 = 0LL;
  Object[0] = 0;
  v27 = 0LL;
  LOBYTE(v32) = 0;
  v9 = 0LL;
  if ( !ResetToDefault && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = PreviousMode;
  if ( PreviousMode )
  {
    if ( ResetToDefault )
    {
      v11 = 0x7FFFFFFF0000LL;
    }
    else
    {
      if ( ((unsigned __int8)NewState & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 0x7FFFFFFF0000LL;
    }
    v12 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ReturnLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
  }
  else
  {
    v12 = PreviousState;
  }
  if ( ResetToDefault
    || (GroupCount = NewState->GroupCount,
        result = SeCaptureSidAndAttributesArray(
                   (char *)NewState->Groups,
                   GroupCount,
                   PreviousMode,
                   0LL,
                   0,
                   (int)HandleInformation,
                   (int)DestinationSid,
                   (PVOID *)&v31,
                   Object),
        v28 = result,
        result >= 0) )
  {
    *(_QWORD *)&Object[1] = 0LL;
    v14 = ObReferenceObjectByHandle(
            TokenHandle,
            v12 != 0LL ? 72 : 64,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            (PVOID *)&Object[1],
            0LL);
    if ( v14 < 0 )
    {
      if ( v31 )
        SeReleaseLuidAndAttributesArray((void *)v31, PreviousMode);
      return v14;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v16 = *(_QWORD *)&Object[1];
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)&Object[1] + 48LL), 1u);
      _InterlockedOr(v23, 0);
      v17 = v31;
      LOBYTE(v18) = ResetToDefault;
      v19 = *(_QWORD *)&Object[1];
      v20 = SepAdjustGroups(
              Object[1],
              0,
              v18,
              GroupCount,
              v31,
              (__int64)v12,
              0LL,
              (__int64)&v27,
              (__int64)&v27 + 4,
              (__int64)&v32);
      v28 = v20;
      if ( v12 )
      {
        v21 = (int)ReturnLength;
        *ReturnLength = v27;
      }
      if ( v20 < 0 )
        goto LABEL_24;
      if ( !v12 )
      {
LABEL_20:
        LOBYTE(v22) = ResetToDefault;
        LOBYTE(v21) = 1;
        v28 = SepAdjustGroups(
                v19,
                v21,
                v22,
                GroupCount,
                v17,
                (__int64)v12,
                v9,
                (__int64)&v27,
                (__int64)&v27 + 4,
                (__int64)&v32);
        if ( v12 )
          v12->GroupCount = HIDWORD(v27);
        if ( (_BYTE)v32 )
          *(_QWORD *)(v19 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_24:
        _InterlockedOr(v23, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(v16 + 48));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(*(PVOID *)&Object[1]);
        if ( v31 )
          SeReleaseLuidAndAttributesArray((void *)v31, PreviousMode);
        return v28;
      }
      if ( (unsigned int)v27 <= v33 )
      {
        v9 = (void *)(((unsigned __int64)&v12->Groups[0].Sid + (unsigned int)(16 * HIDWORD(v27)) + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_20;
      }
      _InterlockedOr(v23, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v16 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ObfDereferenceObject(*(PVOID *)&Object[1]);
      if ( v31 )
        SeReleaseLuidAndAttributesArray((void *)v31, PreviousMode);
      return -1073741789;
    }
  }
  return result;
}

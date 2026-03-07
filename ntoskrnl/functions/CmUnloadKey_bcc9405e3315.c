__int64 __fastcall CmUnloadKey(__int64 a1, unsigned int a2, char a3, void *a4)
{
  HANDLE v4; // r12
  KPROCESSOR_MODE PreviousMode; // r15
  PVOID v7; // rsi
  char v8; // r13
  struct _KTHREAD *CurrentThread; // rax
  char UnloadRundown; // r14
  unsigned __int64 v11; // rcx
  unsigned int Length; // r14d
  wchar_t *TransientPoolWithQuota; // rax
  wchar_t *v14; // rdi
  void *v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int16 v17; // ax
  signed int v18; // r8d
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rdx
  char v26; // [rsp+40h] [rbp-268h]
  unsigned int v27; // [rsp+44h] [rbp-264h]
  PVOID Object[2]; // [rsp+60h] [rbp-248h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-238h] BYREF
  PVOID v32; // [rsp+80h] [rbp-228h] BYREF
  HANDLE v33; // [rsp+88h] [rbp-220h] BYREF
  _QWORD v34[2]; // [rsp+90h] [rbp-218h] BYREF
  int v35; // [rsp+A0h] [rbp-208h]
  HANDLE Handle; // [rsp+A8h] [rbp-200h]
  __m128i v37; // [rsp+C0h] [rbp-1E8h]
  __int128 v38; // [rsp+D0h] [rbp-1D8h] BYREF
  __int128 v39; // [rsp+E0h] [rbp-1C8h]
  __int128 v40; // [rsp+F0h] [rbp-1B8h]
  __int128 v41[2]; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v42; // [rsp+120h] [rbp-188h]
  _OWORD v43[19]; // [rsp+130h] [rbp-178h] BYREF

  v4 = a4;
  Handle = a4;
  v35 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v43, 0, 0x128uLL);
  LODWORD(v43[6]) = -1;
  *((_QWORD *)&v43[9] + 1) = &v43[9];
  *(_QWORD *)&v43[9] = &v43[9];
  memset((char *)&v43[13] + 8, 0, 0x50uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  v7 = 0LL;
  v33 = 0LL;
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v8 = 0;
  v34[1] = v34;
  v34[0] = v34;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  v26 = UnloadRundown;
  if ( !UnloadRundown )
  {
    v18 = -1073741431;
LABEL_54:
    v27 = v18;
    v14 = 0LL;
    goto LABEL_35;
  }
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v18 = -1073741727;
    goto LABEL_54;
  }
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v18 = -1073741811;
    goto LABEL_54;
  }
  if ( PreviousMode == 1 && (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v38 = *(_OWORD *)a1;
  v39 = *(_OWORD *)(a1 + 16);
  v40 = *(_OWORD *)(a1 + 32);
  if ( PreviousMode == 1 )
  {
    v37 = 0LL;
    v11 = v39;
    if ( (unsigned __int64)v39 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v37.m128i_i32[0] = *(_DWORD *)v11;
    v16 = *(_QWORD *)(v11 + 8);
    v37.m128i_i64[1] = v16;
    DestinationString = (UNICODE_STRING)v37;
    v17 = _mm_cvtsi128_si32(v37);
    if ( v17 )
    {
      if ( (v16 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = v17 + v16;
      if ( v11 > 0x7FFFFFFF0000LL || v17 + v16 < v16 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
  }
  Length = DestinationString.Length;
  if ( DestinationString.Length )
  {
    TransientPoolWithQuota = (wchar_t *)CmpAllocateTransientPoolWithQuota(v11, DestinationString.Length, 892816707LL);
    v14 = TransientPoolWithQuota;
    if ( !TransientPoolWithQuota )
    {
      v18 = -1073741670;
      v27 = -1073741670;
      UnloadRundown = v26;
      goto LABEL_35;
    }
    memmove(TransientPoolWithQuota, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v14;
    v4 = Handle;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v14 = 0LL;
  }
  *(_QWORD *)&v39 = &DestinationString;
  v40 = 0LL;
  if ( PreviousMode == 1 )
  {
    v18 = CmConvertHandleToKernelHandle(*((void **)&v38 + 1), v15, 1, 0, &v33);
    v27 = v18;
    if ( v18 < 0 )
      goto LABEL_34;
    *((_QWORD *)&v38 + 1) = v33;
  }
  DWORD2(v43[1]) = 0;
  LODWORD(v43[0]) = 4;
  v19 = ObReferenceObjectByNameEx((__int64)&v38, 0LL, 0, (__int64)CmKeyObjectType, 0, (__int64)v43, (__int64 *)Object);
  if ( v19 == -1073741772 )
    v19 = -1073741811;
  v18 = v19;
  v27 = v19;
  if ( v19 < 0 )
    goto LABEL_34;
  if ( !v4 )
    goto LABEL_27;
  v32 = 0LL;
  v18 = ObReferenceObjectByHandle(v4, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v32, 0LL);
  v7 = v32;
  v27 = v18;
  if ( v18 < 0 )
  {
LABEL_34:
    UnloadRundown = v26;
    goto LABEL_35;
  }
  KeResetEvent((PRKEVENT)v32);
LABEL_27:
  if ( !CmpCallBackCount || (v20 = CmpIsRegistryLockAcquired() == 0, v21 = 1, !v20) )
    v21 = 0;
  if ( !v21 )
  {
LABEL_32:
    ExWnfHiveUnloaded(&DestinationString);
    LODWORD(v32) = 0;
    if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive() )
    {
LABEL_60:
      v18 = -1073741431;
      v27 = -1073741431;
    }
    else
    {
      while ( 1 )
      {
        LOBYTE(v23) = a3;
        v18 = CmpPerformUnloadKey(Object[0], a2, v23, v7);
        v27 = v18;
        if ( v18 != -1073741267 )
          break;
        CmpRetryBackOff(&v32, v24, 3221226029LL);
        if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive() )
          goto LABEL_60;
      }
    }
    goto LABEL_34;
  }
  *(PVOID *)&v41[0] = Object[0];
  *((_QWORD *)&v41[0] + 1) = v7;
  v22 = CmpCallCallBacksEx(0x22u, v41, 0LL, 1, 0x23u, (__int64)Object[0], (__int64)v34);
  v18 = v22;
  v27 = v22;
  if ( v22 >= 0 )
  {
    v8 = 1;
    goto LABEL_32;
  }
  UnloadRundown = v26;
  if ( v22 == -1073740541 )
  {
    v18 = 0;
    v27 = 0;
  }
LABEL_35:
  if ( v8 )
    v27 = CmPostCallbackNotificationEx(35, (__int64)Object[0], v18, (__int64)v41, 0LL, v34);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( v14 )
    CmSiFreeMemory((PPRIVILEGE_SET)v14);
  if ( v33 )
    ZwClose(v33);
  CmpCleanupParseContext(v43, 0LL);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v27;
}

NTSTATUS __stdcall NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  PHANDLE v4; // r12
  KPROCESSOR_MODE PreviousMode; // r15
  int v6; // edi
  ULONG v7; // edi
  NTSTATUS result; // eax
  char *v9; // r14
  POBJECT_TYPE *v10; // rsi
  NTSTATUS v11; // ebx
  struct _KTHREAD *CurrentThread; // r13
  __int64 Process; // rbx
  _QWORD *v14; // r12
  ULONG_PTR v15; // rax
  _KPROCESS *v16; // rdx
  signed __int64 v17; // r8
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v20; // rdx
  signed __int64 *v21; // r13
  PVOID Object; // [rsp+68h] [rbp-210h] BYREF
  PHANDLE v24; // [rsp+70h] [rbp-208h]
  void *v25; // [rsp+78h] [rbp-200h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-1F8h]
  _QWORD *v27; // [rsp+88h] [rbp-1F0h] BYREF
  __int128 v28; // [rsp+90h] [rbp-1E8h]
  __int64 v29; // [rsp+A0h] [rbp-1D8h]
  struct _KTHREAD *v30; // [rsp+A8h] [rbp-1D0h]
  PVOID v31[20]; // [rsp+B0h] [rbp-1C8h] BYREF
  _QWORD v32[28]; // [rsp+150h] [rbp-128h] BYREF

  v4 = TokenHandle;
  v24 = TokenHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 73714;
  if ( PreviousMode )
    v6 = 7666;
  v7 = HandleAttributes & v6;
  if ( PreviousMode )
  {
    v20 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = *(_QWORD *)v20;
  }
  Object = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             4096,
             (__int64)PsProcessType,
             KeGetCurrentThread()->PreviousMode,
             0x65537350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v9 = (char *)PsReferencePrimaryTokenWithTag((__int64)Object, 0x746C6644u);
    ObfDereferenceObjectWithTag(Object, 0x65537350u);
    v10 = SeTokenObjectType;
    memset(v32, 0, sizeof(v32));
    memset(v31, 0, sizeof(v31));
    v25 = 0LL;
    v11 = ObReferenceObjectByPointerWithTag(v9, 0, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, 0x6E48624Fu);
    if ( v11 >= 0 )
    {
      if ( !v10 )
        v10 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v9 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v9 - 48) >> 8)];
      if ( (v7 & (_DWORD)v10[9]) != 0 || (*(v9 - 21) & 1) != 0 && *((_QWORD *)v9 - 2) )
      {
        ++ObpInvalidOpenByPointer;
        ObfDereferenceObjectWithTag(v9, 0x6E48624Fu);
        v11 = -1073741811;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        Process = (__int64)CurrentThread->ApcState.Process;
        v28 = 0LL;
        v29 = *(_QWORD *)(Process + 1088);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v30 = KeGetCurrentThread();
          --v30->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v14 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObjectWithTag(v14, 0x75536553u);
            LODWORD(v28) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
          }
          else
          {
            v14 = 0LL;
          }
          v21 = (signed __int64 *)BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v21);
          KeAbPostRelease((ULONG_PTR)v21);
          KeLeaveCriticalRegionThread((__int64)v30);
        }
        else
        {
          v14 = 0LL;
        }
        v27 = v14;
        v15 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
        *((_QWORD *)&v28 + 1) = v15;
        if ( HIDWORD(NlsMbOemCodePageTag) )
        {
          if ( v15 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 1144) + 284LL));
            if ( *((_QWORD *)&v28 + 1) == SepTokenLeakToken )
              __debugbreak();
            v14 = v27;
          }
          if ( v14 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v14[143] + 284LL));
            if ( v27 == (_QWORD *)SepTokenLeakToken )
              __debugbreak();
          }
        }
        v11 = SepCreateAccessStateFromSubjectContext(&v27, v31, v32, DesiredAccess, (_DWORD *)v10 + 19);
        if ( v11 < 0 )
        {
          ObfDereferenceObjectWithTag(v9, 0x6E48624Fu);
          v4 = v24;
        }
        else
        {
          v11 = ObpCreateHandle(1, v9, 0, (__int64)v31, 0, v7, PreviousMode, 0LL, 0, 0LL, &v25);
          if ( v11 < 0 )
            ObfDereferenceObjectWithTag(v9, 0x6E48624Fu);
          SepDeleteAccessState((__int64)v31);
          if ( HIDWORD(NlsMbOemCodePageTag) )
          {
            if ( v31[6] )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v31[6] + 143) + 284LL));
              if ( v31[6] == (PVOID)SepTokenLeakToken )
                __debugbreak();
            }
            if ( v31[4] )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v31[4] + 143) + 284LL));
              if ( v31[4] == (PVOID)SepTokenLeakToken )
                __debugbreak();
            }
          }
          v16 = KeGetCurrentThread()->ApcState.Process;
          v17 = (signed __int64)v31[6];
          _m_prefetchw(&v16[1].Affinity.StaticBitmap[5]);
          v18 = v16[1].Affinity.StaticBitmap[5];
          if ( (v18 ^ (unsigned __int64)v31[6]) >= 0xF )
          {
LABEL_37:
            ObfDereferenceObjectWithTag((PVOID)v17, 0x75536553u);
          }
          else
          {
            while ( 1 )
            {
              v19 = v18;
              v18 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&v16[1].Affinity.StaticBitmap[5],
                      v18 + 1,
                      v18);
              if ( v19 == v18 )
                break;
              if ( (v17 ^ (unsigned __int64)v18) >= 0xF )
                goto LABEL_37;
            }
            if ( ObpTraceFlags )
              ObpPushStackInfo(v17 - 48, 0, 1u, 0x75536553u);
          }
          v31[6] = 0LL;
          if ( v31[4] )
            ObfDereferenceObjectWithTag(v31[4], 0x75536553u);
          v4 = v24;
        }
      }
    }
    ObfDereferenceObject(v9);
    if ( v11 >= 0 )
      *v4 = v25;
    return v11;
  }
  return result;
}

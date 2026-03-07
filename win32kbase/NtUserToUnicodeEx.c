__int64 __fastcall NtUserToUnicodeEx(__int64 a1, int a2, _OWORD *a3, volatile void *a4, int a5, int a6, __int64 a7)
{
  int v9; // r15d
  struct tagTHREADINFO *v10; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rax
  char v13; // al
  struct tagKERNELHANDLETABLEENTRY *v14; // rsi
  _OWORD *v15; // rax
  __int64 v16; // rcx
  SIZE_T v17; // r14
  NSInstrumentation::CLeakTrackingAllocator *v18; // rsi
  int v19; // eax
  __int64 Pool2; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rax
  unsigned int v23; // edx
  __int64 v24; // r10
  char v25; // r15
  unsigned int v26; // esi
  unsigned int v28; // [rsp+40h] [rbp-2B8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-2B0h]
  int v30; // [rsp+50h] [rbp-2A8h]
  int v31; // [rsp+54h] [rbp-2A4h]
  int v32; // [rsp+58h] [rbp-2A0h]
  __int64 v33; // [rsp+70h] [rbp-288h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-280h] BYREF
  __int64 v35; // [rsp+80h] [rbp-278h] BYREF
  _QWORD *v36; // [rsp+88h] [rbp-270h]
  _QWORD *v37; // [rsp+98h] [rbp-260h]
  __int64 v38; // [rsp+A0h] [rbp-258h]
  _QWORD v39[2]; // [rsp+B0h] [rbp-248h] BYREF
  __int128 v40; // [rsp+C0h] [rbp-238h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-228h]
  __int64 *v42; // [rsp+E8h] [rbp-210h]
  unsigned int *v43; // [rsp+F0h] [rbp-208h]
  PVOID BackTrace[20]; // [rsp+100h] [rbp-1F8h] BYREF
  _QWORD v45[2]; // [rsp+1A0h] [rbp-158h] BYREF
  _BYTE v46[256]; // [rsp+1B0h] [rbp-148h] BYREF

  v32 = a2;
  v9 = a1;
  v30 = a1;
  v38 = a7;
  v45[0] = 0LL;
  v36 = 0LL;
  v31 = 0;
  v40 = 0LL;
  v41 = 0LL;
  LOBYTE(a1) = 1;
  v10 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process )
    {
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v12 )
      {
        if ( (*(_DWORD *)(v12 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v13 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v13 = 0;
          }
          if ( v13 )
          {
            while ( 1 )
            {
              v14 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              *((_QWORD *)v14 + 2) = 0LL;
              if ( !*(_DWORD *)(*(_QWORD *)v14 + 8LL) )
              {
                v28 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              }
              HMUnlockObject(*(_QWORD *)v14);
            }
          }
        }
      }
    }
  }
  if ( a5 <= 0 )
  {
    v26 = 0;
    UserSetLastError(87LL);
    goto LABEL_49;
  }
  v15 = v46;
  v16 = 2LL;
  do
  {
    *v15 = *a3;
    v15[1] = a3[1];
    v15[2] = a3[2];
    v15[3] = a3[3];
    v15[4] = a3[4];
    v15[5] = a3[5];
    v15[6] = a3[6];
    v15 += 8;
    *(v15 - 1) = a3[7];
    a3 += 8;
    --v16;
  }
  while ( v16 );
  v17 = 2LL * a5;
  ProbeForWrite(a4, v17, 2u);
  if ( a5 >= 4 )
  {
    v28 = 1651864405;
    v33 = 260LL;
    v18 = gpLeakTrackingAllocator;
    v42 = &v33;
    v43 = &v28;
    v35 = 2LL * a5;
    v19 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(261LL, v17, 1651864405LL);
      v21 = Pool2;
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
      goto LABEL_16;
    }
    if ( v19 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x62757355u)
        && v17 + 16 >= v17 )
      {
        v22 = (_QWORD *)ExAllocatePool2(v33 & 0xFFFFFFFFFFFFFFFCuLL | 1, v17 + 16, v28);
        v21 = (__int64)v22;
        if ( v22 )
          _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
        v37 = v22;
        if ( !v22 || (*v22 = 1651864405LL, v21 = (__int64)(v22 + 2), v37 = v22 + 2, v22 == (_QWORD *)-16LL) )
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v18 + 1),
            (const void *)0x62757355);
        goto LABEL_44;
      }
      goto LABEL_43;
    }
    if ( v19 == 2 )
    {
      v34 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x62757355u, &v34) )
      {
        v39[0] = &v33;
        v39[1] = &v28;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
                  v18,
                  v39,
                  &v35);
        v21 = Pool2;
LABEL_16:
        v29 = Pool2;
LABEL_17:
        v36 = (_QWORD *)v21;
        if ( !v21 )
          ExRaiseStatus(-1073741801);
        v31 = 1;
        if ( qword_1C02D65C8 )
          qword_1C02D65C8(v21, &v40, Win32FreePool);
        v9 = v30;
        goto LABEL_46;
      }
      v25 = 0;
      if ( v17 < 0x1000 || (v17 & 0xFFF) != 0 )
      {
        v25 = 1;
        v24 += 16LL;
        v35 = v24;
      }
      v21 = ExAllocatePool2(261LL, v24, v23);
      if ( v21 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v25 && (unsigned __int64)(v21 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v18,
                                  v21,
                                  v34,
                                  BackTrace) )
          {
            v21 += 16LL;
LABEL_44:
            v29 = v21;
            goto LABEL_17;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v18,
                                     v21,
                                     v34,
                                     BackTrace) )
        {
          goto LABEL_44;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v21);
      }
    }
LABEL_43:
    v21 = 0LL;
    goto LABEL_44;
  }
  v21 = (__int64)v45;
  v36 = v45;
LABEL_46:
  v26 = xxxToUnicodeEx(v9, v32, (unsigned int)v46, v21, a5, a6, v38);
  memmove((void *)a4, (const void *)v21, v17);
  if ( v31 && qword_1C02D66D0 )
    qword_1C02D66D0(&v40);
LABEL_49:
  UserSessionSwitchLeaveCrit();
  return v26;
}

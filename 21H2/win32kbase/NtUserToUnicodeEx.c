/*
 * XREFs of NtUserToUnicodeEx @ 0x1C003F590
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     xxxToUnicodeEx @ 0x1C003FA20 (xxxToUnicodeEx.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserToUnicodeEx(int a1, int a2, _OWORD *a3, volatile void *a4, int a5, int a6, __int64 a7)
{
  int v9; // r14d
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v18; // rdi
  _OWORD *v19; // rax
  __int64 v20; // rcx
  SIZE_T v21; // rdi
  PVOID v22; // rsi
  __int64 Pool2; // rdi
  unsigned __int64 i; // rcx
  char v25; // r14
  unsigned int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v32; // rcx
  int v34; // [rsp+44h] [rbp-2B4h]
  int v35; // [rsp+58h] [rbp-2A0h] BYREF
  _QWORD *v36; // [rsp+70h] [rbp-288h]
  __int128 v37; // [rsp+80h] [rbp-278h]
  __int64 v38; // [rsp+98h] [rbp-260h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-258h]
  unsigned __int64 v40; // [rsp+A8h] [rbp-250h]
  __int64 v41; // [rsp+B0h] [rbp-248h]
  __int128 v42; // [rsp+C0h] [rbp-238h]
  __int128 v43; // [rsp+D0h] [rbp-228h] BYREF
  __int64 v44; // [rsp+E0h] [rbp-218h]
  PVOID BackTrace[20]; // [rsp+100h] [rbp-1F8h] BYREF
  _QWORD v46[2]; // [rsp+1A0h] [rbp-158h] BYREF
  _BYTE v47[256]; // [rsp+1B0h] [rbp-148h] BYREF

  v9 = a2;
  v41 = a7;
  v46[0] = 0LL;
  v36 = 0LL;
  v34 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v11 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v11;
  if ( v11 )
  {
    *((_DWORD *)v11 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13, v12, v14, v15);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v18 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          *((_QWORD *)v18 + 2) = 0LL;
          v32 = *(_QWORD *)v18;
          if ( !*(_DWORD *)(*(_QWORD *)v18 + 8LL) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v12, v14);
            v32 = *(_QWORD *)v18;
          }
          HMUnlockObject(v32);
        }
      }
    }
  }
  if ( a5 <= 0 )
  {
    v26 = 0;
    UserSetLastError(87LL, v12, v14, v15);
  }
  else
  {
    v19 = v47;
    v20 = 2LL;
    do
    {
      *v19 = *a3;
      v19[1] = a3[1];
      v19[2] = a3[2];
      v19[3] = a3[3];
      v19[4] = a3[4];
      v19[5] = a3[5];
      v19[6] = a3[6];
      v19 += 8;
      *(v19 - 1) = a3[7];
      a3 += 8;
      --v20;
    }
    while ( v20 );
    v21 = 2LL * a5;
    ProbeForWrite(a4, v21, 2u);
    if ( a5 < 4 )
    {
      Pool2 = (__int64)v46;
      v36 = v46;
    }
    else
    {
      v35 = 1651864405;
      v38 = 260LL;
      v22 = gpLeakTrackingAllocator;
      *(_QWORD *)&v42 = &v38;
      *((_QWORD *)&v42 + 1) = &v35;
      v37 = v42;
      v39 = 2LL * a5;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x62757355) == 0x62757355 )
      {
        for ( i = 0LL; ; ++i )
        {
          v40 = i;
          if ( i >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
            break;
          if ( *((_DWORD *)gpLeakTrackingAllocator + i) == 1651864405 )
          {
            v25 = 0;
            if ( v21 < 0x1000 || (v21 & 0xFFF) != 0 )
            {
              v25 = 1;
              v21 += 16LL;
              v39 = v21;
            }
            Pool2 = ExAllocatePool2(*(_QWORD *)v37 & 0xFFFFFFFFFFFFFFFCuLL | 1, v21);
            if ( Pool2 )
            {
              memset(BackTrace, 0, sizeof(BackTrace));
              RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
              if ( v25 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
              {
                if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                        v22,
                                        Pool2,
                                        BackTrace) )
                {
                  Pool2 += 16LL;
LABEL_32:
                  v9 = a2;
                  goto LABEL_15;
                }
              }
              else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                           v22,
                                           Pool2,
                                           BackTrace) )
              {
                goto LABEL_32;
              }
              ExFreePoolWithTag((PVOID)Pool2, 0);
            }
            Pool2 = 0LL;
            goto LABEL_32;
          }
        }
        v9 = a2;
      }
      Pool2 = ExAllocatePool2(*(_QWORD *)v37 & 0xFFFFFFFFFFFFFFFCuLL | 1, v21);
LABEL_15:
      v36 = (_QWORD *)Pool2;
      if ( !Pool2 )
        ExRaiseStatus(-1073741801);
      v34 = 1;
      if ( qword_1C029BD10 )
        qword_1C029BD10(Pool2, &v43, Win32FreePool);
    }
    v26 = xxxToUnicodeEx(a1, v9, (unsigned int)v47, Pool2, a5, a6, v41);
    memmove((void *)a4, (const void *)Pool2, 2LL * a5);
    if ( v34 && qword_1C029BE28 )
      qword_1C029BE28(&v43);
  }
  UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
  return v26;
}

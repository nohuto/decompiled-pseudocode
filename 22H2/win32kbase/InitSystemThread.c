/*
 * XREFs of InitSystemThread @ 0x1C00B46F0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00CCFE8 (VideoPortCalloutThread.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     InitClientInfo @ 0x1C0050060 (InitClientInfo.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v9; // rdi
  struct tagTHREADINFO *v10; // rdi
  unsigned __int64 v11; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v12; // rcx
  __int64 QuotaZInit; // rax
  unsigned __int64 v14; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v22; // rax

  PsGetThreadProcess(KeGetCurrentThread());
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v2, v3, v4);
  v7 = 0;
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v9 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v22 = *v9;
          v9[2] = 0LL;
          if ( !*(_DWORD *)(v22 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v9);
        }
      }
    }
  }
  v10 = PtiCurrentShared();
  QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v12, v11, 0x118uLL, 0x69637355u);
  *((_QWORD *)v10 + 60) = QuotaZInit;
  if ( QuotaZInit )
  {
    *((_DWORD *)v10 + 122) = *((_DWORD *)v10 + 122) & 0xFFFFFFF3 | 4;
    if ( (unsigned int)InitClientInfo((__int64)v10, v14, v16) )
    {
      if ( a1 )
      {
        v18 = (char *)*((_QWORD *)v10 + 62);
        if ( v18 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v18);
        v19 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                v15,
                (unsigned __int64)v18,
                *(unsigned __int16 *)a1 + 18LL,
                0x78747355u);
        *((_QWORD *)v10 + 62) = v19;
        if ( v19 )
        {
          *(_QWORD *)(v19 + 8) = v19 + 16;
          memmove(*(void **)(*((_QWORD *)v10 + 62) + 8LL), a1[1], *(unsigned __int16 *)a1);
          v14 = (unsigned __int64)*(unsigned __int16 *)a1 >> 1;
          *(_WORD *)(*(_QWORD *)(*((_QWORD *)v10 + 62) + 8LL) + 2 * v14) = 0;
          *(_WORD *)(*((_QWORD *)v10 + 62) + 2LL) = *(_WORD *)a1 + 2;
          v15 = (NSInstrumentation::CLeakTrackingAllocator *)*((_QWORD *)v10 + 62);
          *(_WORD *)v15 = *(_WORD *)a1;
        }
      }
      v20 = *((_QWORD *)v10 + 53);
      if ( v20 && (*(_DWORD *)(v20 + 12) & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 205LL);
    }
    else
    {
      v7 = -1073741823;
    }
  }
  else
  {
    v7 = -1073741801;
  }
  UserSessionSwitchLeaveCrit((__int64)v15, v14, v16, v17);
  return v7;
}

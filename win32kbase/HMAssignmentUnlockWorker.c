/*
 * XREFs of HMAssignmentUnlockWorker @ 0x1C007294C
 * Callers:
 *     ?UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ @ 0x1C00728D0 (-UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00782A0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0078460 (DestroyThreadsObjects.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0086700 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C008DC04 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C008E99C (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C0094B2C (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     DestroyKL @ 0x1C00CF5A8 (DestroyKL.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C00F39A0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C01F2168 (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C02157D0 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 */

__int64 __fastcall HMAssignmentUnlockWorker(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return HMUnlockObject(result);
  return result;
}

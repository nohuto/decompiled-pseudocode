/*
 * XREFs of VslKernelShadowStackAssist @ 0x140549640
 * Callers:
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     KxContextToKframes @ 0x1402D7DC0 (KxContextToKframes.c)
 *     KiCheckForSListAddress @ 0x1403510B0 (KiCheckForSListAddress.c)
 *     KiCheckForFreezeExecution @ 0x1403691F0 (KiCheckForFreezeExecution.c)
 *     KiDebugTrapOrFault @ 0x140423580 (KiDebugTrapOrFault.c)
 *     KiProcessDeferredDpcWatchdogViolation @ 0x140578D88 (KiProcessDeferredDpcWatchdogViolation.c)
 *     KeKernelShadowStackRestoreContext @ 0x1405795E0 (KeKernelShadowStackRestoreContext.c)
 *     KiProcessControlProtectionFromKernelMode @ 0x140579EC8 (KiProcessControlProtectionFromKernelMode.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslKernelShadowStackAssist(int a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4, ULONG_PTR a5, int a6)
{
  ULONG_PTR v7; // rdi
  __int64 result; // rax
  int v11; // ebx
  _QWORD v12[14]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter3[20]; // [rsp+A0h] [rbp-60h] BYREF

  v7 = a1;
  memset(v12, 0, 0x68uLL);
  v12[5] = a5;
  LODWORD(v12[6]) = a6;
  LODWORD(v12[1]) = v7;
  v12[2] = a2;
  v12[3] = a3;
  v12[4] = a4;
  result = VslpEnterIumSecureMode(2u, 269, 0, (__int64)v12);
  v11 = result;
  if ( (int)result < 0 )
  {
    memset(BugCheckParameter3, 0, 0x98uLL);
    LODWORD(BugCheckParameter3[0]) = v11;
    BugCheckParameter3[4] = 67LL;
    LODWORD(BugCheckParameter3[3]) = 7;
    BugCheckParameter3[5] = v7;
    BugCheckParameter3[6] = a2;
    BugCheckParameter3[7] = a3;
    BugCheckParameter3[8] = a4;
    BugCheckParameter3[9] = a5;
    BugCheckParameter3[10] = a6;
    KeBugCheckEx(0x139u, 0x43uLL, 0LL, (ULONG_PTR)BugCheckParameter3, 0LL);
  }
  return result;
}

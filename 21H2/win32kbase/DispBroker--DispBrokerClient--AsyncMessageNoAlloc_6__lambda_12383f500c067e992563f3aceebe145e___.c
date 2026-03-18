/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_12383f500c067e992563f3aceebe145e___ @ 0x1C01431A4
 * Callers:
 *     ?DispBrokerAsyncRefreshOrientation@@YAJKW4ORIENTATION_PREFERENCE@@@Z @ 0x1C0143830 (-DispBrokerAsyncRefreshOrientation@@YAJKW4ORIENTATION_PREFERENCE@@@Z.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x1C00BE3F0 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_12383f500c067e992563f3aceebe145e___(
        __int64 a1,
        int **a2)
{
  __int64 result; // rax
  int *v4; // rax
  int v5; // ecx
  int *v6; // rax
  _DWORD v7[20]; // [rsp+40h] [rbp-68h] BYREF

  memset(v7, 0, 0x48uLL);
  v7[10] = 6;
  v7[11] = 1;
  result = DrvSampleDisplayState(&v7[12]);
  if ( (int)result >= 0 )
  {
    LOWORD(v7[1]) = 0x8000;
    v4 = *a2;
    v7[0] = 4718624;
    v5 = *v4;
    v6 = a2[1];
    v7[16] = v5;
    v7[17] = *v6;
    return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_1C0296958)(
             0x10000LL,
             v7,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}

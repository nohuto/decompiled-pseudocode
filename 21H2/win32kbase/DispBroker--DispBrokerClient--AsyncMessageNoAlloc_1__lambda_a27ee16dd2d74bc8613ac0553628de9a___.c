/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C006856C
 * Callers:
 *     ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C0068550 (-DispBrokerAsyncSessionSwitched@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C007EDC0 (xxxRemoteConnect.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x1C00BE3F0 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // eax
  _DWORD v5[20]; // [rsp+40h] [rbp-68h] BYREF

  memset(v5, 0, 0x48uLL);
  v5[10] = 1;
  v5[11] = 1;
  result = DrvSampleDisplayState(&v5[12]);
  if ( (int)result >= 0 )
  {
    v5[0] = 4718624;
    LOWORD(v5[1]) = 0x8000;
    v5[16] = gbConnected;
    v4 = (int)qword_1C029CC70;
    if ( qword_1C029CC70 )
      v4 = qword_1C029CC70(v2, v1, v3);
    v5[17] = v4;
    return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_1C0296958)(
             0x10000LL,
             v5,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}

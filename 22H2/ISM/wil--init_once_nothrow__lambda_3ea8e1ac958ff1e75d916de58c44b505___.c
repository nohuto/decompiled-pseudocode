/*
 * XREFs of wil::init_once_nothrow__lambda_3ea8e1ac958ff1e75d916de58c44b505___ @ 0x1800A4734
 * Callers:
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800A4880 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800675D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _lambda_3ea8e1ac958ff1e75d916de58c44b505_::operator() @ 0x1800A47EC (_lambda_3ea8e1ac958ff1e75d916de58c44b505_--operator().c)
 */

__int64 __fastcall wil::init_once_nothrow__lambda_3ea8e1ac958ff1e75d916de58c44b505___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const char *v3; // r9
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]

  v9 = HIDWORD(a3);
  fPending = 0;
  if ( !InitOnceBeginInitialize(&InitOnce, 0, &fPending, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x218, (__int64)"wil", v3);
  if ( fPending )
  {
    v5 = lambda_3ea8e1ac958ff1e75d916de58c44b505_::operator()();
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x21D, (__int64)"wil", (const char *)(unsigned int)v5);
      InitOnceComplete(&InitOnce, 4u, 0LL);
      return v6;
    }
    InitOnceComplete(&InitOnce, 0, 0LL);
  }
  return 0LL;
}

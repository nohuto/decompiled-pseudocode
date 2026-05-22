/*
 * XREFs of _lambda_31f1c476cd9a7eb96f2f1b165430548d_::operator() @ 0x18017A0E0
 * Callers:
 *     _lambda_f70b1d3ca5d586fe2915dfa0db6ded94_::_lambda_invoker_cdecl_ @ 0x180179F60 (_lambda_f70b1d3ca5d586fe2915dfa0db6ded94_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

float __fastcall lambda_31f1c476cd9a7eb96f2f1b165430548d_::operator()(__int64 a1, const WCHAR *a2, float a3)
{
  DWORD v4; // [rsp+60h] [rbp+8h] BYREF
  int v5; // [rsp+64h] [rbp+Ch]
  int v6; // [rsp+78h] [rbp+20h] BYREF

  v5 = HIDWORD(a1);
  v4 = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\EdgeGestureMetrics",
         a2,
         0x10u,
         0LL,
         &v6,
         &v4) )
  {
    return a3;
  }
  else
  {
    return (float)v6;
  }
}

/*
 * XREFs of xxxClientEnableMMCSS @ 0x1C0214C30
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 *     _lambda_dc20bfb5fb2414edf034afb823885887_::operator() @ 0x1C012DEB8 (_lambda_dc20bfb5fb2414edf034afb823885887_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientEnableMMCSS(int a1)
{
  int v1; // ebx
  __int64 *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h]

  v6 = 0LL;
  v4 = 0;
  v5 = a1;
  EtwTraceBeginCallback(57LL);
  v1 = KeUserModeCallback(57LL, &v5, 4LL, &v6, &v4);
  EtwTraceEndCallback(57LL);
  if ( v1 < 0 || v4 != 24 )
    return 0LL;
  v2 = (__int64 *)v6;
  if ( v6 + 8 < v6 || v6 + 8 > MmUserProbeAddress )
    v2 = (__int64 *)MmUserProbeAddress;
  result = *v2;
  v7 = *v2;
  return result;
}

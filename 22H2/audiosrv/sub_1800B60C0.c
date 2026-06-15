/*
 * XREFs of sub_1800B60C0 @ 0x1800B60C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     sub_1800B4B44 @ 0x1800B4B44 (sub_1800B4B44.c)
 *     sub_1800B5C18 @ 0x1800B5C18 (sub_1800B5C18.c)
 *     sub_1800B5F60 @ 0x1800B5F60 (sub_1800B5F60.c)
 */

__int64 __fastcall sub_1800B60C0(__int64 a1)
{
  volatile signed __int32 **v1; // rbx
  volatile signed __int32 *v2; // rax
  __int64 v3; // r8
  _BYTE v5[1024]; // [rsp+20h] [rbp-1418h] BYREF
  _WORD v6[2048]; // [rsp+420h] [rbp-1018h] BYREF

  v1 = (volatile signed __int32 **)(a1 + 184);
  v2 = *(volatile signed __int32 **)(a1 + 184);
  if ( !v2 )
  {
    sub_1800B4B44(v6, 2048LL, a1 + 24);
    sub_1800B5C18(v5, 1024LL);
    v3 = -1LL;
    do
      ++v3;
    while ( v5[v3] );
    sub_1800B5F60(v1, (__int64)v5, (volatile signed __int32 *)(v3 + 1));
    v2 = *v1;
  }
  return (unsigned __int64)(v2 + 1) & -(__int64)(v2 != 0LL);
}

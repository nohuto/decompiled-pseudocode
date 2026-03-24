/*
 * XREFs of sub_1405D7994 @ 0x1405D7994
 * Callers:
 *     sub_1405D78F8 @ 0x1405D78F8 (sub_1405D78F8.c)
 * Callees:
 *     sub_1405D7AAC @ 0x1405D7AAC (sub_1405D7AAC.c)
 *     sub_1406873F0 @ 0x1406873F0 (sub_1406873F0.c)
 *     sub_140687500 @ 0x140687500 (sub_140687500.c)
 *     sub_140688008 @ 0x140688008 (sub_140688008.c)
 */

__int64 __fastcall sub_1405D7994(__int64 a1, _DWORD *a2)
{
  int v2; // esi
  void *v5; // rsi
  int v6; // edi
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF
  PMDL Mdl; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2[1];
  v8 = 0LL;
  v5 = (void *)(*(_QWORD *)(a1 + 32) + (v2 & 0xFFFFFFF));
  Mdl = 0LL;
  v6 = sub_1406873F0(v5);
  if ( v6 >= 0 )
  {
    v6 = sub_1405D7AAC((_DWORD)v5, a2[2] & 0xFFFFFFF, (*a2 & 2) == 0, (unsigned int)&Mdl, (__int64)&v8);
    if ( v6 >= 0 )
    {
      v6 = sub_140687500(
             1,
             (_DWORD)v5,
             v8,
             a2[2] & 0xFFFFFFF,
             *(_QWORD *)(a1 + 56) + 72LL,
             a2[1] & 0xFFFFFFF,
             *(_QWORD *)(a1 + 56) + 80LL);
      if ( v6 >= 0 )
        *a2 &= 0xFFFFFC03;
    }
  }
  sub_140688008(Mdl);
  return (unsigned int)v6;
}

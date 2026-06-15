/*
 * XREFs of sub_180067BDC @ 0x180067BDC
 * Callers:
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_18002732C @ 0x18002732C (sub_18002732C.c)
 *     sub_180028DAC @ 0x180028DAC (sub_180028DAC.c)
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_0 @ 0x180059000 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_0.c)
 *     sub_18005B960 @ 0x18005B960 (sub_18005B960.c)
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 * Callees:
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_18011EACC @ 0x18011EACC (sub_18011EACC.c)
 */

__int64 __fastcall sub_180067BDC(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v5; // rax
  int v6; // eax
  int i; // edi

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == *(_DWORD *)(a2 + 8) )
  {
    while ( v2 > 0 )
      sub_18011EACC(a1, (unsigned int)--v2);
  }
  else
  {
    sub_1800384A4((__int64 *)a1);
    v5 = o_calloc(*(int *)(a2 + 8), 16LL);
    *(_QWORD *)a1 = v5;
    if ( v5 )
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 8);
  }
  v6 = *(_DWORD *)(a2 + 8);
  for ( i = 0; i < v6; ++i )
  {
    if ( i < 0 || i >= v6 )
    {
      sub_1800BB2C8(3221225612LL);
      JUMPOUT(0x180067C6FLL);
    }
    sub_1800273F8(a1, (_OWORD *)(*(_QWORD *)a2 + 16LL * i));
    v6 = *(_DWORD *)(a2 + 8);
  }
  return a1;
}

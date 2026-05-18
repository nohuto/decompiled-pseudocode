/*
 * XREFs of sub_1800339E0 @ 0x1800339E0
 * Callers:
 *     sub_180032DB0 @ 0x180032DB0 (sub_180032DB0.c)
 *     sub_180035060 @ 0x180035060 (sub_180035060.c)
 *     sub_180035220 @ 0x180035220 (sub_180035220.c)
 *     sub_1800358B0 @ 0x1800358B0 (sub_1800358B0.c)
 *     sub_180035AF0 @ 0x180035AF0 (sub_180035AF0.c)
 *     sub_180037010 @ 0x180037010 (sub_180037010.c)
 *     sub_18009ADA4 @ 0x18009ADA4 (sub_18009ADA4.c)
 *     sub_18009BA34 @ 0x18009BA34 (sub_18009BA34.c)
 *     sub_1800AA078 @ 0x1800AA078 (sub_1800AA078.c)
 *     sub_1800C9328 @ 0x1800C9328 (sub_1800C9328.c)
 *     sub_1800CCCC4 @ 0x1800CCCC4 (sub_1800CCCC4.c)
 *     sub_1800CD5CC @ 0x1800CD5CC (sub_1800CD5CC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800339E0(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rcx

  v3 = (__int64 *)*a1;
  v4 = (__int64 *)*a1;
  v5 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v5 + 8) >= a3 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v4 == v3 || a3 < *((_DWORD *)v4 + 8) )
LABEL_8:
    v4 = v3;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v4 != v3 )
  {
    v6 = v4[6];
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    *a2 = v4[5];
    a2[1] = v4[6];
  }
  return a2;
}

/*
 * XREFs of sub_1800229D0 @ 0x1800229D0
 * Callers:
 *     sub_180001E08 @ 0x180001E08 (sub_180001E08.c)
 *     sub_180037744 @ 0x180037744 (sub_180037744.c)
 *     sub_180048B1C @ 0x180048B1C (sub_180048B1C.c)
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_18005AAD0 @ 0x18005AAD0 (sub_18005AAD0.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     sub_18011A288 @ 0x18011A288 (sub_18011A288.c)
 *     sub_18011E18C @ 0x18011E18C (sub_18011E18C.c)
 * Callees:
 *     sub_1800230F0 @ 0x1800230F0 (sub_1800230F0.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800234D0 @ 0x1800234D0 (sub_1800234D0.c)
 */

__int64 __fastcall sub_1800229D0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rax

  v3 = a2;
  if ( a2 || (unsigned int)sub_1800234D0(a1) )
  {
    v6 = sub_1800233B0(a1 + 1656, v3);
    sub_1800230F0(v6);
    v7 = sub_1800233B0(a1 + 1672, v3);
    sub_1800230F0(v7);
    v8 = sub_1800233B0(a1 + 1688, v3);
    sub_1800230F0(v8);
    v9 = sub_1800234A0(a1 + 152, v3);
  }
  else
  {
    v9 = a1 + 168;
  }
  v10 = *(_DWORD *)(v9 + 8);
  v11 = 0;
  v12 = 0;
  if ( v10 <= 0 )
  {
LABEL_9:
    v12 = -1;
  }
  else
  {
    v13 = *(_QWORD *)v9;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v13 + 16LL * v12) - *a3;
      if ( !v14 )
        v14 = *(_QWORD *)(v13 + 16LL * v12 + 8) - a3[1];
      if ( !v14 )
        break;
      if ( ++v12 >= v10 )
        goto LABEL_9;
    }
  }
  LOBYTE(v11) = v12 != -1;
  return v11;
}

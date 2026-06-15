/*
 * XREFs of sub_18002EE80 @ 0x18002EE80
 * Callers:
 *     sub_18002EBB0 @ 0x18002EBB0 (sub_18002EBB0.c)
 *     sub_18002ED30 @ 0x18002ED30 (sub_18002ED30.c)
 * Callees:
 *     sub_1800320B0 @ 0x1800320B0 (sub_1800320B0.c)
 *     sub_1800E3598 @ 0x1800E3598 (sub_1800E3598.c)
 */

__int64 __fastcall sub_18002EE80(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 *v3; // rax
  __int64 *v4; // rcx
  __int64 *v5; // r8
  __int64 *v6; // r9
  __int64 v7; // r10
  unsigned int v9; // r10d
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = a1 + 40;
  v3 = *(__int64 **)(a1 + 40);
  v4 = (__int64 *)v3[1];
  v5 = v4;
  v6 = v3;
  while ( !*((_BYTE *)v5 + 25) )
  {
    v9 = *((_DWORD *)v5 + 7);
    if ( v9 >= (unsigned int)a2 )
    {
      if ( *((_BYTE *)v6 + 25) && (unsigned int)a2 < v9 )
        v6 = v5;
      v3 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  if ( !*((_BYTE *)v6 + 25) )
    v4 = (__int64 *)*v6;
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( (unsigned int)a2 >= *((_DWORD *)v4 + 7) )
    {
      v4 = (__int64 *)v4[2];
    }
    else
    {
      v6 = v4;
      v4 = (__int64 *)*v4;
    }
  }
  v11 = v3;
  v7 = 0LL;
  while ( v3 != v6 )
  {
    sub_1800E3598(&v11, a2, v5);
    v3 = v11;
  }
  if ( v7 )
  {
    sub_1800320B0(v2, v10, &v12);
    ++*(_DWORD *)(v10[0] + 32LL);
  }
  else
  {
    sub_1800320B0(v2, v10, &v12);
    *(_DWORD *)(v10[0] + 32LL) = 1;
  }
  return 0LL;
}

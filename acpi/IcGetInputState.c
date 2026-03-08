/*
 * XREFs of IcGetInputState @ 0x1C005EC04
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C005CD50 (IrqLibpGetVectorInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcGetInputState(unsigned int a1, _OWORD *a2)
{
  __int64 i; // r8
  unsigned int v3; // eax
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  _OWORD *v12; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax

  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    if ( &IcListHead == (__int64 *)i )
      return 3221226021LL;
    if ( *(int *)(i + 28) >= 0 )
    {
      v3 = *(_DWORD *)(i + 16);
      if ( a1 >= v3 && a1 <= *(_DWORD *)(i + 20) )
        break;
    }
  }
  v5 = (_OWORD *)(i + 200LL * (a1 - v3) + 32);
  v6 = v5[1];
  *a2 = *v5;
  v7 = v5[2];
  a2[1] = v6;
  v8 = v5[3];
  a2[2] = v7;
  v9 = v5[4];
  a2[3] = v8;
  v10 = v5[5];
  a2[4] = v9;
  v11 = v5[6];
  a2[5] = v10;
  a2[6] = v11;
  v12 = a2 + 8;
  v13 = v5[7];
  v5 += 8;
  *(v12 - 1) = v13;
  v14 = v5[1];
  *v12 = *v5;
  v15 = v5[2];
  v12[1] = v14;
  v16 = v5[3];
  v17 = *((_QWORD *)v5 + 8);
  v12[2] = v15;
  v12[3] = v16;
  *((_QWORD *)v12 + 8) = v17;
  return 0LL;
}

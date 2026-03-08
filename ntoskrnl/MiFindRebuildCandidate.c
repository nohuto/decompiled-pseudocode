/*
 * XREFs of MiFindRebuildCandidate @ 0x140466112
 * Callers:
 *     MiRebuildLargePage @ 0x140466288 (MiRebuildLargePage.c)
 * Callees:
 *     MiCollapseRunTopDown @ 0x1403B62B0 (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x1403B6374 (MiPfnsWorthTrying.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiFindRebuildCandidate(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, unsigned int *a6, int a7)
{
  int v8; // esi
  unsigned int *v10; // rdx
  int v11; // eax
  __int64 v12; // r14
  unsigned int *v13; // r15
  int v14; // r12d
  __int64 v15; // rdi
  unsigned __int64 v16; // r13
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  _QWORD v20[8]; // [rsp+30h] [rbp-40h] BYREF
  int v23; // [rsp+C8h] [rbp+58h] BYREF

  v23 = 0;
  v8 = a3;
  memset(v20, 0, sizeof(v20));
  v10 = a6;
  v20[6] = 0LL;
  v20[3] = a5;
  v11 = 0x800000;
  v12 = *a6;
  v20[4] = a4;
  v20[5] = a4;
  LOBYTE(v20[7]) = 0;
  v13 = &a6[4 * v12 + 4];
  if ( a4 == 512 )
  {
    v11 = 41943040;
  }
  else if ( a4 == 16 )
  {
    v11 = 25165824;
  }
  v14 = v11 | 0x8000000;
  if ( !a7 )
    v14 = v11;
  do
  {
LABEL_19:
    if ( !(_DWORD)v12 )
      return -1LL;
    v12 = (unsigned int)(v12 - 1);
  }
  while ( v13[2 * v12] != a2 || v13[2 * v12 + 1] != v8 );
  v20[0] = *(_QWORD *)&v10[4 * (unsigned int)v12 + 4];
  for ( v20[1] = *(_QWORD *)&v10[4 * (unsigned int)v12 + 6] + v20[0]; ; v20[1] = v15 - v16 )
  {
    if ( !(unsigned int)MiCollapseRunTopDown((__int64)v20) )
      goto LABEL_18;
    v15 = v20[1];
    v16 = v20[5];
    v17 = v20[1] - v20[5];
    v18 = MiPfnsWorthTrying(a1, 48LL * (v20[1] - v20[5]) - 0x220000000000LL, v20[5], v14, &v23);
    if ( !v18 )
      break;
    if ( v18 > v17 - v20[0] )
    {
      v20[3] = v15 - v18 - 1;
LABEL_18:
      v8 = a3;
      v10 = a6;
      goto LABEL_19;
    }
    if ( v18 > v16 )
      v16 = v18;
  }
  return v17;
}

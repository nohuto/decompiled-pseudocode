/*
 * XREFs of PpmHeteroDetectHgsCores @ 0x1403C2568
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1407BB39C (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 */

char __fastcall PpmHeteroDetectHgsCores(__int64 a1)
{
  char v1; // di
  unsigned __int8 v3; // r12
  char v4; // r13
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // r15
  unsigned __int8 v7; // si
  _BYTE *Prcb; // rax
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // dl
  __int64 v13; // rax
  __int64 v14; // r9
  bool v15; // zf
  __int64 v16; // r8
  bool v17; // cl
  char v18; // al
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // cl
  _BYTE *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned __int16 *v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h]
  __int16 v26; // [rsp+30h] [rbp-10h]
  int v27; // [rsp+32h] [rbp-Eh]
  __int16 v28; // [rsp+36h] [rbp-Ah]
  unsigned int v30; // [rsp+88h] [rbp+48h] BYREF

  v1 = 0;
  v27 = 0;
  v28 = 0;
  v30 = 0;
  if ( PpmHeteroHgsEnabled && PpmHeteroHgsHeteroCoreTypes )
  {
    v3 = 0;
    v26 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v1 = 1;
    v7 = -1;
    v25 = qword_140C113C8[0];
    v24 = (unsigned __int16 *)PpmCheckRegistered;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v24) )
    {
      Prcb = (_BYTE *)KeGetPrcb(v30);
      v9 = Prcb[33279];
      v10 = v9;
      if ( v9 <= v3 )
        v10 = v3;
      v3 = v10;
      if ( v9 >= v7 )
        v9 = v7;
      v7 = v9;
      v11 = Prcb[33278];
      v12 = v11;
      if ( v11 <= v5 )
        v12 = v5;
      v5 = v12;
      if ( v11 <= v6 )
        v11 = v6;
      v6 = v11;
      if ( Prcb[33276] )
        v4 = 1;
    }
    if ( PpmHeteroHgsPopulated )
    {
      v18 = (v4 != 0) + 1;
      *(_BYTE *)(a1 + 4) = v18;
      *(_BYTE *)(a1 + 5) = v18;
      v19 = *(_BYTE *)(a1 + 4);
      v26 = 0;
      if ( v19 >= v5 )
        v19 = v5;
      *(_BYTE *)(a1 + 4) = v19;
      v20 = *(_BYTE *)(a1 + 5);
      if ( v20 >= v6 )
        v20 = v6;
      *(_BYTE *)(a1 + 5) = v20;
      v25 = qword_140C113C8[0];
      v24 = (unsigned __int16 *)PpmCheckRegistered;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v24) )
      {
        v21 = (_BYTE *)KeGetPrcb(v30);
        v22 = v30 + 2LL;
        v23 = a1 + 2 * v22;
        *(_BYTE *)(v22 + v23 + 2) = v21[33277];
        *(_BYTE *)(v22 + v23 + 1) = v21[33278];
        *(_BYTE *)(v22 + v23) = v21[33279] != v7;
      }
    }
    else if ( v3 != v7 )
    {
      *(_WORD *)(a1 + 4) = 257;
      v25 = qword_140C113C8[0];
      v24 = (unsigned __int16 *)PpmCheckRegistered;
      v26 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v24) )
      {
        v13 = KeGetPrcb(v30);
        v14 = v30 + 2LL;
        v15 = *(_BYTE *)(v13 + 33279) == v7;
        v16 = a1 + 2 * v14;
        v17 = *(_BYTE *)(v13 + 33279) != v7;
        *(_BYTE *)(v14 + v16) = v17;
        *(_BYTE *)(v14 + v16 + 2) = v17;
        *(_BYTE *)(v14 + v16 + 1) = v15;
      }
    }
  }
  return v1;
}

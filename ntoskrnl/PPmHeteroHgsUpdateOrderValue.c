/*
 * XREFs of PPmHeteroHgsUpdateOrderValue @ 0x14059C04C
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x14038F314 (PpmHeteroUpdateHgsConfiguration.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x140237550 (KeCountSetBitsAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 */

char __fastcall PPmHeteroHgsUpdateOrderValue(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rsi
  char v5; // bl
  __int64 v8; // r13
  __int64 v9; // rcx
  int IsEmptyAffinity; // eax
  __int64 v11; // rcx
  int v12; // r12d
  __int64 v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // r15d
  char v16; // di
  __int64 v17; // rcx
  __int64 Prcb; // rax
  __int64 v19; // rax
  int v20; // esi
  unsigned int v21; // r12d
  __int64 v22; // rcx
  unsigned __int8 v23; // al
  int v24; // r12d
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // al
  unsigned int v29; // [rsp+20h] [rbp-20h] BYREF
  int v30; // [rsp+24h] [rbp-1Ch]
  unsigned __int16 *v31; // [rsp+28h] [rbp-18h] BYREF
  __int64 v32; // [rsp+30h] [rbp-10h]
  __int16 v33; // [rsp+38h] [rbp-8h]
  int v34; // [rsp+3Ah] [rbp-6h]
  __int16 v35; // [rsp+3Eh] [rbp-2h]

  v4 = a3;
  v34 = 0;
  v5 = 0;
  v35 = 0;
  v29 = 0;
  v8 = a1;
  if ( (unsigned int)KeIsEmptyAffinityEx((_WORD *)a1) )
  {
    v32 = qword_140C0BD78[0];
    v31 = (unsigned __int16 *)&PpmCheckRegistered;
    v33 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v29, &v31) )
    {
      v9 = *(_QWORD *)(KeGetPrcb(v29) + 34128);
      if ( a4 )
      {
        if ( *(_BYTE *)(v9 + 4 * v4 + 4) )
        {
          v5 = 1;
          *(_BYTE *)(v9 + 4 * v4 + 4) = 0;
        }
      }
      else if ( *(_BYTE *)(v9 + 4 * v4 + 5) )
      {
        v5 = 1;
        *(_BYTE *)(v9 + 4 * v4 + 5) = 0;
      }
    }
    return v5;
  }
  IsEmptyAffinity = KeIsEmptyAffinityEx((_WORD *)a2);
  v11 = *(_QWORD *)(a2 + 8);
  v12 = IsEmptyAffinity;
  v31 = (unsigned __int16 *)a2;
  v33 = 0;
  v13 = v4;
  v32 = v11;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v29, &v31) )
  {
    v14 = *(_QWORD *)(KeGetPrcb(v29) + 34128);
    if ( a4 )
    {
      if ( *(_BYTE *)(v14 + 4 * v4 + 4) )
      {
        v5 = 1;
        *(_BYTE *)(v14 + 4 * v4 + 4) = 0;
      }
    }
    else if ( *(_BYTE *)(v14 + 4 * v4 + 5) )
    {
      v5 = 1;
      *(_BYTE *)(v14 + 4 * v4 + 5) = 0;
    }
  }
  v15 = -1;
  v30 = KeCountSetBitsAffinityEx((unsigned __int16 *)v8);
  if ( v30 )
  {
    v16 = v12 == 0;
    do
    {
      v17 = *(_QWORD *)(v8 + 8);
      v33 = 0;
      v32 = v17;
      v31 = (unsigned __int16 *)v8;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v29, &v31) )
      {
        Prcb = KeGetPrcb(v29);
        if ( *(_BYTE *)(Prcb + 34124) )
        {
          v5 = 1;
          *(_BYTE *)(Prcb + 34124) = 0;
        }
      }
      v19 = *(_QWORD *)(v8 + 8);
      v20 = -1;
      v31 = (unsigned __int16 *)v8;
      v32 = v19;
      v33 = 0;
      while ( 1 )
      {
        v21 = v20;
        if ( (unsigned int)KeEnumerateNextProcessor(&v29, &v31) )
          break;
        v22 = *(_QWORD *)(KeGetPrcb(v29) + 34128);
        if ( a4 )
          v23 = *(_BYTE *)(v22 + 4 * v13 + 6);
        else
          v23 = *(_BYTE *)(v22 + 4 * v13 + 7);
        if ( v15 == -1 || v23 > v15 )
        {
          v20 = v23;
          if ( v21 < v23 )
            v20 = v21;
        }
      }
      v24 = v30;
      v33 = 0;
      v25 = *(_QWORD *)(a1 + 8);
      v31 = (unsigned __int16 *)a1;
      v32 = v25;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v29, &v31) )
      {
        v26 = *(_QWORD *)(KeGetPrcb(v29) + 34128);
        if ( a4 )
          v27 = *(_BYTE *)(v26 + 4 * v13 + 6);
        else
          v27 = *(_BYTE *)(v26 + 4 * v13 + 7);
        if ( v27 == v20 )
        {
          if ( a4 )
          {
            if ( *(_BYTE *)(v26 + 4 * v13 + 4) == v16 )
              goto LABEL_44;
            *(_BYTE *)(v26 + 4 * v13 + 4) = v16;
          }
          else
          {
            if ( *(_BYTE *)(v26 + 4 * v13 + 5) == v16 )
              goto LABEL_44;
            *(_BYTE *)(v26 + 4 * v13 + 5) = v16;
          }
          v5 = 1;
LABEL_44:
          --v24;
        }
      }
      v8 = a1;
      ++v16;
      v30 = v24;
      v15 = v20;
    }
    while ( v24 );
  }
  return v5;
}

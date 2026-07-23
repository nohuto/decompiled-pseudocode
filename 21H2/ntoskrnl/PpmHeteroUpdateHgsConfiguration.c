/*
 * XREFs of PpmHeteroUpdateHgsConfiguration @ 0x1403C25C4
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1407BB39C (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x140269420 (KeCountSetBitsAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

char PpmHeteroUpdateHgsConfiguration()
{
  char v0; // bl
  __int64 v2; // rcx
  char v3; // al
  _QWORD *v4; // rcx
  _BYTE *Prcb; // rax
  int IsEmptyAffinity; // r12d
  _BYTE *v7; // rax
  unsigned int v8; // r15d
  int v9; // esi
  char v10; // di
  __int64 v11; // rax
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r15d
  int v16; // esi
  char v17; // di
  unsigned int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v22; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+38h] [rbp-D0h]
  __int16 v24; // [rsp+40h] [rbp-C8h]
  int v25; // [rsp+42h] [rbp-C6h]
  __int16 v26; // [rsp+46h] [rbp-C2h]
  unsigned __int64 v27; // [rsp+48h] [rbp-C0h]
  _QWORD v28[22]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v29[22]; // [rsp+108h] [rbp+0h] BYREF

  v25 = 0;
  v26 = 0;
  LODWORD(v21) = 0;
  memset(&v29[1], 0, 0xA0uLL);
  memset(&v28[1], 0, 0xA0uLL);
  v0 = 0;
  if ( PpmHeteroHgsEnabled )
  {
    if ( !(unsigned int)KeIsEmptyAffinityEx(PpmCheckRegistered) )
    {
      v27 = __readmsr(0x1B1u);
      if ( (v27 & 0x4000000) != 0 )
      {
        LODWORD(v29[0]) = 1310721;
        PpmHeteroHgsPopulated = 1;
        memset((char *)v29 + 4, 0, 0xA4uLL);
        LODWORD(v28[0]) = 1310721;
        memset((char *)v28 + 4, 0, 0xA4uLL);
        v23 = qword_140C113C8[0];
        v24 = 0;
        v22 = (unsigned __int16 *)PpmCheckRegistered;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
        {
          v2 = *(unsigned __int16 *)(KeGetPrcb(v21) + 33274);
          if ( !*(_BYTE *)(PpmHeteroHgsInterface + 8 * v2 + 16)
            || (v3 = *(_BYTE *)(PpmHeteroHgsInterface + 8 * v2 + 17), v4 = v28, !v3) )
          {
            v4 = v29;
          }
          KeAddProcessorAffinityEx(v4, v21);
        }
        if ( (unsigned int)KeIsEmptyAffinityEx(v28) )
        {
          v23 = qword_140C113C8[0];
          v24 = 0;
          v22 = (unsigned __int16 *)PpmCheckRegistered;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
          {
            Prcb = (_BYTE *)KeGetPrcb(v21);
            if ( Prcb[33278] )
            {
              v0 = 1;
              Prcb[33278] = 0;
            }
            if ( Prcb[33277] )
            {
              v0 = 1;
              Prcb[33277] = 0;
            }
            if ( Prcb[33276] )
            {
              v0 = 1;
              Prcb[33276] = 0;
            }
          }
        }
        else
        {
          IsEmptyAffinity = KeIsEmptyAffinityEx(v29);
          v24 = 0;
          v22 = (unsigned __int16 *)v29;
          v23 = v29[1];
          while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
          {
            v7 = (_BYTE *)KeGetPrcb(v21);
            if ( v7[33278] )
            {
              v0 = 1;
              v7[33278] = 0;
            }
            if ( v7[33277] )
            {
              v0 = 1;
              v7[33277] = 0;
            }
            if ( v7[33276] != 1 )
            {
              v0 = 1;
              v7[33276] = 1;
            }
          }
          v8 = -1;
          v9 = KeCountSetBitsAffinityEx((unsigned __int16 *)v28);
          if ( v9 )
          {
            v10 = IsEmptyAffinity == 0;
            do
            {
              v23 = v28[1];
              v22 = (unsigned __int16 *)v28;
              v24 = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
              {
                v11 = KeGetPrcb(v21);
                if ( *(_BYTE *)(v11 + 33276) )
                {
                  v0 = 1;
                  *(_BYTE *)(v11 + 33276) = 0;
                }
              }
              v12 = -1;
              v23 = v28[1];
              v22 = (unsigned __int16 *)v28;
              v24 = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
              {
                v13 = *(unsigned __int16 *)(KeGetPrcb(v21) + 33274);
                if ( (v8 == -1 || *(unsigned __int8 *)(PpmHeteroHgsInterface + 8 * v13 + 16) > v8)
                  && v12 >= *(unsigned __int8 *)(PpmHeteroHgsInterface + 8 * v13 + 16) )
                {
                  v12 = *(unsigned __int8 *)(PpmHeteroHgsInterface + 8 * v13 + 16);
                }
              }
              v23 = v28[1];
              v22 = (unsigned __int16 *)v28;
              v24 = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
              {
                v14 = KeGetPrcb(v21);
                if ( *(unsigned __int8 *)(PpmHeteroHgsInterface + 8LL * *(unsigned __int16 *)(v14 + 33274) + 16) == v12 )
                {
                  if ( *(_BYTE *)(v14 + 33277) != v10 )
                  {
                    v0 = 1;
                    *(_BYTE *)(v14 + 33277) = v10;
                  }
                  --v9;
                }
              }
              v8 = v12;
              ++v10;
            }
            while ( v9 );
          }
          v15 = -1;
          v16 = KeCountSetBitsAffinityEx((unsigned __int16 *)v28);
          if ( v16 )
          {
            v17 = IsEmptyAffinity == 0;
            do
            {
              v23 = v28[1];
              v18 = -1;
              v22 = (unsigned __int16 *)v28;
              v24 = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
              {
                v19 = *(unsigned __int16 *)(KeGetPrcb(v21) + 33274);
                if ( (v15 == -1 || *(unsigned __int8 *)(PpmHeteroHgsInterface + 8 * v19 + 17) > v15)
                  && v18 >= *(unsigned __int8 *)(PpmHeteroHgsInterface + 8 * v19 + 17) )
                {
                  v18 = *(unsigned __int8 *)(PpmHeteroHgsInterface + 8 * v19 + 17);
                }
              }
              v23 = v28[1];
              v22 = (unsigned __int16 *)v28;
              v24 = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
              {
                v20 = KeGetPrcb(v21);
                if ( *(unsigned __int8 *)(PpmHeteroHgsInterface + 8LL * *(unsigned __int16 *)(v20 + 33274) + 17) == v18 )
                {
                  if ( *(_BYTE *)(v20 + 33278) != v17 )
                  {
                    v0 = 1;
                    *(_BYTE *)(v20 + 33278) = v17;
                  }
                  --v16;
                }
              }
              ++v17;
              v15 = v18;
            }
            while ( v16 );
          }
        }
        v27 = __readmsr(0x1B1u) & 0xFFFFFFFFFBFFFFFFuLL;
        __writemsr(0x1B1u, v27);
      }
    }
  }
  return v0;
}

/*
 * XREFs of PpmParkEvalualteSmtUnparkPolicy @ 0x14038EE6C
 * Callers:
 *     PpmParkApplyPolicy @ 0x14038E5E0 (PpmParkApplyPolicy.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 */

char __fastcall PpmParkEvalualteSmtUnparkPolicy(unsigned __int8 a1)
{
  _UNKNOWN **v1; // rax
  int v2; // ebx
  unsigned __int64 v3; // rdi
  __int64 Prcb; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r10
  char *v7; // r9
  char v8; // r8
  unsigned __int16 *v10[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+32h] [rbp-36h]
  __int16 v13; // [rsp+36h] [rbp-32h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+8h] BYREF

  v1 = &retaddr;
  v2 = a1;
  v12 = 0;
  v13 = 0;
  v15 = 0;
  if ( PpmParkSmtUnparkingPolicy != a1 )
  {
    PpmParkGranularity = 1;
    PpmParkUnparkCores = 0;
    LOBYTE(v1) = a1 < 2u;
    PpmParkCoreMask = a1 < 2u;
    if ( a1 < 2u )
    {
      LODWORD(v3) = 0;
      v10[1] = (unsigned __int16 *)qword_140C0BD78[0];
      v11 = 0;
      v10[0] = (unsigned __int16 *)&PpmCheckRegistered;
      while ( 1 )
      {
        LODWORD(v1) = KeEnumerateNextProcessor(&v15, v10);
        if ( (_DWORD)v1 )
          break;
        Prcb = KeGetPrcb(v15);
        v5 = *(_QWORD *)(Prcb + 34912) - ((*(_QWORD *)(Prcb + 34912) >> 1) & 0x5555555555555555LL);
        if ( (_DWORD)v3 )
        {
          if ( (_DWORD)v3 != (unsigned int)((0x101010101010101LL
                                           * (((v5 & 0x3333333333333333LL)
                                             + ((v5 >> 2) & 0x3333333333333333LL)
                                             + (((v5 & 0x3333333333333333LL) + ((v5 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
            PpmParkCoreMask = 0;
        }
        else
        {
          v3 = (0x101010101010101LL
              * (((v5 & 0x3333333333333333LL)
                + ((v5 >> 2) & 0x3333333333333333LL)
                + (((v5 & 0x3333333333333333LL) + ((v5 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        }
      }
      if ( PpmParkCoreMask )
      {
        PpmParkGranularity = v3;
        PpmParkUnparkCores = (_BYTE)v2 == 1;
      }
    }
    if ( PpmParkNumNodes )
    {
      v6 = (unsigned int)PpmParkNumNodes;
      v7 = (char *)(PpmParkNodes + 119);
      do
      {
        LOBYTE(v1) = (unsigned __int8)*(v7 - 109) / (unsigned __int8)(PpmParkMultiparkGranularity != 0);
        *v7 = (char)v1;
        v8 = (char)v1;
        if ( (unsigned __int8)v1 < (unsigned __int8)PpmParkGranularity )
          v8 = PpmParkGranularity;
        *v7 = v8;
        v7 += 192;
        --v6;
      }
      while ( v6 );
    }
    PpmParkSmtUnparkingPolicy = v2;
    KeSoftParkSmtPolicy = v2;
  }
  return (char)v1;
}

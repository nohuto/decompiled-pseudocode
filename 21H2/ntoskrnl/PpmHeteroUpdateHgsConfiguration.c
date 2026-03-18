/*
 * XREFs of PpmHeteroUpdateHgsConfiguration @ 0x1403CF26C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140849B04 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KiAndAffinityEx @ 0x1402FF140 (KiAndAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PpmEventHgsHardwareTable @ 0x1405D997C (PpmEventHgsHardwareTable.c)
 */

char PpmHeteroUpdateHgsConfiguration()
{
  char v0; // si
  unsigned int v2; // r14d
  __int64 v3; // rbx
  __int64 Prcb; // rax
  _BYTE *v5; // rdx
  __int64 v6; // rcx
  unsigned __int16 *v7; // rcx
  __int64 v8; // rcx
  int IsEmptyAffinity; // edi
  __int64 v10; // rcx
  unsigned int v11; // r12d
  int v12; // r15d
  char v13; // r14
  __int64 v14; // rax
  int v15; // edi
  unsigned int v16; // r13d
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // r12d
  int v20; // r15d
  int v21; // edi
  unsigned int v22; // r13d
  unsigned int v23; // eax
  char v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rbx
  char v27; // al
  unsigned int v28; // [rsp+28h] [rbp-E0h] BYREF
  char v29; // [rsp+2Ch] [rbp-DCh]
  unsigned __int16 *v30; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-D0h]
  _WORD v32[4]; // [rsp+40h] [rbp-C8h]
  __int64 v33; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+50h] [rbp-B8h]
  _QWORD v35[34]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v36[68]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v37[34]; // [rsp+278h] [rbp+170h] BYREF

  *(_DWORD *)&v32[1] = 0;
  v32[3] = 0;
  memset(&v36[2], 0, 0x100uLL);
  v28 = 0;
  memset(v37, 0, 0x108uLL);
  memset(v35, 0, 0x108uLL);
  v0 = 0;
  if ( PpmHeteroHgsEnabled )
  {
    if ( !(unsigned int)KeIsEmptyAffinityEx(PpmCheckRegistered) )
    {
      v34 = __readmsr(0x1B1u);
      if ( (v34 & 0x4000000) != 0 )
      {
        v36[0] = 2097153;
        PpmHeteroHgsPopulated = 1;
        memset(&v36[1], 0, 0x104uLL);
        KiCopyAffinityEx((__int64)v36, 0x20u, (unsigned __int16 *)PpmCheckRegistered);
        v2 = 0;
        for ( LODWORD(v33) = 0; v2 < *((_DWORD *)PpmHeteroCapability + 1); LODWORD(v33) = v2 )
        {
          LODWORD(v37[0]) = 2097153;
          memset((char *)v37 + 4, 0, 0x104uLL);
          LODWORD(v35[0]) = 2097153;
          memset((char *)v35 + 4, 0, 0x104uLL);
          v31 = qword_140C0B8E8[0];
          v32[0] = 0;
          v30 = (unsigned __int16 *)PpmCheckRegistered;
          while ( 1 )
          {
            v3 = v2;
            if ( (unsigned int)KeEnumerateNextProcessor(&v28, &v30) )
              break;
            Prcb = KeGetPrcb(v28);
            v5 = (_BYTE *)(v2 * PpmHeteroHgsCapabilityBits + *(unsigned __int16 *)(Prcb + 34122) + PpmHeteroHgsTableEntry);
            v6 = *(_QWORD *)(Prcb + 34128);
            *(_BYTE *)(v6 + 4LL * v2 + 6) = *v5;
            *(_BYTE *)(v6 + 4LL * v2 + 7) = v5[1];
            if ( !*v5 || (v7 = (unsigned __int16 *)v35, !v5[1]) )
              v7 = (unsigned __int16 *)v37;
            KeAddProcessorAffinityEx(v7, v28);
          }
          if ( (unsigned int)KeIsEmptyAffinityEx(v35) )
          {
            v31 = qword_140C0B8E8[0];
            v32[0] = 0;
            v30 = (unsigned __int16 *)PpmCheckRegistered;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v28, &v30) )
            {
              v8 = *(_QWORD *)(KeGetPrcb(v28) + 34128);
              if ( *(_BYTE *)(v8 + 4LL * v2 + 4) )
              {
                v0 = 1;
                *(_BYTE *)(v8 + 4LL * v2 + 4) = 0;
              }
              if ( *(_BYTE *)(v8 + 4LL * v2 + 5) )
              {
                v0 = 1;
                *(_BYTE *)(v8 + 4LL * v2 + 5) = 0;
              }
            }
          }
          else
          {
            IsEmptyAffinity = KeIsEmptyAffinityEx(v37);
            LODWORD(v34) = IsEmptyAffinity;
            v30 = (unsigned __int16 *)v37;
            v32[0] = 0;
            v31 = v37[1];
            while ( !(unsigned int)KeEnumerateNextProcessor(&v28, &v30) )
            {
              v10 = *(_QWORD *)(KeGetPrcb(v28) + 34128);
              if ( *(_BYTE *)(v10 + 4LL * v2 + 4) )
              {
                v0 = 1;
                *(_BYTE *)(v10 + 4LL * v2 + 4) = 0;
              }
              if ( *(_BYTE *)(v10 + 4LL * v2 + 5) )
              {
                v0 = 1;
                *(_BYTE *)(v10 + 4LL * v2 + 5) = 0;
              }
            }
            v11 = -1;
            v12 = KeCountSetBitsAffinityEx(v35);
            if ( v12 )
            {
              v13 = IsEmptyAffinity == 0;
              do
              {
                v31 = v35[1];
                v30 = (unsigned __int16 *)v35;
                v32[0] = 0;
                while ( !(unsigned int)KeEnumerateNextProcessor(&v28, &v30) )
                {
                  v14 = KeGetPrcb(v28);
                  if ( *(_BYTE *)(v14 + 34124) )
                  {
                    v0 = 1;
                    *(_BYTE *)(v14 + 34124) = 0;
                  }
                }
                v15 = -1;
                v31 = v35[1];
                v30 = (unsigned __int16 *)v35;
                v32[0] = 0;
                while ( 1 )
                {
                  v16 = v15;
                  if ( (unsigned int)KeEnumerateNextProcessor(&v28, &v30) )
                    break;
                  v17 = *(unsigned __int8 *)(*(_QWORD *)(KeGetPrcb(v28) + 34128) + 4 * v3 + 6);
                  if ( v11 == -1 || v17 > v11 )
                  {
                    v15 = v17;
                    if ( v16 < v17 )
                      v15 = v16;
                  }
                }
                v31 = v35[1];
                v30 = (unsigned __int16 *)v35;
                v32[0] = 0;
                while ( !(unsigned int)KeEnumerateNextProcessor(&v28, &v30) )
                {
                  v18 = *(_QWORD *)(KeGetPrcb(v28) + 34128);
                  if ( *(unsigned __int8 *)(v18 + 4 * v3 + 6) == v15 )
                  {
                    if ( *(_BYTE *)(v18 + 4 * v3 + 4) != v13 )
                    {
                      v0 = 1;
                      *(_BYTE *)(v18 + 4 * v3 + 4) = v13;
                    }
                    --v12;
                  }
                }
                ++v13;
                v11 = v15;
              }
              while ( v12 );
              IsEmptyAffinity = v34;
              v2 = v33;
            }
            v19 = -1;
            v20 = KeCountSetBitsAffinityEx(v35);
            if ( v20 )
            {
              v29 = IsEmptyAffinity == 0;
              do
              {
                v31 = v35[1];
                v21 = -1;
                v30 = (unsigned __int16 *)v35;
                v32[0] = 0;
                while ( 1 )
                {
                  v22 = v21;
                  if ( (unsigned int)KeEnumerateNextProcessor(&v28, &v30) )
                    break;
                  v23 = *(unsigned __int8 *)(*(_QWORD *)(KeGetPrcb(v28) + 34128) + 4 * v3 + 7);
                  if ( v19 == -1 || v23 > v19 )
                  {
                    v21 = v23;
                    if ( v22 < v23 )
                      v21 = v22;
                  }
                }
                v24 = v29;
                v31 = v35[1];
                v30 = (unsigned __int16 *)v35;
                v32[0] = 0;
                while ( !(unsigned int)KeEnumerateNextProcessor(&v28, &v30) )
                {
                  v25 = *(_QWORD *)(KeGetPrcb(v28) + 34128);
                  if ( *(unsigned __int8 *)(v25 + 4 * v3 + 7) == v21 )
                  {
                    if ( *(_BYTE *)(v25 + 4 * v3 + 5) != v24 )
                    {
                      v0 = 1;
                      *(_BYTE *)(v25 + 4 * v3 + 5) = v24;
                    }
                    --v20;
                  }
                }
                v19 = v21;
                v29 = v24 + 1;
              }
              while ( v20 );
              v2 = v33;
            }
          }
          KiAndAffinityEx((unsigned __int16 *)v36, (unsigned __int16 *)v37, v36, HIWORD(v36[0]));
          ++v2;
        }
        v31 = qword_140C0B8E8[0];
        v32[0] = 0;
        v30 = (unsigned __int16 *)PpmCheckRegistered;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v28, &v30) )
        {
          v26 = KeGetPrcb(v28);
          v27 = KeCheckProcessorAffinityEx((unsigned __int16 *)v36, v28);
          if ( *(_BYTE *)(v26 + 34124) != v27 )
          {
            v0 = 1;
            *(_BYTE *)(v26 + 34124) = v27;
          }
        }
        PpmEventHgsHardwareTable(0LL);
        v34 = __readmsr(0x1B1u) & 0xFFFFFFFFFBFFFFFFuLL;
        __writemsr(0x1B1u, v34);
      }
    }
  }
  return v0;
}

/*
 * XREFs of KiTallyHeteroSoftParkElectionVotes @ 0x14057C0D8
 * Callers:
 *     KiPerformHeteroSoftParkElection @ 0x14057BD18 (KiPerformHeteroSoftParkElection.c)
 * Callees:
 *     KeIsMultiCoreClassesEnabled @ 0x14038E410 (KeIsMultiCoreClassesEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting @ 0x14040AF08 (Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiGenerateHeteroSets @ 0x1404590A0 (KiGenerateHeteroSets.c)
 *     KiHeteroReduceToMaximallyPreferredByClass @ 0x140574EC0 (KiHeteroReduceToMaximallyPreferredByClass.c)
 */

__int64 __fastcall KiTallyHeteroSoftParkElectionVotes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        _QWORD *a7)
{
  __int64 v8; // r12
  int v9; // r14d
  __int64 result; // rax
  int v11; // esi
  __int64 v12; // r13
  unsigned __int8 v13; // bl
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r12
  int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rcx
  BOOL IsMultiCoreClassesEnabled; // eax
  int v21; // ecx
  __int64 v22; // rcx
  __int128 *v23; // rdi
  unsigned __int64 v24; // rdx
  bool v25; // r9
  __int64 v26; // r8
  unsigned __int8 v27; // cl
  __int64 v28; // r10
  unsigned __int8 v29; // al
  _QWORD *v30; // rax
  unsigned int i; // r8d
  __int64 v32; // [rsp+40h] [rbp-A8h]
  __int64 v34; // [rsp+50h] [rbp-98h]
  __int64 v35; // [rsp+58h] [rbp-90h]
  __int128 v38; // [rsp+88h] [rbp-60h] BYREF
  __int64 v39; // [rsp+98h] [rbp-50h]

  v39 = 0LL;
  v8 = a2;
  v38 = 0LL;
  memset(a6, 0, 0x200uLL);
  *a7 = 0LL;
  v9 = 0;
  result = 0LL;
  v35 = 0LL;
  do
  {
    v11 = 0;
    v12 = 0LL;
    v34 = 0LL;
    do
    {
      v13 = 0;
      if ( !*(_BYTE *)(a1 + 185) )
        goto LABEL_40;
      v14 = result + v12;
      v32 = v14;
      v15 = 8 * v14;
      do
      {
        v16 = *(_QWORD *)(v8 + 8 * (v15 + v13));
        if ( !v16 )
          goto LABEL_38;
        v17 = KiDynamicHeteroCpuPolicy[v14];
        if ( (unsigned int)Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting() )
        {
          KiGenerateHeteroSets(a1, a4, v17, v13, v9, v11, (__int64 *)&v38);
          v23 = &v38;
        }
        else
        {
          IsMultiCoreClassesEnabled = KeIsMultiCoreClassesEnabled(v19, v18);
          v21 = *(unsigned __int8 *)(a1 + 185);
          if ( IsMultiCoreClassesEnabled )
            v22 = 3LL * ((unsigned int)v13 + v21 * (v11 + 2 * v9));
          else
            v22 = 3LL * ((unsigned int)v13 + v17 * v21);
          v23 = (__int128 *)(*(_QWORD *)(a1 + 192) + 8 * v22);
        }
        v24 = a3 & v23[1];
        if ( v24 )
        {
          v25 = KeSoftParkSmtPolicy && KeSoftParkSmtPolicy == 3;
          v26 = 0LL;
          v27 = -!v25;
          while ( 1 )
          {
            _BitScanForward64((unsigned __int64 *)&v28, v24);
            v29 = *(_BYTE *)(v28 + a5);
            if ( v29 == v27 )
            {
              _bittestandset64(&v26, (unsigned int)v28);
            }
            else
            {
              if ( v25 )
              {
                if ( v29 <= v27 )
                  goto LABEL_25;
LABEL_24:
                v26 = 1LL << v28;
                v27 = *(_BYTE *)(v28 + a5);
                goto LABEL_25;
              }
              if ( v29 < v27 )
                goto LABEL_24;
            }
LABEL_25:
            v24 &= ~(1LL << v28);
            if ( !v24 )
            {
              v14 = v32;
              v24 = v26;
              break;
            }
          }
        }
        if ( (*(_QWORD *)v23 & v24) != 0 )
        {
          v24 &= *(_QWORD *)v23;
        }
        else
        {
          if ( (*((_QWORD *)v23 + 1) & v24) != 0 )
            v24 = KiHeteroReduceToMaximallyPreferredByClass(*(_WORD *)(a1 + 136), *((_QWORD *)v23 + 1) & v24, v17, v13);
          if ( !v24 )
            goto LABEL_37;
        }
        v30 = a6;
        for ( i = 0; i < 0x40; ++i )
        {
          if ( _bittest64((const __int64 *)&v24, i) )
            *v30 += v16;
          ++v30;
        }
        *a7 += v16;
LABEL_37:
        v15 = 8 * v14;
LABEL_38:
        v8 = a2;
        ++v13;
      }
      while ( v13 < *(_BYTE *)(a1 + 185) );
      v12 = v34;
      result = v35;
LABEL_40:
      ++v12;
      ++v11;
      v34 = v12;
    }
    while ( v11 < 2 );
    result += 2LL;
    ++v9;
    v35 = result;
  }
  while ( v9 < 7 );
  return result;
}

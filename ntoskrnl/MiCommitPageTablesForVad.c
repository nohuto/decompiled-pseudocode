/*
 * XREFs of MiCommitPageTablesForVad @ 0x1407C74B0
 * Callers:
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiCommitPageTableRangesForVad @ 0x1406413B4 (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x1407D6A70 (MiInsertVadCharges.c)
 * Callees:
 *     MmGetMinWsPagePriority @ 0x140242D60 (MmGetMinWsPagePriority.c)
 *     RtlAreBitsClearEx @ 0x1402E4560 (RtlAreBitsClearEx.c)
 *     MiMakeHyperRangeAccessible @ 0x1403219F0 (MiMakeHyperRangeAccessible.c)
 *     MiVadPureReserve @ 0x140321EB0 (MiVadPureReserve.c)
 *     MiVadLeafPagesPrecharged @ 0x140321F00 (MiVadLeafPagesPrecharged.c)
 *     MiVadPageTableChargeLevel @ 0x140321F50 (MiVadPageTableChargeLevel.c)
 *     MiUpdateChargedWsles @ 0x14065F8E4 (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x1407C5840 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitPageTablesForVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // r15
  unsigned int v5; // ebx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r10
  int v18; // edx
  __int64 v19; // r11
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r15
  __int64 v24; // rbp
  unsigned __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // r12
  __int64 v28; // r13
  unsigned __int64 v29; // rbx
  int v30; // r9d
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  bool v35; // al
  int v36; // [rsp+20h] [rbp-88h]
  __int64 v37; // [rsp+28h] [rbp-80h]
  int v38; // [rsp+30h] [rbp-78h]
  __int64 v39; // [rsp+38h] [rbp-70h]
  ULONG_PTR v40; // [rsp+40h] [rbp-68h]
  unsigned __int64 v41; // [rsp+48h] [rbp-60h]
  unsigned __int64 v42; // [rsp+50h] [rbp-58h]
  unsigned __int64 v43; // [rsp+58h] [rbp-50h]
  __int64 i; // [rsp+60h] [rbp-48h]
  __int64 v46; // [rsp+C8h] [rbp+20h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v40 = (ULONG_PTR)Process;
  if ( *(_QWORD *)(a1 + 16) == -2LL && MiVadPureReserve(a1) )
  {
    v32 = *(unsigned int *)(a1 + 52);
    LODWORD(v32) = v32 & 0x7FFFFFFF;
    if ( !(v32 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) )
      return 0LL;
    result = MiChargeFullProcessCommitment(
               (ULONG_PTR)Process,
               v32 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31));
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    v5 = 0;
    v41 = (unsigned int)(a3 >> 21);
    v6 = (unsigned int)(a2 >> 21);
    v46 = 0LL;
    v43 = v6;
    v7 = v6;
    v8 = v41;
    v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
    while ( 1 )
    {
      v10 = 2 - v5;
      v11 = *(_QWORD *)(v9 + 16 * (v10 + 32) + 48);
      result = MiMakeHyperRangeAccessible(v11 + (v7 >> 3), v11 + (v8 >> 3), &v46);
      if ( (int)result < 0 )
        break;
      ++v5;
      *(_QWORD *)(v9 + 8 * v10 + 600) += v46;
      v7 >>= 9;
      v8 >>= 9;
      if ( v5 >= 2 )
      {
        v42 = Process[1].ActiveProcessors.StaticBitmap[28];
        MiVadPageTableChargeLevel(a1, v13, v14, v15);
        v16 = MiVadLeafPagesPrecharged(a1);
        v18 = 0;
        v38 = v16;
        v39 = v17;
        v20 = v19 + 584;
        LODWORD(v46) = 0;
        for ( i = v19 + 584; ; v20 = i )
        {
          v36 = v18;
          v21 = v41;
          v22 = 0LL;
          v23 = 0LL;
          v37 = 0LL;
          v24 = 0LL;
          v25 = v6;
          v26 = v20;
          do
          {
            v27 = 0LL;
            v28 = 0LL;
            v29 = v25;
            if ( v25 > v21 )
            {
              v30 = v46;
            }
            else
            {
              do
              {
                if ( _bittest64(*(const signed __int64 **)(v26 + 8), v29) )
                {
                  v30 = v46;
                }
                else
                {
                  ++v27;
                  if ( v18 )
                  {
                    v30 = v46;
                    if ( v24 >= v17 )
                      _bittestandset64(*(signed __int64 **)(v26 + 8), v29);
                  }
                  else
                  {
                    LODWORD(v46) = 1;
                    if ( !(unsigned int)MmGetMinWsPagePriority() && (v29 == v25 || (v29 & 7) == 0) )
                    {
                      v35 = RtlAreBitsClearEx((unsigned __int64 *)v26, v29 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL);
                      v18 = v36;
                      v30 = v46;
                      v17 = v39;
                      if ( v35 )
                        ++v28;
                    }
                  }
                }
                ++v29;
              }
              while ( v29 <= v21 );
              v22 = v37;
              if ( v27 && v24 >= v17 )
              {
                v22 = v27 + v37;
                v37 += v27;
              }
            }
            v23 += v28;
            v25 >>= 9;
            v21 >>= 9;
            ++v24;
            v26 -= 16LL;
          }
          while ( v24 < 3 );
          if ( v18 )
            break;
          v31 = v23 + v22;
          if ( !v38 && !MiVadPureReserve(a1) )
          {
            v33 = *(unsigned int *)(a1 + 52);
            LODWORD(v33) = v33 & 0x7FFFFFFF;
            v34 = v33 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
            if ( v34 != 0x7FFFFFFFELL )
              v31 += v34;
          }
          if ( v31 )
          {
            result = MiChargeFullProcessCommitment(v40, v31);
            if ( (int)result < 0 )
              return result;
            v22 = v37;
            v30 = v46;
            v17 = v39;
          }
          if ( !v30 )
            return 0LL;
          *(_QWORD *)(v42 + 288) += v22;
          if ( v23 )
            MiUpdateChargedWsles(v40 + 1664);
          v6 = v43;
          v18 = 1;
        }
        return 0LL;
      }
    }
  }
  return result;
}

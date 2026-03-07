__int64 __fastcall MiHandleBootImage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  int v5; // ebp
  __int64 v6; // r14
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r11
  char v13; // bl
  __int64 v14; // r15
  __int64 result; // rax
  int v16; // ecx
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rbp
  int v20; // ecx
  unsigned int v21; // esi
  unsigned __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // rdi
  unsigned int BootImagePageProtection; // eax
  unsigned __int64 v26; // rax
  __int64 LoaderAppliedHotPatchEntry; // rax
  int v28; // r15d
  bool v29; // zf
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  __int64 CurrentIrql; // rbp
  _DWORD *SchedulerAssist; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rbp
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int8 v40; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v42; // r9
  int v43; // eax
  __int64 v44; // rcx
  int v45; // [rsp+30h] [rbp-98h]
  unsigned __int64 v46; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int64 v47; // [rsp+40h] [rbp-88h]
  int v48; // [rsp+48h] [rbp-80h]
  __int64 v49; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-70h]
  __int64 v51; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v52; // [rsp+68h] [rbp-60h]
  __int64 v53; // [rsp+70h] [rbp-58h]
  unsigned __int64 v54; // [rsp+78h] [rbp-50h]
  int v55; // [rsp+D0h] [rbp+8h]
  __int64 v58; // [rsp+E8h] [rbp+20h] BYREF

  v55 = a1;
  v3 = *(_QWORD *)(a2 + 48);
  v5 = dword_140C654C4;
  v6 = a2;
  v7 = (unsigned int)dword_140C694FC >> 12;
  LODWORD(v58) = (unsigned int)dword_140C694FC >> 12;
  v45 = dword_140C654C4;
  v54 = v3;
  v8 = RtlImageNtHeader(v3);
  v9 = *(unsigned int *)(v6 + 64) + 4095LL;
  v53 = v8;
  v10 = v9 >> 12;
  v52 = v10;
  v11 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v50 = v11;
  v47 = v11 + 8LL * (unsigned int)v10;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
  {
    v26 = ((_DWORD)v10 + 511) & 0xFFFFFE00;
    LODWORD(v10) = v26;
    v52 = v26;
    v12 = v11 + 8 * v26;
    v7 = (v7 + 511) & 0xFFFFFE00;
    v47 = v12;
    LODWORD(v58) = v7;
  }
  else
  {
    v12 = v47;
  }
  v13 = 4;
  if ( dword_140C694FC && (LoaderAppliedHotPatchEntry = MiFindLoaderAppliedHotPatchEntry(v6, a1)) != 0 )
  {
    v28 = ((8 * (unsigned __int64)*(unsigned int *)(LoaderAppliedHotPatchEntry + 44)) >> 12)
        + (((8LL * *(unsigned int *)(LoaderAppliedHotPatchEntry + 44)) & 0xFFF) != 0);
    v29 = 2 * v28 == 0;
    v14 = (unsigned int)(2 * v28);
    v48 = v14;
    if ( !v29 )
    {
      v30 = v12 + 8 * v14;
      v31 = 0LL;
      v46 = v30;
      CurrentIrql = KeGetCurrentIrql();
      v51 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)CurrentIrql == 2 )
        {
          LODWORD(v34) = 4;
        }
        else
        {
          v30 = v46;
          v34 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
        }
        SchedulerAssist[5] |= v34;
      }
      if ( v12 < v30 )
      {
        v35 = v46;
        v36 = v12;
        do
        {
          v49 = MI_READ_PTE_LOCK_FREE(v36);
          v37 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v49) >> 12) & 0xFFFFFFFFFFLL)
              - 0x220000000000LL;
          LODWORD(v46) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v46);
            while ( *(__int64 *)(v37 + 24) < 0 );
          }
          if ( ((*(_QWORD *)(v37 + 40) >> 60) & 7) != 3 )
            MiMarkPfnVerified(v37, 4);
          if ( (unsigned int)MiCheckSlabPfnBitmap(v37, 1LL, 0) )
          {
            if ( (unsigned int)MiCheckSlabPfnBitmap(v37, 1LL, 1) )
            {
              v38 = 7LL;
            }
            else
            {
              ++v31;
              v38 = 3LL;
            }
          }
          else
          {
            v38 = 1LL;
            ++qword_140C69630;
          }
          v39 = *(_QWORD *)(v37 + 16);
          *(_WORD *)(v37 + 32) = 3;
          *(_QWORD *)(v37 + 16) = MiUpdatePageFileHighInPte(v39, v38);
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v36 += 8LL;
        }
        while ( v36 < v35 );
        v3 = v54;
        v6 = a2;
        LODWORD(v14) = v48;
        LODWORD(v10) = v52;
        v11 = v50;
        LOBYTE(CurrentIrql) = v51;
      }
      if ( KiIrqlFlags )
      {
        v40 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v40 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v42 = CurrentPrcb->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
          v29 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
      if ( v31 )
      {
        MiAcquireNonPagedResources((unsigned __int64)MiSystemPartition, v31, 0LL, 0);
        qword_140C6F698 += v31;
      }
      _InterlockedExchangeAdd64(&qword_140C65828, (unsigned int)v14);
      v44 = *(_QWORD *)(v6 + 48);
      if ( v44 == PsNtosImageBase || v44 == PsHalImageBase )
        qword_140C69628 += v31 - (unsigned int)v14;
      else
        _InterlockedExchangeAdd(&dword_140C69650, v31 - v14);
      v5 = v45;
      v12 = v47;
      v7 = v58;
    }
  }
  else
  {
    LODWORD(v14) = 0;
  }
  result = (unsigned int)v14;
  v16 = v7 - v14;
  v17 = v12 + 8LL * (unsigned int)v14;
  if ( v3 != PsNtosImageBase && v3 != PsHalImageBase )
    v16 += v5;
  if ( v16 )
    result = MiFreeBootDriverPages(v3, v17, v16, 1, a3);
  if ( v3 != PsNtosImageBase && v3 != PsHalImageBase )
  {
    v18 = v53;
    v19 = 0LL;
    *(_QWORD *)(v53 + 48) = v3;
    if ( (*(_DWORD *)(v6 + 104) & 0x800000) == 0 )
    {
      if ( (*(_BYTE *)(v18 + 22) & 1) != 0
        || *(_DWORD *)(v18 + 132) <= 5u
        || (v20 = *(_DWORD *)(v18 + 176)) != 0 && (unsigned int)(*(_DWORD *)(v18 + 180) + v20) > *(_DWORD *)(v6 + 64) )
      {
        v13 = 0;
      }
      else
      {
        result = MiImportOptimizationCompatibleWithDriverRelocation(v6, v17);
        if ( (_DWORD)result )
        {
          if ( !v7 )
          {
            result = MiUseLargeDriverPage((PCUNICODE_STRING)(v6 + 88));
            if ( (_DWORD)result )
            {
              DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(v6 + 88), v3, 0xFFFFFFFFLL);
              v13 = 6;
              result = (__int64)MiMapSystemImageWithLargePage(0LL, v10, (const void *)v3);
              v19 = result;
              if ( result )
              {
                v13 = 7;
                MiBootImageRelocated(v55, v6, v3, result, v18, v10);
                MiFreeBootDriverPages(v3, v11, v10, 0, a3);
                result = MiReleaseSystemImageVa(v3, (unsigned int)(v10 + v45));
              }
            }
          }
        }
        if ( (v13 & 1) != 0 )
          goto LABEL_28;
      }
      v51 = 0LL;
      v19 = v3;
      result = (unsigned int)v10;
      v50 = v3;
      v21 = 0;
      v22 = v11 + 8LL * (unsigned int)v10;
      if ( v11 < v22 )
      {
        v23 = v53;
        do
        {
          v58 = MI_READ_PTE_LOCK_FREE(v11);
          v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v58) >> 12) & 0xFFFFFFFFFFLL)
              - 0x220000000000LL;
          result = MiCheckSlabPfnBitmap(v24, 1LL, 0);
          if ( !(_DWORD)result )
          {
            BootImagePageProtection = MiGetBootImagePageProtection(v21, v23, v24, &v51);
            result = MiAllocateDriverPage((__int64)MiSystemPartition, BootImagePageProtection, 1);
            if ( result != -1 )
              result = MiTradeBootImagePage(v11, result);
          }
          v11 += 8LL;
          v21 += 4096;
        }
        while ( v11 < v22 );
        v6 = a2;
        v19 = v50;
      }
LABEL_28:
      if ( (v13 & 2) != 0 )
      {
        result = DbgLoadImageSymbolsUnicode((PCUNICODE_STRING)(v6 + 88), v19);
        if ( (_DWORD)result )
          *(_DWORD *)(v6 + 104) |= 0x100000u;
      }
    }
  }
  return result;
}

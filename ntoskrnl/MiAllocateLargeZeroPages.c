/*
 * XREFs of MiAllocateLargeZeroPages @ 0x14034DCB0
 * Callers:
 *     MiAllocateSlabEntry @ 0x140349850 (MiAllocateSlabEntry.c)
 *     MiAllocateFastLargePagesForMdl @ 0x1403863B4 (MiAllocateFastLargePagesForMdl.c)
 *     MiCreateLargePfnList @ 0x14066540C (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x1407F3500 (MiCreatePagingFileMap.c)
 *     MiGetLargePagesForSystemMapping @ 0x140A2F604 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiChangePageAttributeContiguous @ 0x140214270 (MiChangePageAttributeContiguous.c)
 *     MiConvertEntireLargePageToSmall @ 0x140277140 (MiConvertEntireLargePageToSmall.c)
 *     MiProtectionToCacheAttribute @ 0x14028A2D0 (MiProtectionToCacheAttribute.c)
 *     MiCreatePageChains @ 0x1402B4A2C (MiCreatePageChains.c)
 *     MiProcessPageGroupInfo @ 0x1402B4BE0 (MiProcessPageGroupInfo.c)
 *     MiPfnBestZeroAttribute @ 0x1402CEAFC (MiPfnBestZeroAttribute.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     MiGetFastLargePages @ 0x14034D588 (MiGetFastLargePages.c)
 *     MiIsFreeZeroPfnCold @ 0x140350240 (MiIsFreeZeroPfnCold.c)
 *     MiInsertMdlPageNeedsZero @ 0x1403A0E10 (MiInsertMdlPageNeedsZero.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B3040 (MiConvertSmallPageRangeToLarge.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiZeroAndConvertPage @ 0x14064DA84 (MiZeroAndConvertPage.c)
 *     MiAddPageToHeatRanges @ 0x140651704 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x140652018 (MiNotifyPageHeat.c)
 *     MiAssemblePfnList @ 0x140665108 (MiAssemblePfnList.c)
 *     MiFindLargePageMemory @ 0x140A46B08 (MiFindLargePageMemory.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateLargeZeroPages(unsigned int *a1)
{
  __int64 v2; // r14
  unsigned int v3; // ecx
  int v4; // edx
  char *v5; // r8
  __int64 *v6; // r15
  int v7; // r13d
  unsigned int v8; // ebp
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // r12
  int v16; // ecx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 *v19; // rax
  char *PageChains; // rax
  unsigned int v21; // eax
  unsigned __int64 *i; // rbx
  unsigned __int64 **v23; // rax
  unsigned __int64 *v24; // r14
  unsigned __int64 *v25; // rdx
  unsigned __int64 *v26; // rcx
  unsigned __int64 *v27; // rcx
  unsigned __int64 v28; // r15
  __int64 v29; // rbp
  __int64 *v30; // rax
  unsigned int j; // edi
  __int64 v32; // rcx
  int v33; // [rsp+40h] [rbp-138h]
  int v34; // [rsp+44h] [rbp-134h]
  char *v35; // [rsp+48h] [rbp-130h] BYREF
  __int64 v36; // [rsp+50h] [rbp-128h] BYREF
  int v37; // [rsp+58h] [rbp-120h]
  _DWORD v38[32]; // [rsp+5Ch] [rbp-11Ch] BYREF
  _BYTE v39[96]; // [rsp+E0h] [rbp-98h] BYREF

  memset(v38, 0, sizeof(v38));
  memset(v39, 0, sizeof(v39));
  v33 = 1;
  v2 = 0LL;
  v35 = 0LL;
  if ( KeGetCurrentIrql() == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    v33 = 0;
  v3 = a1[9];
  v36 = 1LL;
  v37 = 16;
  v34 = MiProtectionToCacheAttribute(v3);
  if ( *((_QWORD *)a1 + 8) < *((_QWORD *)a1 + 2) )
  {
    while ( 1 )
    {
      MiGetFastLargePages((int *)a1, (__int64)v39);
      v5 = 0LL;
      v6 = MiLargePageSizes;
      v7 = 0;
      v8 = 0;
      v9 = 0LL;
      do
      {
        while ( 1 )
        {
          v10 = &v39[v9];
          v11 = *(_QWORD *)&v39[v9];
          if ( (_QWORD *)*v10 == v10 )
            break;
          v7 = 1;
          if ( *(_QWORD **)(v11 + 8) != v10 )
            goto LABEL_41;
          v13 = *(_QWORD *)v11;
          if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
            goto LABEL_41;
          *v10 = v13;
          *(_QWORD *)(v13 + 8) = v10;
          --v10[2];
          if ( (*a1 & 8) == 0 && (*(_DWORD *)(v11 + 16) & 0x3E0LL) != 0 )
            v14 = 1;
          else
            v14 = (int)v5;
          v15 = *v6;
          if ( (unsigned int)MiIsFreeZeroPfnCold(v11) && (HvlEnlightenments & 0x200000) != 0 )
          {
            if ( (unsigned int)MiAddPageToHeatRanges(&v36, 0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4), v8) )
              MiNotifyPageHeat(&v36);
            *(_QWORD *)(v11 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v11 + 16), 0LL);
            v5 = 0LL;
          }
          if ( !v14 )
            goto LABEL_23;
          if ( (*(_BYTE *)(v11 + 34) & 0xC0) == 0xC0 )
          {
            v21 = MiPfnBestZeroAttribute(v11, v34);
            MiChangePageAttributeContiguous(0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4), v15, v21, 0);
          }
          v2 = (__int64)v35;
          if ( v35 )
          {
LABEL_34:
            MiInsertMdlPageNeedsZero(v2, v11, v15, v17);
            v5 = 0LL;
          }
          else
          {
            if ( v33 )
            {
              PageChains = MiCreatePageChains(*((_QWORD *)a1 + 1), a1[8], v34);
              v35 = PageChains;
              v2 = (__int64)PageChains;
              if ( PageChains )
              {
                *((_DWORD *)PageChains + 4) = 1;
                goto LABEL_34;
              }
            }
            MiZeroAndConvertPage(v16, v11, v8, v34, 1);
            v5 = 0LL;
LABEL_23:
            if ( (*a1 & 0x20) != 0 )
            {
              MiConvertEntireLargePageToSmall(v11, v8, 0, 1, (__int64)v5, v5, v5);
              v5 = 0LL;
            }
            v18 = v9 + *((_QWORD *)a1 + 9);
            v19 = *(__int64 **)(v18 + 8);
            if ( *v19 != v18 )
LABEL_41:
              __fastfail(3u);
            v2 = (__int64)v35;
            *(_QWORD *)v11 = v18;
            *(_QWORD *)(v11 + 8) = v19;
            *v19 = v11;
            *(_QWORD *)(v18 + 8) = v11;
            ++*(_QWORD *)(*((_QWORD *)a1 + 9) + v9 + 16);
          }
        }
        ++v8;
        ++v6;
        v9 += 24LL;
      }
      while ( v8 < 4 );
      if ( !v7 || *((_QWORD *)a1 + 8) >= *((_QWORD *)a1 + 2) )
      {
        if ( HIDWORD(v36) )
        {
          MiNotifyPageHeat(&v36);
          v5 = 0LL;
        }
        if ( v2 )
        {
          MiProcessPageGroupInfo(v2, *((_QWORD *)a1 + 9), (*a1 >> 5) & 1);
          v5 = 0LL;
        }
        v4 = v33;
        break;
      }
    }
  }
  result = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 8) != result )
  {
    if ( v4 )
    {
      result = *a1;
      if ( (result & 0x10) == 0 )
      {
        v35 = v5;
        MiFindLargePageMemory(a1, &v35);
        result = (__int64)v35;
        i = 0LL;
        if ( v35 )
        {
          do
          {
            i = (unsigned __int64 *)result;
            result = *(_QWORD *)result;
          }
          while ( result );
        }
        for ( ; i; result = MiAssemblePfnList(v32, v29, j) )
        {
          v23 = (unsigned __int64 **)i[1];
          v24 = i - 2;
          v25 = i;
          v26 = i;
          if ( v23 )
          {
            v27 = *v23;
            for ( i = (unsigned __int64 *)i[1]; v27; v27 = (unsigned __int64 *)*v27 )
              i = v27;
          }
          else
          {
            for ( i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                  i;
                  i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (unsigned __int64 *)*i == v26 )
                break;
              v26 = i;
            }
          }
          RtlAvlRemoveNode((unsigned __int64 *)&v35, v25);
          v28 = v24[1];
          v29 = 48 * *v24 - 0x220000000000LL;
          v30 = MiLargePageSizes;
          for ( j = 0; j < 3; ++j )
          {
            if ( v28 == *v30 )
              break;
            ++v30;
          }
          if ( (*a1 & 0x20) == 0 )
            MiConvertSmallPageRangeToLarge(*v24);
          ExFreePoolWithTag(v24, 0);
          v32 = *((_QWORD *)a1 + 9);
          *((_QWORD *)a1 + 8) += v28;
        }
      }
    }
  }
  return result;
}

/*
 * XREFs of MiTerminateWsleCluster @ 0x1403234E0
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     MiAppendWsleCluster @ 0x14031D6E0 (MiAppendWsleCluster.c)
 *     MiDeleteVaTail @ 0x140323460 (MiDeleteVaTail.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiDeletePteWsleCluster @ 0x14032A9F0 (MiDeletePteWsleCluster.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 * Callees:
 *     MiCountWslesInPageTable @ 0x1402B4D30 (MiCountWslesInPageTable.c)
 *     MiCompressTbFlushList @ 0x1402D6680 (MiCompressTbFlushList.c)
 *     MiCanMergeTbFlushEntryBackwards @ 0x1402DD894 (MiCanMergeTbFlushEntryBackwards.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiRemoveWsle @ 0x140325790 (MiRemoveWsle.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiDeleteValidSystemPage @ 0x14032AEA0 (MiDeleteValidSystemPage.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiUnlockWsle @ 0x1403443C0 (MiUnlockWsle.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiTerminateWsleCluster(__int64 *a1)
{
  unsigned __int64 v2; // r15
  __int64 result; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  char v7; // al
  unsigned __int8 v8; // al
  int v9; // ecx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r11
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned int v19; // ecx
  char v20; // cl
  __int64 v21; // r14
  unsigned __int64 v22; // r15
  unsigned int v23; // ebx
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int8 *v26; // rbx
  _DWORD *v27; // rdi
  unsigned __int64 v28; // r8
  __int64 v29; // rcx
  unsigned __int64 *v30; // rbx
  __int64 v31; // rbx
  char v32; // r11
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  char v35; // al
  int v36; // edx
  unsigned int v37; // r14d
  unsigned __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // r8d
  __int64 v41; // rbx
  __int64 v42; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rax
  unsigned __int64 v48; // r14
  __int64 v49; // rdi
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // rax
  __int64 v52; // r9
  struct _LIST_ENTRY *v53; // rax
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // r8
  signed __int32 v58[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v59; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v60; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v61; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v62; // [rsp+48h] [rbp-B8h]
  _OWORD v63[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+88h] [rbp-78h]
  int v65; // [rsp+90h] [rbp-70h] BYREF
  __int16 v66; // [rsp+94h] [rbp-6Ch]
  __int16 v67; // [rsp+96h] [rbp-6Ah]
  __int64 v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+A0h] [rbp-60h]
  _QWORD Base[21]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v71[2]; // [rsp+150h] [rbp+50h] BYREF

  v67 = 0;
  memset(&Base[1], 0, 0x98uLL);
  v2 = a1[1];
  result = 0LL;
  v61 = v2;
  v64 = 0LL;
  memset(v63, 0, sizeof(v63));
  if ( !v2 )
    return result;
  v4 = 0xFFFFF68000000000uLL;
  v5 = *a1;
  v60 = v5;
  v6 = (__int64)(v2 << 25) >> 16;
  v7 = *(_BYTE *)(v5 + 184);
  v62 = v6;
  v8 = v7 & 7;
  if ( v8 )
  {
    v9 = 2;
    if ( v8 >= 2u )
      v9 = 0;
  }
  else
  {
    v9 = 1;
  }
  v68 = 20LL;
  v65 = v9;
  v66 = 0;
  v69 = 0LL;
  Base[0] = 0LL;
  v10 = 0xFFFFF6FB7DBED7F8uLL;
  v11 = 0xFFFFF6FB40000000uLL;
  if ( (*(_BYTE *)(v5 + 184) & 7) != 0 )
  {
    v26 = (unsigned __int8 *)a1 + 28;
    if ( (*((_BYTE *)a1 + 28) & 0xF) == 8 )
    {
      v48 = 0LL;
      if ( a1[2] )
      {
        v49 = (__int64)(v2 << 25) >> 16;
        v50 = v2;
        do
        {
          v51 = MI_READ_PTE_LOCK_FREE(v50);
          MiUnlockWsle(v60, v49, 48 * ((v51 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, v52);
          ++v48;
          v50 += 8LL;
          v49 += 4096LL;
        }
        while ( v48 < a1[2] );
        v2 = v61;
        v26 = (unsigned __int8 *)a1 + 28;
        v6 = v62;
        v5 = v60;
      }
    }
    v27 = a1 + 3;
    if ( (a1[3] & 4) == 0 )
      MiInsertTbFlushEntry(&v65, v6, a1[2]);
    goto LABEL_28;
  }
  v12 = 0LL;
  if ( !a1[2] )
    goto LABEL_27;
  v13 = v62;
  v14 = v2;
  v15 = 0xFFFFF6FB7FFFFFFFuLL;
  do
  {
    v16 = *(_QWORD *)v14;
    if ( v14 < 0xFFFFF6FB7DBED000uLL || v14 > 0xFFFFF6FB7DBED7F8uLL )
    {
      v17 = *(_QWORD *)v14;
      v18 = v16 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v59 = v18;
    }
    else
    {
      if ( (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v16 & 1) != 0
        && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v44 = *((_QWORD *)&Flink->Flink + ((v14 >> 3) & 0x1FF));
          v45 = v16 | 0x20;
          if ( (v44 & 0x20) == 0 )
            v45 = *(_QWORD *)v14;
          v16 = v45;
          if ( (v44 & 0x42) != 0 )
            v16 = v45 | 0x42;
        }
      }
      v18 = v16 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v59 = v18;
      if ( MiPteHasShadow() )
        goto LABEL_13;
    }
    v19 = ((unsigned int)MiFlags >> 26) & 3;
    if ( v19 <= 1 )
    {
      if ( !v19 )
        goto LABEL_13;
      if ( v14 >= v11 && v14 <= v15 && (v17 & 0x80u) == 0LL )
        LOBYTE(v17) = 32;
    }
    else if ( (MiFlags & 0x2000000) != 0 )
    {
      _mm_lfence();
    }
    if ( (v17 & 0x20) == 0 )
    {
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      v32 = _InterlockedExchange64((volatile __int64 *)v14, v18);
      if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= v10 )
      {
        MiWritePteShadow(v14, v18, v4);
        v4 = 0xFFFFF68000000000uLL;
        v11 = 0xFFFFF6FB40000000uLL;
      }
      if ( (v32 & 0x20) == 0 )
        goto LABEL_25;
      goto LABEL_16;
    }
LABEL_13:
    if ( MiPteInShadowRange(v14) && MiPteHasShadow() )
    {
      *(_QWORD *)v14 = v18;
      MiWritePteShadow(v14, v18, v46);
    }
    else
    {
      *(_QWORD *)v14 = v18;
    }
    v4 = 0xFFFFF68000000000uLL;
LABEL_16:
    v20 = v66;
    v21 = 1LL;
    v22 = v13;
    if ( v65 != 1 && (v66 & 8) == 0 && v13 >= v4 && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v20 = v66 | 8;
      LOBYTE(v66) = v66 | 8;
    }
    v23 = HIDWORD(v68);
    if ( HIDWORD(v68) )
    {
      if ( (v20 & 4) == 0 )
      {
        v24 = Base[HIDWORD(v68) - 1];
        if ( (v24 & 0xC00) == 0 )
        {
          v25 = Base[HIDWORD(v68) - 1] & 0x3FFLL;
          if ( (v24 & 0xFFFFFFFFFFFFF000uLL) + ((v25 + 1) << 12) == v13 && v25 + 1 >= v25 && v25 + 1 <= 0x3FF )
          {
            ++v69;
            Base[HIDWORD(v68) - 1] = v24 ^ ((unsigned __int16)v24 ^ (unsigned __int16)(v24 + 1)) & 0x3FF;
LABEL_24:
            v11 = 0xFFFFF6FB40000000uLL;
            v4 = 0xFFFFF68000000000uLL;
            goto LABEL_25;
          }
        }
      }
    }
    if ( MiCanMergeTbFlushEntryBackwards((__int64)&v65, v13, 1LL, 0) )
    {
      v47 = Base[v23 - 1];
      ++v69;
      Base[v23 - 1] = (v47 - 4096) ^ ((unsigned __int16)(v47 - 4096) ^ (unsigned __int16)(v47 - 4096 + 1)) & 0x3FF;
      goto LABEL_24;
    }
    if ( v23 >= (unsigned int)v68 )
    {
      HIBYTE(v66) = 1;
      goto LABEL_24;
    }
    while ( 1 )
    {
      v33 = (unsigned __int64)(v21 - 1) > 0x3FF ? 1024LL : v21;
      v34 = v22 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v33 - 1) & 0x3FF;
      v21 -= v33;
      v22 += v33 << 12;
      Base[v23] = v34;
      v69 += v33;
      v23 = HIDWORD(v68) + 1;
      HIDWORD(v68) = v23;
      if ( v23 == (_DWORD)v68 && (v66 & 4) == 0 )
      {
        qsort(Base, v23, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
        MiCompressTbFlushList((__int64)&v65);
        v23 = HIDWORD(v68);
        if ( HIDWORD(v68) == (_DWORD)v68 )
          break;
      }
      if ( !v21 )
        goto LABEL_24;
    }
    v4 = 0xFFFFF68000000000uLL;
    v11 = 0xFFFFF6FB40000000uLL;
    if ( v21 )
    {
      HIBYTE(v66) = 1;
      v69 = HIDWORD(v68);
    }
LABEL_25:
    ++v12;
    v10 = 0xFFFFF6FB7DBED7F8uLL;
    v14 += 8LL;
    v15 = 0xFFFFF6FB7FFFFFFFuLL;
    v13 += 4096LL;
  }
  while ( v12 < a1[2] );
  v2 = v61;
  v5 = v60;
LABEL_27:
  v6 = v62;
  v26 = (unsigned __int8 *)a1 + 28;
  v27 = a1 + 3;
LABEL_28:
  MiRemoveWsle(v5, v6, a1[2], *v26, 10, *v27 & 1);
  v28 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v29 = *(_QWORD *)v28;
  if ( v28 >= 0xFFFFF6FB7DBED000uLL
    && v28 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v29 & 1) != 0
    && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
  {
    v53 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v53 )
    {
      v54 = *((_QWORD *)&v53->Flink + ((v28 >> 3) & 0x1FF));
      v55 = v29 | 0x20;
      if ( (v54 & 0x20) == 0 )
        v55 = v29;
      v29 = v55;
      if ( (v54 & 0x42) != 0 )
        v29 = v55 | 0x42;
    }
  }
  v61 = v29;
  v30 = (unsigned __int64 *)(48
                           * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v61) >> 12) & 0xFFFFFFFFFFLL)
                           - 0x220000000000LL);
  if ( ((*(_DWORD *)v30 >> 4) & 0x3FF) == 0 )
  {
    MiCountWslesInPageTable(0xFFFFFFFFFFLL, v6, v71);
    v35 = 8;
    while ( 1 )
    {
      v36 = *((_DWORD *)v71 + (unsigned __int8)--v35);
      if ( v36 )
        break;
      if ( !v35 )
        goto LABEL_30;
    }
    *v30 = *v30 & 0xFFFFFFFFFFFE000FuLL | (16 * (v36 & 0x3FF | ((unsigned __int64)(v35 & 7) << 10)));
  }
LABEL_30:
  if ( (*(_BYTE *)(v5 + 184) & 7) != 0 )
  {
    v37 = (2 * (*v27 & 8)) | 4;
    if ( (*(_BYTE *)v27 & 0x10) == 0 )
      v37 = 2 * (*v27 & 8);
    v38 = 0LL;
    if ( a1[2] )
    {
      while ( 2 )
      {
        MiDeleteValidSystemPage(v60, v2, v37, v63);
        if ( (*v27 & 4) != 0 )
        {
          v59 = 0LL;
          MiPteInShadowRange((unsigned __int64)&v59);
          _InterlockedOr(v58, 0);
          v39 = MiSwizzleInvalidPte((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32);
          if ( !v40 )
            goto LABEL_56;
          if ( MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C6697C) && (v39 & 1) != 0 )
              v39 |= 0x8000000000000000uLL;
            v59 = v39;
            MiWritePteShadow((__int64)&v59, v39, v56);
          }
          else
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v39 & 1) != 0 )
            {
              v39 |= 0x8000000000000000uLL;
            }
LABEL_56:
            v59 = v39;
          }
          v41 = v59;
          if ( MiPteInShadowRange(v2) )
          {
            if ( !MiPteHasShadow() )
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (v41 & 1) != 0 )
              {
                v41 |= 0x8000000000000000uLL;
              }
              goto LABEL_58;
            }
            if ( !HIBYTE(word_140C6697C) && (v41 & 1) != 0 )
              v41 |= 0x8000000000000000uLL;
            *(_QWORD *)v2 = v41;
            MiWritePteShadow(v2, v41, v57);
          }
          else
          {
LABEL_58:
            *(_QWORD *)v2 = v41;
          }
          v42 = v59;
          if ( qword_140C657C0 && (v59 & 0x10) == 0 )
            v42 = v59 & ~qword_140C657C0;
          if ( (v42 & 0xFFFFFFFF00000000uLL) == 0 )
            MiInsertTbFlushEntry(&v65, v6, 1LL);
        }
        ++v38;
        v2 += 8LL;
        v6 += 4096LL;
        if ( v38 >= a1[2] )
          break;
        continue;
      }
    }
  }
  v31 = 0LL;
  if ( (*(_BYTE *)v27 & 1) != 0 )
    v31 = *((_QWORD *)&v63[0] + 1);
  MiFlushTbList(&v65);
  result = v31;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return result;
}

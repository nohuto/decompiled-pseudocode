/*
 * XREFs of CmQueryMultipleValueKey @ 0x1407A6F60
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1406B8CB0 (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406B5A64 (CmpTransSearchAddTransFromKeyBody.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindValueByName @ 0x1407A74A0 (CmpFindValueByName.c)
 *     CmpFindNameInList @ 0x1407A74D8 (CmpFindNameInList.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1407A893C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpGetValueData @ 0x1407AAC20 (CmpGetValueData.c)
 *     CmpLockTwoKcbsShared @ 0x1407ACF00 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1407ACF58 (CmpUnlockTwoKcbs.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A11200 (CmQueryMultipleValueForLayeredKey.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmQueryMultipleValueKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        unsigned int *a7)
{
  int v7; // r12d
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r12
  volatile signed __int64 *v14; // rsi
  __int64 v15; // rcx
  ULONG_PTR v16; // rdx
  __int64 CellFlat; // rax
  __int64 v18; // rsi
  __int64 v19; // r9
  int v20; // r8d
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // r12
  unsigned __int16 *i; // r12
  unsigned int ValueByName; // ecx
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // r12d
  unsigned int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int MultipleValueForLayeredKey; // ebx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // ebx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // r12d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // eax
  ULONG_PTR v61; // rcx
  __int64 CellPaged; // rax
  char v63; // [rsp+40h] [rbp-F8h]
  size_t Size; // [rsp+44h] [rbp-F4h] BYREF
  unsigned int v65; // [rsp+4Ch] [rbp-ECh]
  unsigned int v66; // [rsp+50h] [rbp-E8h]
  int v67; // [rsp+54h] [rbp-E4h]
  int v68; // [rsp+58h] [rbp-E0h]
  __int64 v69; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v70; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v71; // [rsp+70h] [rbp-C8h] BYREF
  int v72; // [rsp+78h] [rbp-C0h]
  __int64 v73; // [rsp+80h] [rbp-B8h]
  __int64 v74; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v75; // [rsp+90h] [rbp-A8h] BYREF
  void *Src; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-98h]
  _BYTE *v78; // [rsp+A8h] [rbp-90h]
  unsigned int v79; // [rsp+B0h] [rbp-88h]
  __int64 v80; // [rsp+B8h] [rbp-80h]
  ULONG_PTR v81; // [rsp+C0h] [rbp-78h]
  __int64 v82; // [rsp+C8h] [rbp-70h]
  __int64 v83; // [rsp+D0h] [rbp-68h]
  __int64 v84; // [rsp+D8h] [rbp-60h]
  __int64 v85; // [rsp+E0h] [rbp-58h]
  __int64 v86; // [rsp+E8h] [rbp-50h]
  __int64 v87; // [rsp+F0h] [rbp-48h]
  __int64 v88; // [rsp+140h] [rbp+8h] BYREF
  __int64 v89; // [rsp+150h] [rbp+18h]
  unsigned int v90; // [rsp+158h] [rbp+20h]

  v90 = a4;
  v89 = a3;
  v7 = a3;
  v81 = 0LL;
  v10 = 0LL;
  v80 = 0LL;
  v69 = 0xFFFFFFFFLL;
  v66 = 0;
  v65 = 0;
  v63 = 0;
  v70 = 0xFFFFFFFFLL;
  v73 = 0LL;
  v74 = 0xFFFFFFFFLL;
  v11 = 0LL;
  v85 = 0LL;
  v71 = 0LL;
  LOBYTE(v68) = 0;
  LOBYTE(v67) = 0;
  Src = 0LL;
  LOBYTE(v88) = 0;
  v75 = 0xFFFFFFFFLL;
  CmpLockRegistry(0xFFFFFFFFLL, a2, a3, a4);
  v12 = *(_QWORD *)(a1 + 8);
  v87 = v12;
  if ( *(_WORD *)(v12 + 66) )
  {
    MultipleValueForLayeredKey = CmQueryMultipleValueForLayeredKey(a1, v7, v90, a5, (__int64)a6, (__int64)a7);
    CmpUnlockRegistry(v42, v41, v43, v44);
    return MultipleValueForLayeredKey;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockKcbShared(v12);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v45 = (*(_DWORD *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
      CmpUnlockKcb(v12);
LABEL_63:
      CmpUnlockRegistry(v47, v46, v48, v49);
      return (unsigned int)(v45 - 1073741444);
    }
    CmpUnlockKcb(v12);
    v55 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v71);
    if ( v55 < 0 )
    {
      CmpUnlockRegistry(v52, v51, v53, v54);
      return (unsigned int)v55;
    }
  }
  if ( a2 )
  {
    v11 = *(_QWORD *)(a2 + 8);
    v85 = v11;
  }
  CmpLockTwoKcbsShared(v11, v12);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v71) )
  {
    v50 = *(_DWORD *)(a1 + 48);
LABEL_62:
    v45 = (v50 & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockTwoKcbs(v11, v12);
    goto LABEL_63;
  }
  if ( a2 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v71) )
  {
    v50 = *(_DWORD *)(a2 + 48);
    goto LABEL_62;
  }
  v13 = *(_QWORD *)(v12 + 32);
  v77 = v13;
  v86 = v13;
  v14 = (volatile signed __int64 *)(v13 + 72);
  v15 = KeAbPreAcquire(v13 + 72, 0LL);
  v78 = (_BYTE *)v15;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 72), 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx((signed __int64 *)(v13 + 72), 0, v15, v13 + 72);
    v15 = (__int64)v78;
  }
  if ( v15 )
    *(_BYTE *)(v15 + 18) = 1;
  v16 = *(unsigned int *)(v12 + 40);
  v78 = (_BYTE *)(v13 + 140);
  if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v13, v16);
  else
    CellFlat = HvpGetCellPaged(v13);
  v83 = CellFlat;
  if ( !CellFlat )
  {
    if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v13 + 72));
    KeAbPostRelease(v13 + 72);
    goto LABEL_73;
  }
  CmpUpdateKeyNodeAccessBits(v13, CellFlat, *(unsigned int *)(v12 + 40));
  if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v13 + 72));
  KeAbPostRelease(v13 + 72);
  v18 = v71;
  if ( v71 )
  {
    v60 = (unsigned __int8)v68;
    if ( *(_QWORD *)(v12 + 288) == v71 )
      v60 = 1;
    v68 = v60;
  }
  if ( !v11 )
  {
    v19 = 0LL;
    LOBYTE(v20) = v67;
    goto LABEL_20;
  }
  v61 = *(_QWORD *)(v11 + 32);
  v81 = v61;
  if ( (*(_BYTE *)(v61 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v61, *(unsigned int *)(v11 + 40));
  else
    CellPaged = HvpGetCellPaged(v61);
  v19 = CellPaged;
  v73 = CellPaged;
  if ( !CellPaged )
  {
    if ( (*v78 & 1) != 0 )
      HvpReleaseCellFlat(v13, &v70);
    else
      HvpReleaseCellPaged(v13, &v70);
LABEL_73:
    CmpUnlockTwoKcbs(v11, v12);
    CmpUnlockRegistry(v57, v56, v58, v59);
    return 3221225626LL;
  }
  LOBYTE(v20) = v67;
  if ( v18 )
  {
    v20 = (unsigned __int8)v67;
    if ( *(_QWORD *)(v11 + 288) == v18 )
      v20 = 1;
    v67 = v20;
  }
LABEL_20:
  v21 = 0;
  v22 = 0LL;
  while ( 1 )
  {
    v72 = v22;
    v23 = 0LL;
    if ( (unsigned int)v22 >= v90 )
      break;
    v82 = 3 * v22;
    for ( i = *(unsigned __int16 **)(v89 + 24 * v22);
          *i && !*(_WORD *)(*((_QWORD *)i + 1) + 2 * ((unsigned __int64)*i >> 1) - 2);
          *i -= 2 )
    {
      ;
    }
    ValueByName = -1;
    Size = -1LL;
    if ( v11 )
    {
      v10 = v81;
      v80 = v81;
      if ( (_BYTE)v20 )
      {
        CmpFindNameInList(v81, v11 + 280, (_DWORD)i, 0, 0LL, (__int64)&Size);
        ValueByName = Size;
        HIDWORD(Size) = Size;
      }
      else
      {
        ValueByName = CmpFindValueByName(v81, v19, i);
        HIDWORD(Size) = ValueByName;
        LODWORD(Size) = ValueByName;
      }
    }
    if ( ValueByName == -1 )
    {
      v10 = v77;
      v80 = v77;
      if ( (_BYTE)v68 )
      {
        CmpFindNameInList(v77, v12 + 280, (_DWORD)i, 0, 0LL, (__int64)&Size);
        ValueByName = Size;
        HIDWORD(Size) = Size;
      }
      else
      {
        ValueByName = CmpFindValueByName(v77, v83, i);
        HIDWORD(Size) = ValueByName;
      }
      if ( ValueByName == -1 )
      {
        v21 = -1073741772;
        v23 = 0LL;
        break;
      }
    }
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      v26 = HvpGetCellFlat(v10, ValueByName);
    else
      v26 = HvpGetCellPaged(v10);
    v23 = v26;
    v84 = v26;
    if ( !v26 )
    {
LABEL_93:
      v21 = -1073741670;
      goto LABEL_52;
    }
    v27 = *(_DWORD *)(v26 + 4);
    v28 = v27 + 0x80000000;
    if ( v27 < 0x80000000 )
      v28 = v27;
    LODWORD(Size) = v28;
    v29 = (v65 + 3) & 0xFFFFFFFC;
    v65 = v29;
    LODWORD(v71) = v29;
    v30 = (v66 + 3) & 0xFFFFFFFC;
    v66 = v30;
    v79 = v30;
    if ( v28 + v29 > *a6 || v28 + v29 < v29 || v63 )
    {
      v63 = 1;
    }
    else
    {
      if ( !(unsigned __int8)CmpGetValueData(v10, (__int64)&Src, (__int64)&v88, (__int64)&v75) )
        goto LABEL_93;
      HIDWORD(Size) = Size;
      memmove((void *)(a5 + v65), Src, (unsigned int)Size);
      v31 = v82;
      v32 = v89;
      *(_DWORD *)(v89 + 8 * v82 + 16) = *(_DWORD *)(v23 + 12);
      *(_DWORD *)(v32 + 8 * v31 + 8) = HIDWORD(Size);
      v33 = v65;
      *(_DWORD *)(v32 + 8 * v31 + 12) = v65;
      if ( (_BYTE)v88 )
      {
        ExFreePoolWithTag(Src, 0);
        LOBYTE(v88) = 0;
      }
      else if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      {
        HvpReleaseCellFlat(v10, &v75);
      }
      else
      {
        HvpReleaseCellPaged(v10, &v75);
      }
      Src = 0LL;
      v28 = HIDWORD(Size);
      v65 = HIDWORD(Size) + v33;
      v30 = v66;
    }
    v66 = v28 + v30;
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, &v69);
    else
      HvpReleaseCellPaged(v10, &v69);
    v22 = (unsigned int)(v72 + 1);
    v19 = v73;
    LOBYTE(v20) = v67;
  }
  v34 = v66;
  if ( v21 >= 0 )
  {
    if ( v63 )
      v21 = -2147483643;
    *a6 = v65;
    if ( a7 )
      *a7 = v34;
  }
LABEL_52:
  if ( v23 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, &v69);
    else
      HvpReleaseCellPaged(v10, &v69);
  }
  if ( v73 )
  {
    if ( (*(_BYTE *)(v81 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v81, &v74);
    else
      HvpReleaseCellPaged(v81, &v74);
  }
  if ( (*v78 & 1) != 0 )
    HvpReleaseCellFlat(v77, &v70);
  else
    HvpReleaseCellPaged(v77, &v70);
  CmpUnlockTwoKcbs(v11, v12);
  CmpUnlockRegistry(v36, v35, v37, v38);
  return (unsigned int)v21;
}

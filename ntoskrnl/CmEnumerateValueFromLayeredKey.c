/*
 * XREFs of CmEnumerateValueFromLayeredKey @ 0x140A10EC4
 * Callers:
 *     CmEnumerateValueKey @ 0x1407AB770 (CmEnumerateValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpGetKeyNodeForKcb @ 0x1406B7CA4 (CmpGetKeyNodeForKcb.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpQueryKeyValueData @ 0x1407AA6A0 (CmpQueryKeyValueData.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackShared @ 0x1407AF490 (CmpLockKcbStackShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpValueEnumStackAdvance @ 0x140A228A4 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x140A22A28 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x140A22A88 (CmpValueEnumStackInitialize.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140A22BAC (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     HvpGetBinContextInitialize @ 0x140AF2644 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall CmEnumerateValueFromLayeredKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        size_t a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // r15
  char v9; // r12
  __int64 KcbAtLayerHeight; // r14
  __int64 v11; // rdi
  int started; // ebx
  char IsKeyDeletedForKeyBody; // al
  char v14; // r8
  __int16 v15; // dx
  __int16 v16; // dx
  char v17; // r9
  __int16 v18; // r10
  int v19; // esi
  unsigned int v20; // ebx
  __int64 v21; // rsi
  __int64 KeyNodeForKcb; // rax
  ULONG_PTR v23; // rcx
  ULONG_PTR v24; // rdx
  __int64 CellFlat; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  ULONG_PTR v28; // rcx
  __int64 CellPaged; // rax
  __int64 v30; // r15
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v34; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v35; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v36; // [rsp+50h] [rbp-99h] BYREF
  __int128 v37; // [rsp+58h] [rbp-91h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-81h]
  __int64 v39; // [rsp+78h] [rbp-71h]
  size_t Size; // [rsp+80h] [rbp-69h]
  ULONG_PTR BugCheckParameter4[12]; // [rsp+90h] [rbp-59h] BYREF

  v7 = a2;
  Size = a4;
  v39 = a6;
  memset(BugCheckParameter4, 0, 0x58uLL);
  v37 = 0LL;
  WORD1(v37) = -1;
  v9 = 0;
  *(_OWORD *)Privileges = 0LL;
  CmpValueEnumStackInitialize(BugCheckParameter4);
  v36 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v36 + 4);
  v34 = 0xFFFFFFFFLL;
  KcbAtLayerHeight = 0LL;
  v11 = 0LL;
  HvpGetBinContextInitialize((char *)&v34 + 4);
  v35 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v35 + 4);
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v37, *(_QWORD *)(a1 + 8));
  if ( started < 0 )
    goto LABEL_37;
  CmpLockKcbStackShared((__int64)&v37);
  v9 = 1;
  IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, 0LL);
  v14 = 0;
  if ( IsKeyDeletedForKeyBody )
  {
    started = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_37;
  }
  v15 = WORD1(v37);
  if ( SWORD1(v37) <= 0 )
    goto LABEL_15;
  do
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v37, v15);
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
      v17 = 1;
    v15 = v18 + v16;
  }
  while ( v15 > 0 );
  if ( !v17 )
  {
LABEL_15:
    KcbAtLayerHeight = *((_QWORD *)&v37 + 1);
    v21 = *((_QWORD *)&v37 + 1);
    KeyNodeForKcb = CmpGetKeyNodeForKcb(*((__int64 *)&v37 + 1), (__int64)&v34, v14);
    v11 = KeyNodeForKcb;
    if ( (*(_BYTE *)(KeyNodeForKcb + 2) & 0x40) != 0 )
    {
      started = -1073741816;
      goto LABEL_37;
    }
    if ( *(_DWORD *)(KeyNodeForKcb + 36) <= (unsigned int)v7 )
    {
      started = -2147483622;
      goto LABEL_37;
    }
    v23 = *(_QWORD *)(KcbAtLayerHeight + 32);
    v24 = *(unsigned int *)(KeyNodeForKcb + 40);
    if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v23, v24, &v35);
    else
      CellFlat = HvpGetCellPaged(v23, v24, (unsigned int *)&v35);
    v20 = *(_DWORD *)(CellFlat + 4 * v7);
    v26 = *(_QWORD *)(KcbAtLayerHeight + 32);
    if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v26, &v35);
    else
      HvpReleaseCellPaged(v26, (unsigned int *)&v35);
    v27 = *(_QWORD *)(KcbAtLayerHeight + 32);
    if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v27, &v34);
    else
      HvpReleaseCellPaged(v27, (unsigned int *)&v34);
    goto LABEL_28;
  }
  started = CmpValueEnumStackStartFromKcbStack(BugCheckParameter4, &v37, a1);
  if ( started < 0 )
    goto LABEL_37;
  started = CmpValueEnumStackAdvance(BugCheckParameter4);
  if ( started < 0 )
    goto LABEL_37;
  v19 = 0;
  if ( !(_DWORD)v7 )
  {
LABEL_14:
    v20 = BugCheckParameter4[0];
    v21 = CmpGetKcbAtLayerHeight((__int64)&v37, SHIWORD(BugCheckParameter4[0]));
LABEL_28:
    v28 = *(_QWORD *)(v21 + 32);
    if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v28, v20, &v36);
    else
      CellPaged = HvpGetCellPaged(v28, v20, (unsigned int *)&v36);
    v30 = CellPaged;
    started = CmpQueryKeyValueData(v21, v20, CellPaged, a3, (_DWORD *)Size, a5, (unsigned int *)v39);
    if ( started >= 0 )
      started = 0;
    v11 = 0LL;
    if ( v30 )
    {
      v31 = *(_QWORD *)(v21 + 32);
      if ( (*(_BYTE *)(v31 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v31, &v36);
      else
        HvpReleaseCellPaged(v31, (unsigned int *)&v36);
    }
    goto LABEL_37;
  }
  while ( 1 )
  {
    started = CmpValueEnumStackAdvance(BugCheckParameter4);
    if ( started < 0 )
      break;
    if ( ++v19 >= (unsigned int)v7 )
      goto LABEL_14;
  }
LABEL_37:
  CmpValueEnumStackCleanup(BugCheckParameter4);
  if ( v11 )
  {
    v32 = *(_QWORD *)(KcbAtLayerHeight + 32);
    if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v32, &v34);
    else
      HvpReleaseCellPaged(v32, (unsigned int *)&v34);
  }
  if ( v9 )
    CmpUnlockKcbStack((__int64)&v37);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}

/*
 * XREFs of MiWsleFree @ 0x14032BA30
 * Callers:
 *     MiFreeWsleList @ 0x14032B2B0 (MiFreeWsleList.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiGetPfnPriority @ 0x14028A3F8 (MiGetPfnPriority.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1402DC734 (MiRewriteTrimPteAsDemandZero.c)
 *     MiCapturePageFileInfoInline @ 0x1402DE2D4 (MiCapturePageFileInfoInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     MiPageMightBeZero @ 0x14032BE90 (MiPageMightBeZero.c)
 *     MiPfnShareCountIsZero @ 0x14032BF50 (MiPfnShareCountIsZero.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiBadShareCount @ 0x14064B0E0 (MiBadShareCount.c)
 */

__int64 MiWsleFree(__int64 a1, unsigned __int64 a2, char a3, ...)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v7; // r15
  signed __int64 v8; // rcx
  __int64 v9; // rsi
  char v10; // bp
  unsigned __int64 v11; // rdi
  BOOL v12; // r14d
  int v13; // eax
  int v14; // ebx
  int v15; // r8d
  int v16; // eax
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 *MmInternal; // rdi
  unsigned __int64 UltraMapping; // rcx
  unsigned __int64 *v20; // r9
  _QWORD *v21; // r8
  char v22; // bl
  __int64 v23; // r12
  unsigned __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned __int64 ContainingPageTable; // r15
  char v29; // cl
  _DWORD v30[18]; // [rsp+20h] [rbp-48h] BYREF
  signed __int64 v31; // [rsp+78h] [rbp+10h] BYREF
  int v32; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v33; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v33 = va_arg(va1, _QWORD);
  v3 = v33;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)va) >> 12) & 0xFFFFFFFFFFLL);
  v31 = v8;
  v9 = v8 - 0x220000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v10 = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  else
    v10 = (*(_BYTE *)v9 >> 1) & 7;
  v11 = 0LL;
  v12 = *(_QWORD *)(v9 + 40) >= 0LL;
  if ( (a3 & 4) != 0 )
  {
    v14 = 0;
  }
  else
  {
    v13 = MiPageMightBeZero(a1, v8 - 0x220000000000LL, v7);
    v8 = v31;
    v14 = v13;
  }
  v32 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v32);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    v8 = v31;
  }
  if ( v14 && (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(v9 + 32) == 1 )
  {
    v15 = 4;
    v16 = *(unsigned __int8 *)(16 * (v8 >> 4) - 0x220000000000LL + 34) >> 6;
    if ( !v16 || v16 == 3 )
    {
      v15 = 12;
    }
    else if ( v16 == 2 )
    {
      v15 = 28;
    }
    ValidPte = MiMakeValidPte(0LL, 0xAAAAAAAAAAAAAAABuLL * (v8 >> 4), v15 | 0xA0000000);
    MmInternal = (unsigned __int64 *)KeGetCurrentPrcb()->MmInternal;
    UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0);
    v20 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v21 = (_QWORD *)(UltraMapping + 4088);
    MmInternal[1543] = (unsigned __int64)v20;
    *v20 = ValidPte;
    do
    {
      if ( *v21 | *(_QWORD *)UltraMapping )
        break;
      UltraMapping += 8LL;
      --v21;
    }
    while ( UltraMapping <= (unsigned __int64)v21 );
    v11 = 0LL;
    *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1543) = 0LL;
    *v20 = ZeroPte;
    if ( UltraMapping > (unsigned __int64)v21 )
    {
      MiRewriteTrimPteAsDemandZero(a1, (_QWORD *)v9);
      v22 = v33;
      v23 = 0LL;
LABEL_35:
      ContainingPageTable = MiGetContainingPageTable(v7);
      v29 = *(_BYTE *)(v9 + 34) & 0xC7;
      *(_WORD *)(v9 + 32) = 0;
      *(_QWORD *)(v9 + 40) &= ~0x8000000000000000uLL;
      *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
      *(_BYTE *)(v9 + 34) = v29;
      *(_BYTE *)(v9 + 35) &= ~0x20u;
      v11 = MiCapturePageFileInfoInline((unsigned __int64 *)(v9 + 16), 0, 0);
      if ( v11 )
        v23 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
      MiInsertPageInFreeOrZeroedList(v31 / 48, ((v22 & 4) != 0) + 1);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v9 = 48 * ContainingPageTable - 0x220000000000LL;
      v30[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(v30);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      goto LABEL_32;
    }
  }
  v22 = v33;
  v23 = 0LL;
  if ( (v33 & 4) != 0 )
    goto LABEL_35;
  if ( (v33 & 0x42) != 0 )
  {
    v11 = MiCaptureDirtyBitToPfn(v9);
    if ( v11 )
      v23 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
  }
  if ( v12 )
    v24 = -1LL;
  else
    v24 = MiGetContainingPageTable(v7);
  v25 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (a3 & 1) != 0
    && (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && *(_WORD *)(v9 + 32) == 1
    && (*(_BYTE *)(v9 + 34) & 0x10) == 0
    && (unsigned int)MiGetPfnPriority(v9) == 5 )
  {
    *(_BYTE *)(v9 + 35) = *(_BYTE *)(v9 + 35) & 0xF8 | 4;
  }
  if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
    MiBadShareCount(v9);
  v26 = *(_QWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 24) = v26 ^ v25 & (((v25 & v26) - 1) ^ v26);
  if ( (v25 & v26) == 1 )
    MiPfnShareCountIsZero(v9);
  if ( v24 != -1LL )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v9 = 48 * v24 - 0x220000000000LL;
    LODWORD(v31) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
LABEL_32:
    MiDecrementShareCount(v9);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v11 )
    MiReleasePageFileInfo(v23, v11, 1);
  LOBYTE(v32) = v10;
  BYTE1(v32) = (2 * v12) | 1;
  return (unsigned __int16)v32;
}

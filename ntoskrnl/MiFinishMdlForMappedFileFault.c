/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x14028BD60
 * Callers:
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiReferenceControlAreaPfn @ 0x140224DA0 (MiReferenceControlAreaPfn.c)
 *     PsGetIoPriorityThread @ 0x1402832C0 (PsGetIoPriorityThread.c)
 *     MiAreChargesNeededToLockPage @ 0x140284D60 (MiAreChargesNeededToLockPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiChargeForLockedPage @ 0x140287410 (MiChargeForLockedPage.c)
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     MiFlowThroughInsertNode @ 0x1402FE598 (MiFlowThroughInsertNode.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiEndingOffsetWithLock @ 0x140324190 (MiEndingOffsetWithLock.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 *v5; // r15
  __int64 v7; // r12
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  __int64 *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  int v19; // ecx
  char v20; // r15
  int v21; // edx
  __int64 v22; // rcx
  __int16 result; // ax
  char v24; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // [rsp+70h] [rbp+8h] BYREF
  __int64 v29; // [rsp+78h] [rbp+10h]
  int v30; // [rsp+80h] [rbp+18h] BYREF
  int v31; // [rsp+88h] [rbp+20h] BYREF

  v29 = a2;
  v5 = *(__int64 **)(a1 + 208);
  v7 = *(unsigned int *)(a1 + 184);
  v10 = *v5;
  MiReferenceControlAreaPfn(*v5, (__int64)v5, a3);
  v11 = *(_QWORD *)(a1 + 160);
  v28 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v28);
    while ( *(__int64 *)(v11 + 24) < 0 );
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v11) || (unsigned int)MiChargeForLockedPage(v12, 1) )
    ++*(_WORD *)(v11 + 32);
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v30 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v30);
    while ( *(__int64 *)(v11 + 24) < 0 );
  }
  *(_QWORD *)(v11 + 24) ^= ((*(_QWORD *)(v11 + 24) + a3) ^ *(_QWORD *)(v11 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v13 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 320) - 0x220000000000LL + 8) | 0x8000000000000000uLL;
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4);
  v14 = *(__int64 **)(a1 + 232);
  v15 = *v14;
  if ( (unsigned int)MiPteInShadowRange(v14)
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v15 & 1) != 0
    && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v26 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v14 >> 3) & 0x1FF));
      v27 = v15 | 0x20;
      if ( (v26 & 0x20) == 0 )
        v27 = v15;
      v15 = v27;
      if ( (v26 & 0x42) != 0 )
        v15 = v27 | 0x42;
    }
  }
  v16 = a5;
  *(_QWORD *)(a1 + 168) = v15;
  v17 = MiStartingOffset(v5, v13, v16);
  v18 = MiEndingOffsetWithLock(v5);
  v19 = *(_DWORD *)(a1 + 192);
  if ( (v19 & 0x20000) != 0 )
  {
    v19 &= ~0x20000u;
    v20 = 1;
    *(_DWORD *)(a1 + 192) = v19;
  }
  else
  {
    v20 = 0;
  }
  v21 = v19;
  if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 && v17 + v7 > v18 )
  {
    LODWORD(v7) = (v18 - v17 + 511) & 0xFFFFFE00;
    v21 = v19 | 0x20000;
    *(_DWORD *)(a1 + 192) = v19 | 0x20000;
  }
  if ( (v29 & 1) != 0 )
  {
    v24 = *(_BYTE *)(v29 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v24 == 1 || v24 == 2) && (v29 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && ((v29 & 1) == 0 || v24 != 2) )
      *(_DWORD *)(a1 + 192) = v21 | 8;
  }
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
    *(_DWORD *)(a1 + 192) |= 0x80u;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_WORD *)(a1 + 282) = 0;
  *(_WORD *)(a1 + 280) = 8 * ((((unsigned __int64)(unsigned int)v7 + 4095) >> 12) + 6);
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 316) = 0;
  *(_DWORD *)(a1 + 312) = v7;
  v31 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v31);
    while ( *(__int64 *)(v11 + 24) < 0 );
  }
  *(_BYTE *)(v11 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v11);
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v22 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)((__int64)v14 - v13) >> 3) + 320) - 0x220000000000LL;
  result = *(_WORD *)(a1 + 282) | 0x42;
  *(_WORD *)(a1 + 282) = result;
  if ( !v20 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 282) = result;
  }
  *(_QWORD *)(a1 + 96) = v17;
  *(_QWORD *)(a1 + 240) = v13;
  *(_QWORD *)(a1 + 248) = v22;
  *(_QWORD *)(a1 + 200) = 0LL;
  return result;
}

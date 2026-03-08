/*
 * XREFs of MiDecommitLargePte @ 0x1406334B0
 * Callers:
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140210194 (MiInsertLargeTbFlushEntry.c)
 *     MiReducePteUseCount @ 0x1402D0E3C (MiReducePteUseCount.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

_BOOL8 MiDecommitLargePte(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, ...)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int v8; // ebp
  unsigned int v9; // ecx
  unsigned __int64 v10; // rsi
  _QWORD *v11; // r14
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbx
  int v14; // r13d
  __int64 v15; // r8
  bool v16; // zf
  __int64 v17; // rsi
  BOOL v18; // r14d
  unsigned __int64 LeafVa; // rax
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rbx
  unsigned __int64 v23; // rdi
  char v24; // cl
  __int64 v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  unsigned __int64 v30; // [rsp+A0h] [rbp+18h]
  __int64 v31; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  __int64 v33; // [rsp+B0h] [rbp+28h]
  va_list va1; // [rsp+B8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v31 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  v3 = *(unsigned int *)(a1 + 48);
  v5 = 16LL;
  v6 = (v3 >> 19) & 3;
  v28 = MiVadPageSizes[v6];
  if ( v28 != 16 )
    v5 = 1LL;
  v8 = 0;
  v30 = v5;
  v9 = MiVadPageIndices[v6];
  if ( v9 <= 1 )
    v8 = 2 - v9;
  v26 = MI_READ_PTE_LOCK_FREE(a2);
  v10 = v26;
  if ( (v26 & 1) != 0 )
  {
    v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26);
  }
  else if ( qword_140C657C0 )
  {
    if ( (v26 & 0x10) != 0 )
      v10 = v26 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v10 = ~qword_140C657C0 & v26;
  }
  v11 = (_QWORD *)a2;
  v27 = (v10 >> 12) & 0xFFFFFFFFFFLL;
  v12 = 0LL;
  do
  {
    v13 = a3;
    v14 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v11) )
      goto LABEL_20;
    if ( MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_20;
      v16 = (a3 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_20;
      v16 = (a3 & 1) == 0;
    }
    if ( !v16 )
      v13 = a3 | 0x8000000000000000uLL;
LABEL_20:
    *v11 = v13;
    if ( v14 )
      MiWritePteShadow((__int64)v11, v13, v15);
    ++v12;
    ++v11;
  }
  while ( v12 < v30 );
  v17 = v27;
  v18 = !a3 && v8 != 3 && MiReducePteUseCount(a2, v30);
  if ( (v26 & 1) != 0 )
  {
    if ( v8 )
    {
      MiInsertLargeTbFlushEntry(v33, v8, a2);
    }
    else
    {
      LeafVa = MiGetLeafVa(a2);
      MiInsertTbFlushEntry(v33, LeafVa, v28, 0);
    }
  }
  v20 = 48 * v17;
  v21 = v31;
  v22 = v20 - 0x220000000000LL;
  LODWORD(v31) = 0;
  v23 = *(_QWORD *)(v21 + 48);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx((__int64 *)va);
    while ( *(__int64 *)(v22 + 24) < 0 );
  }
  v24 = *(_BYTE *)(v22 + 34);
  *(_QWORD *)(v21 + 48) = v22;
  *(_BYTE *)(v22 + 34) = v24 & 0xF8 | 5;
  *(_QWORD *)v22 ^= (*(_QWORD *)v22 ^ (v23 >> 3)) & 0xFFFFFFFFFFELL;
  *(_BYTE *)(v22 + 34) ^= (*(_BYTE *)(v22 + 34) ^ v24) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v18;
}

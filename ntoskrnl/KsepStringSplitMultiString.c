/*
 * XREFs of KsepStringSplitMultiString @ 0x1408571CC
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x14079E958 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140303C7C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x140303CA4 (KsepPoolAllocatePaged.c)
 *     RtlAssert @ 0x1405A7CA0 (RtlAssert.c)
 *     KsepStringDuplicate @ 0x14079E668 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x14079EC60 (KsepStringFree.c)
 */

__int64 __fastcall KsepStringSplitMultiString(__int64 a1, unsigned __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // rbx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  __int64 v14; // rbp
  void *Paged; // rdi
  unsigned int v16; // ecx
  unsigned int v17; // r15d
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax

  v4 = 0;
  v5 = a2 >> 1;
  if ( !a1 || (a2 & 1) != 0 || !a3 || !a4 || v5 < 3 || *(_WORD *)(a1 + 2 * v5 - 2) || *(_WORD *)(a1 + 2 * v5 - 4) )
    return (unsigned int)-1073741811;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  do
  {
    v12 = v9 + 1;
    if ( *(_WORD *)(a1 + 2 * v11) )
      v12 = v9;
    v11 = ++v10;
    v9 = v12;
  }
  while ( v10 < v5 );
  v13 = v12;
  if ( v12 < 2 )
  {
    v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v22 + 1] = -1073740768;
    KsepHistoryErrors[2 * v22] = 197557;
    if ( (KsepDebugFlag & 4) != 0 )
    {
      RtlAssert("NullCount >= 2", "minkernel\\ntos\\kshim\\ksemisc.c", 0x3B5u, 0LL);
      v9 = v13;
    }
  }
  v14 = v9 - 1;
  Paged = KsepPoolAllocatePaged(16 * v14);
  if ( !Paged )
    return (unsigned int)-1073741801;
  v16 = 0;
  v17 = 0;
  v18 = v5 - 1;
  if ( !v18 )
  {
LABEL_19:
    if ( v17 != (_DWORD)v14 )
    {
      v24 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v24 + 1] = -1073740768;
      KsepHistoryErrors[2 * v24] = 197597;
      if ( (KsepDebugFlag & 4) != 0 )
        RtlAssert("Count == StringsVectorSize", "minkernel\\ntos\\kshim\\ksemisc.c", 0x3DDu, 0LL);
    }
    *a3 = Paged;
    v20 = 0;
    *a4 = v14;
    return v20;
  }
  v19 = 0LL;
  while ( *(_WORD *)(a1 + 2 * v19) )
  {
    ++v4;
LABEL_18:
    v19 = v4;
    if ( v4 >= v18 )
      goto LABEL_19;
  }
  if ( (int)KsepStringDuplicate((__int64)Paged + 16 * v17, (_WORD *)(a1 + 2LL * v16)) >= 0 )
  {
    v16 = v4 + 1;
    ++v17;
    ++v4;
    goto LABEL_18;
  }
  v20 = -1073741801;
  if ( (_DWORD)v14 )
  {
    v23 = (__int64)Paged;
    do
    {
      KsepStringFree(v23);
      v23 += 16LL;
      --v14;
    }
    while ( v14 );
  }
  KsepPoolFreePaged(Paged);
  return v20;
}

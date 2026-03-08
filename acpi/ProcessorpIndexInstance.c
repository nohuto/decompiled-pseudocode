/*
 * XREFs of ProcessorpIndexInstance @ 0x1C009BA08
 * Callers:
 *     ProcessorAddInstance @ 0x1C009A7C4 (ProcessorAddInstance.c)
 * Callees:
 *     ProcessorpIsPreferredInterruptTarget @ 0x1C009BCB4 (ProcessorpIsPreferredInterruptTarget.c)
 */

__int64 __fastcall ProcessorpIndexInstance(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdi
  __int64 Pool2; // rax
  __int64 *v7; // rax
  int v8; // eax
  int v9; // esi
  __int64 v10; // r14
  __int64 i; // rbx
  __int64 v12; // rax
  __int64 *v13; // rax

  v2 = *(unsigned __int16 *)(a2 + 4);
  v5 = *(_QWORD *)(ProcessorGroupByNumber + 8 * v2);
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(256LL, 48LL, 1232102209LL);
    v5 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_WORD *)(Pool2 + 32) = v2;
    *(_DWORD *)(Pool2 + 36) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
    v7 = (__int64 *)qword_1C006E5F8;
    if ( *(__int64 **)qword_1C006E5F8 != &ProcessorGroupListHead )
      goto LABEL_22;
    *(_QWORD *)(v5 + 8) = qword_1C006E5F8;
    *(_QWORD *)v5 = &ProcessorGroupListHead;
    *v7 = v5;
    qword_1C006E5F8 = v5;
    *(_QWORD *)(ProcessorGroupByNumber + 8 * v2) = v5;
  }
  if ( *(_DWORD *)(a2 + 20) != 1 )
  {
    v8 = *(_DWORD *)(v5 + 36);
LABEL_9:
    if ( v8 == 3 )
      v9 = *(_DWORD *)(a2 + 16);
    else
      v9 = 0;
    goto LABEL_12;
  }
  v8 = 1;
  if ( *(_DWORD *)(v5 + 36) == 1 )
    goto LABEL_9;
  v9 = (a1 << 16) | 0xFFFF;
LABEL_12:
  v10 = v5 + 16;
  for ( i = *(_QWORD *)(v5 + 16); i != v10; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) == v9 )
      goto LABEL_19;
  }
  v12 = ExAllocatePool2(256LL, 48LL, 1232102209LL);
  i = v12;
  if ( !v12 )
    return 3221225626LL;
  *(_DWORD *)(v12 + 16) = v9;
  *(_DWORD *)(v12 + 40) = *(unsigned __int8 *)(a2 + 6);
  v13 = *(__int64 **)(v5 + 24);
  if ( *v13 != v10 )
LABEL_22:
    __fastfail(3u);
  *(_QWORD *)i = v10;
  *(_QWORD *)(i + 8) = v13;
  *v13 = i;
  *(_QWORD *)(v5 + 24) = i;
LABEL_19:
  *(_QWORD *)(i + 24) |= 1LL << *(_BYTE *)(a2 + 6);
  if ( (unsigned int)ProcessorpIsPreferredInterruptTarget(a1) )
  {
    *(_QWORD *)(i + 32) |= 1LL << *(_BYTE *)(a2 + 6);
    *(_BYTE *)(v5 + 40) = 1;
  }
  return 0LL;
}

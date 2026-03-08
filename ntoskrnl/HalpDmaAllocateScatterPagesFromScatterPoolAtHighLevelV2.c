/*
 * XREFs of HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV2 @ 0x140513A54
 * Callers:
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x1404FF094 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV2(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v4; // esi
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rbx
  __int64 v9; // r11
  __int64 v10; // rdi
  unsigned int v11; // r10d
  __int64 result; // rax

  v4 = *(_DWORD *)(a2 + 40);
  v6 = *(_QWORD *)(a2 + 32);
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  if ( !v4 )
    goto LABEL_15;
  do
  {
    if ( v11 >= a3 )
      break;
    if ( (*(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      if ( v8 )
        *(_QWORD *)(v10 + 8) = v6;
      else
        v8 = v6;
      ++v11;
      v10 = v6;
    }
    else
    {
      if ( v9 )
        *(_QWORD *)(v9 + 8) = v6;
      else
        *(_QWORD *)(a2 + 32) = v6;
      v9 = v6;
    }
    v6 = *(_QWORD *)(v6 + 8);
    ++v7;
  }
  while ( v7 < v4 );
  if ( v9 )
    *(_QWORD *)(v9 + 8) = v6;
  else
LABEL_15:
    *(_QWORD *)(a2 + 32) = v6;
  *(_DWORD *)(a2 + 40) -= v11;
  result = v8;
  *a4 = v11;
  return result;
}

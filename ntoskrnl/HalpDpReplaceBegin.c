/*
 * XREFs of HalpDpReplaceBegin @ 0x1409321C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HalpInterruptDpReplaceBegin @ 0x14051E4CC (HalpInterruptDpReplaceBegin.c)
 *     HalpDpSortApicList @ 0x1409323A8 (HalpDpSortApicList.c)
 *     HalpBuildResumeStructures @ 0x140A92E78 (HalpBuildResumeStructures.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDpReplaceBegin(__int64 a1, __int64 *a2)
{
  int v2; // ebx
  __int64 v5; // rbp
  __int64 v6; // rsi
  int v7; // ebx
  __int64 Pool2; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  void *v12; // rcx
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v14 = 0;
  v5 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 16LL);
  v6 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( (unsigned int)v5 < (unsigned int)v6 )
    return (unsigned int)-1073741811;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(4 * (v5 + 2 * v6 + 32)), 1131176264LL);
  v9 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)Pool2 = v6;
  *(_BYTE *)(Pool2 + 45) = (*(_DWORD *)a1 & 2) != 0;
  if ( (_DWORD)v6 )
  {
    *(_QWORD *)(Pool2 + 8) = Pool2 + 128;
    v10 = 4 * v6 + Pool2 + 128;
    *(_QWORD *)(Pool2 + 16) = v10;
    *(_QWORD *)(Pool2 + 24) = v10 + 4 * v5;
    memmove((void *)(Pool2 + 128), (const void *)(*(_QWORD *)(a1 + 8) + 20LL), 4 * v6);
    memmove(*(void **)(v9 + 16), (const void *)(*(_QWORD *)(a1 + 16) + 20LL), 4 * v5);
    HalpDpSortApicList(*(_QWORD *)(v9 + 8), (unsigned int)v6);
    HalpDpSortApicList(*(_QWORD *)(v9 + 16), (unsigned int)v5);
    if ( (*(_DWORD *)a1 & 1) != 0 )
      *(_BYTE *)(v9 + 44) = 1;
    v7 = HalpInterruptDpReplaceBegin(
           *(char **)(v9 + 8),
           *(_DWORD **)(v9 + 16),
           *(ULONG **)(v9 + 24),
           *(_DWORD *)v9,
           *(_BYTE *)(v9 + 44),
           *(_BYTE *)(v9 + 45),
           &v14);
    if ( v7 < 0 )
      goto LABEL_14;
    v2 = v14;
    *(_DWORD *)(v9 + 40) = v14;
  }
  if ( !*(_BYTE *)(v9 + 45) )
  {
LABEL_18:
    *a2 = v9;
    return 0;
  }
  if ( !(_DWORD)v6
    || (v11 = ExAllocatePool2(64LL, (unsigned int)(v2 * v6), 1131176264LL), (*(_QWORD *)(v9 + 32) = v11) != 0LL) )
  {
    HalpBuildResumeStructures();
    goto LABEL_18;
  }
  v7 = -1073741670;
LABEL_14:
  v12 = *(void **)(v9 + 32);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x436C6148u);
  ExFreePoolWithTag((PVOID)v9, 0x436C6148u);
  return (unsigned int)v7;
}

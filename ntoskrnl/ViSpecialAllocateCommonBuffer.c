/*
 * XREFs of ViSpecialAllocateCommonBuffer @ 0x140AC6E2C
 * Callers:
 *     VfAllocateCommonBuffer @ 0x140AC2050 (VfAllocateCommonBuffer.c)
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x1402E5000 (ExInterlockedInsertHeadList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     ViInitializePadding @ 0x140AC66E4 (ViInitializePadding.c)
 */

char *__fastcall ViSpecialAllocateCommonBuffer(
        __int64 (__fastcall *a1)(_QWORD, _QWORD, struct _LIST_ENTRY **, __int64),
        __int64 a2,
        struct _LIST_ENTRY *a3,
        unsigned int a4,
        _QWORD *a5,
        char a6)
{
  unsigned int v7; // r10d
  __int64 v10; // rdi
  struct _LIST_ENTRY *Pool2; // rsi
  __int64 v12; // r9
  int v14; // ebx
  int v15; // ebx
  unsigned int v16; // r14d
  char *v17; // rax
  char *v18; // rbx
  struct _LIST_ENTRY *v19; // [rsp+68h] [rbp+10h] BYREF

  v7 = *(_DWORD *)(a2 + 204) - *(_DWORD *)(a2 + 208);
  v19 = 0LL;
  v10 = a4;
  if ( v7 >= 0x20 || a4 > 0xFFFFDFFF )
    return 0LL;
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(64LL, 0x40uLL, 0x566C6148u);
  if ( !Pool2 )
  {
    VfUtilDbgPrint("Couldn't track common buffer allocation\n");
    return 0LL;
  }
  if ( (unsigned __int64)(v10 + 8) <= 0x1000 )
  {
    v14 = 4096;
LABEL_10:
    v15 = v14 - v10;
    goto LABEL_12;
  }
  if ( (v10 & 0xFFF) != 0 )
  {
    v14 = ((v10 + 8) & 0xFFFFF000) + ((((_WORD)v10 + 8) & 0xFFF) != 0LL ? 0x1000 : 0);
    goto LABEL_10;
  }
  v15 = 4096;
LABEL_12:
  LOBYTE(v12) = a6;
  v16 = v15 + v10 + 4096;
  v17 = (char *)a1(*(_QWORD *)(a2 + 40), v16, &v19, v12);
  if ( !v17 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
  WORD1(Pool2->Flink) = v15;
  v18 = v17 + 4096;
  LOWORD(Pool2->Flink) = 4096;
  Pool2[1].Blink = (struct _LIST_ENTRY *)(v17 + 4096);
  LODWORD(Pool2->Blink) = v10;
  HIDWORD(Pool2->Flink) = v16;
  Pool2[1].Flink = (struct _LIST_ENTRY *)v17;
  Pool2[2].Flink = v19;
  Pool2[2].Blink = a3;
  ViInitializePadding(v17, v16, (unsigned __int64)(v17 + 4096), v10);
  *a5 = v19 + 256;
  ExInterlockedInsertHeadList((PLIST_ENTRY)(a2 + 112), Pool2 + 3, (PKSPIN_LOCK)(a2 + 128));
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 204));
  return v18;
}

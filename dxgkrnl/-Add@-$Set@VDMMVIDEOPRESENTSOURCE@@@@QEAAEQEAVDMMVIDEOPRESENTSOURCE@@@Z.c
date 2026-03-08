/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C002130C
 * Callers:
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C021092C (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C002139C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDelete.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall Set<DMMVIDEOPRESENTSOURCE>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r11
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 == a1 + 24 || (v3 -= 8LL) == 0 )
  {
LABEL_7:
    if ( (unsigned __int8)DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::ContainsByReference(
                            a1 + 8,
                            a2,
                            v3) )
    {
      WdLogSingleEntry1(1LL, 108LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v10,
          v9,
          v11,
          0,
          2,
          -1,
          (__int64)L"bInsertTailStatus == TRUE",
          108LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    else
    {
      v6 = *(_QWORD **)(v5 + 24);
      v7 = (_QWORD *)(a2 + 8);
      if ( *v6 != v5 + 16 )
        __fastfail(3u);
      *v7 = v5 + 16;
      *(_QWORD *)(a2 + 16) = v6;
      *v6 = v7;
      *(_QWORD *)(v5 + 24) = v7;
      ++*(_QWORD *)(v5 + 32);
    }
    return 1;
  }
  else
  {
    while ( v3 != a2 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      v3 = v4 - 8;
      if ( v4 == a1 + 24 )
        v3 = 0LL;
      if ( !v3 )
        goto LABEL_7;
    }
    return 0;
  }
}

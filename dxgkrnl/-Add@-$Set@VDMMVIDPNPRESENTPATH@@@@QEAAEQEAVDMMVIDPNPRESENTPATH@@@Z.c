/*
 * XREFs of ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0006854
 * Callers:
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0184854 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C00068C4 (-FindByValue@-$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAEQEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0006920 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U-$DoubleLinkedListElementDeleter@.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall Set<DMMVIDPNPRESENTPATH>::Add(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  if ( Set<DMMVIDPNPRESENTPATH>::FindByValue() )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::ContainsByReference(
                          a1 + 8,
                          a2) )
  {
    WdLogSingleEntry1(1LL, 108LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v8,
        v7,
        v9,
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
    v4 = *(_QWORD **)(a1 + 32);
    v5 = (_QWORD *)(a2 + 8);
    if ( *v4 != a1 + 24 )
      __fastfail(3u);
    *v5 = a1 + 24;
    *(_QWORD *)(a2 + 16) = v4;
    *v4 = v5;
    *(_QWORD *)(a1 + 32) = v5;
    ++*(_QWORD *)(a1 + 40);
  }
  return 1;
}

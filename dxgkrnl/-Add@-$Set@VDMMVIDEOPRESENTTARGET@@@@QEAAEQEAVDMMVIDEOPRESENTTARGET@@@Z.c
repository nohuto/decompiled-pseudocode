/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0020878
 * Callers:
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C020D5F0 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00208DC (-FindByValue@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C002091C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall Set<DMMVIDEOPRESENTTARGET>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  __int64 v4; // r11
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  if ( Set<DMMVIDEOPRESENTTARGET>::FindByValue() )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
                          v3 + 8,
                          a2) )
  {
    WdLogSingleEntry1(1LL, 108LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v9,
        v8,
        v10,
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
    v5 = *(_QWORD **)(v4 + 32);
    v6 = (_QWORD *)(a2 + 8);
    if ( *v5 != v4 + 24 )
      __fastfail(3u);
    *v6 = v4 + 24;
    *(_QWORD *)(a2 + 16) = v5;
    *v5 = v6;
    *(_QWORD *)(v4 + 32) = v6;
    ++*(_QWORD *)(v4 + 40);
  }
  return 1;
}

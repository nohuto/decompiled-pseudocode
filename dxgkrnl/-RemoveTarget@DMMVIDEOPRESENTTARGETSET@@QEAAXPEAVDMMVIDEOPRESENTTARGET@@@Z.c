/*
 * XREFs of ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0069660
 * Callers:
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AE888 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindByValue@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00208DC (-FindByValue@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C002091C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 */

void __fastcall DMMVIDEOPRESENTTARGETSET::RemoveTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        struct DMMVIDEOPRESENTTARGET *a2)
{
  __int64 v4; // rax
  __int64 v5; // r11
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  DMMVIDEOPRESENTTARGETSET **v9; // rdx
  DMMVIDEOPRESENTTARGETSET *v10; // rax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = Set<DMMVIDEOPRESENTTARGET>::FindByValue((__int64)this, (__int64)a2);
  if ( DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
         (__int64)this + 8,
         v4) )
  {
    v6 = (_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v7 + 8) != v5 + 8 || (v8 = *(_QWORD **)(v5 + 16), (_QWORD *)*v8 != v6) )
LABEL_8:
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    --*((_QWORD *)this + 5);
  }
  *((_BYTE *)a2 + 420) = 1;
  v9 = (DMMVIDEOPRESENTTARGETSET **)*((_QWORD *)this + 15);
  v10 = (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 512);
  if ( *v9 != (DMMVIDEOPRESENTTARGETSET *)((char *)this + 112) )
    goto LABEL_8;
  *(_QWORD *)v10 = (char *)this + 112;
  *((_QWORD *)a2 + 65) = v9;
  *v9 = v10;
  *((_QWORD *)this + 15) = v10;
  ReferenceCounted::Release((struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 64));
}

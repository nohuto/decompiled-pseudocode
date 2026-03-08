/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00026BC
 * Callers:
 *     ?ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C016C150 (-ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C002384C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::ReleaseModeSet(DMMVIDPNSOURCE *this, struct DMMVIDPNSOURCEMODESET *a2)
{
  DMMVIDPNSOURCE *v4; // rdx
  __int64 v6; // r11
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = (DMMVIDPNSOURCE *)*((_QWORD *)a2 + 14);
  if ( v4 == this )
  {
    if ( a2 == *((struct DMMVIDPNSOURCEMODESET **)this + 15) )
    {
      WdLogSingleEntry2(7LL, a2, *((unsigned int *)this + 6));
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)this + 15, 0LL);
      if ( *((_DWORD *)a2 + 24) != 1 )
        WdLogSingleEntry0(1LL);
    }
    if ( *((_DWORD *)a2 + 24) == 1
      && (unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
                            *((_QWORD *)this + 14),
                            a2) )
    {
      v7 = (_QWORD *)((char *)a2 + 8);
      v8 = *((_QWORD *)a2 + 1);
      if ( *(struct DMMVIDPNSOURCEMODESET **)(v8 + 8) != (struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 8)
        || (v9 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v9 != v7) )
      {
        __fastfail(3u);
      }
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      *v7 = 0LL;
      *((_QWORD *)a2 + 2) = 0LL;
      --*(_QWORD *)(v6 + 32);
    }
    ReferenceCounted::Release((struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 88));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, v4, a2, this);
    return 3223192368LL;
  }
}

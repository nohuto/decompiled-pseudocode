/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C001A12C
 * Callers:
 *     ?ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0165EE0 (-ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C001A1D0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::ReleaseModeSet(DMMVIDPNSOURCE *this, struct DMMVIDPNSOURCEMODESET *a2)
{
  struct DMMVIDPNSOURCEMODESET *v2; // rbx
  __int64 v5; // r11
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax

  v2 = a2;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((DMMVIDPNSOURCE **)v2 + 14) == this )
  {
    if ( v2 == *((struct DMMVIDPNSOURCEMODESET **)this + 15) )
    {
      v10 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v10 + 24) = v2;
      *(_QWORD *)(v10 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v10);
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)this + 15, 0LL);
      if ( *((_DWORD *)v2 + 24) != 1 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v11, a2);
        WdLogEvent5_WdAssertion(v12);
      }
    }
    if ( *((_DWORD *)v2 + 24) == 1
      && (unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
                            *((_QWORD *)this + 14),
                            v2) )
    {
      v6 = (_QWORD *)((char *)v2 + 8);
      v7 = *((_QWORD *)v2 + 1);
      if ( *(struct DMMVIDPNSOURCEMODESET **)(v7 + 8) != (struct DMMVIDPNSOURCEMODESET *)((char *)v2 + 8)
        || (a2 = (struct DMMVIDPNSOURCEMODESET *)*((_QWORD *)v2 + 2), *(_QWORD **)a2 != v6) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)a2 = v7;
      *(_QWORD *)(v7 + 8) = a2;
      *v6 = 0LL;
      *((_QWORD *)v2 + 2) = 0LL;
      --*(_QWORD *)(v5 + 32);
    }
    ReferenceCounted::Release((struct DMMVIDPNSOURCEMODESET *)((char *)v2 + 88), (__int64)a2);
    return 0LL;
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v9[3] = *((_QWORD *)v2 + 14);
    v9[4] = v2;
    v9[5] = this;
    WdLogEvent5_WdError(v9);
    return 3223192368LL;
  }
}

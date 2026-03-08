/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00024B8
 * Callers:
 *     ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C016C460 (-AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNS.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C002384C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0069E0C (-FindByValue@-$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01833DC (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::SetCofuncModeSet(
        struct DMMVIDPNSOURCEMODESET **this,
        struct DMMVIDPNSOURCEMODESET **a2)
{
  char *v4; // rbp
  _QWORD *v5; // rsi
  struct DMMVIDPNSOURCEMODESET *v7; // r11
  __int64 v8; // rdi
  __int64 v9; // r11
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rax

  if ( a2[6] == (struct DMMVIDPNSOURCEMODESET *)(a2 + 6) )
  {
    v12 = -1071774968;
LABEL_11:
    WdLogSingleEntry2(2LL, a2, *((unsigned int *)this + 6));
    return v12;
  }
  v4 = (char *)(this + 15);
  if ( a2 != (struct DMMVIDPNSOURCEMODESET **)this[15] )
  {
    v12 = -1071774928;
    goto LABEL_11;
  }
  v5 = this + 13;
  if ( *((_QWORD *)this[13] + 18) )
  {
    v13 = Set<DMMVIDPNSOURCEMODE>::FindByValue(a2 + 3);
    if ( !v13 )
    {
      WdLogSingleEntry0(2LL);
      return 3223192338LL;
    }
    DMMVIDPNSOURCEMODESET::PinMode((DMMVIDPNSOURCEMODESET *)a2, *(_DWORD *)(v13 + 24));
  }
  *(_BYTE *)(*v5 + 136LL) = 0;
  if ( (unsigned __int64)*(int *)(*v5 + 96LL) > 1 )
  {
    v7 = this[14];
    v8 = *v5;
    if ( !(unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
                             v7,
                             *v5) )
    {
      v10 = *(_QWORD **)(v9 + 24);
      v11 = (_QWORD *)(v8 + 8);
      if ( *v10 != v9 + 16 )
        __fastfail(3u);
      *v11 = v9 + 16;
      *(_QWORD *)(v8 + 16) = v10;
      *v10 = v11;
      *(_QWORD *)(v9 + 24) = v11;
      ++*(_QWORD *)(v9 + 32);
    }
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(v5, a2);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(v4, 0LL);
  return 0LL;
}

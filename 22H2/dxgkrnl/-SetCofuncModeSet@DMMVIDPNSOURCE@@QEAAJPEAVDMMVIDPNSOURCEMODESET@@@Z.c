/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A6BC
 * Callers:
 *     ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0141EE0 (-AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNS.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C001A1D0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C005D4AC (-FindByValue@-$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C012F420 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::SetCofuncModeSet(
        struct DMMVIDPNSOURCEMODESET **this,
        struct DMMVIDPNSOURCEMODESET **a2)
{
  struct DMMVIDPNSOURCEMODESET **v4; // rsi
  struct DMMVIDPNSOURCEMODESET *v5; // rax
  struct DMMVIDPNSOURCEMODESET *v7; // r14
  __int64 v8; // r11
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax

  if ( a2[6] == (struct DMMVIDPNSOURCEMODESET *)(a2 + 6) )
  {
    v11 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v11);
    return 3223192328LL;
  }
  if ( a2 != (struct DMMVIDPNSOURCEMODESET **)this[15] )
  {
    v12 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v12);
    return 3223192368LL;
  }
  v4 = this + 13;
  v5 = this[13];
  if ( *((_QWORD *)v5 + 18) )
  {
    v13 = Set<DMMVIDPNSOURCEMODE>::FindByValue(a2 + 3);
    if ( !v13 )
    {
      v16 = WdLogNewEntry5_WdError(v15, v14);
      WdLogEvent5_WdError(v16);
      return 3223192338LL;
    }
    DMMVIDPNSOURCEMODESET::PinMode((DMMVIDPNSOURCEMODESET *)a2, *(_DWORD *)(v13 + 24));
    v5 = *v4;
  }
  *((_BYTE *)v5 + 136) = 0;
  if ( (unsigned __int64)*((int *)*v4 + 24) > 1 )
  {
    v7 = *v4;
    if ( !(unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
                             this[14],
                             *v4) )
    {
      v9 = *(_QWORD **)(v8 + 24);
      v10 = (_QWORD *)((char *)v7 + 8);
      if ( *v9 != v8 + 16 )
        __fastfail(3u);
      *v10 = v8 + 16;
      *((_QWORD *)v7 + 2) = v9;
      *v9 = v10;
      *(_QWORD *)(v8 + 24) = v10;
      ++*(_QWORD *)(v8 + 32);
    }
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(v4, a2);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(this + 15, 0LL);
  return 0LL;
}

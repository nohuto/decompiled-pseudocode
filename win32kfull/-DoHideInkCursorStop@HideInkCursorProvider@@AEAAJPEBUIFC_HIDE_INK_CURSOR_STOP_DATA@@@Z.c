__int64 __fastcall HideInkCursorProvider::DoHideInkCursorStop(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_STOP_DATA *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  const char *v8; // [rsp+50h] [rbp-18h] BYREF
  int v9; // [rsp+70h] [rbp+8h] BYREF
  const struct IFC_HIDE_INK_CURSOR_STOP_DATA *v10; // [rsp+78h] [rbp+10h] BYREF
  HideInkCursorProvider *v11; // [rsp+80h] [rbp+18h] BYREF
  void *v12; // [rsp+88h] [rbp+20h] BYREF

  v10 = a2;
  if ( (*((_DWORD *)this + 14))-- == 1 )
    Feedback::ForceHidePenCursor(0LL);
  if ( (unsigned int)dword_1C03570E0 > 4 )
  {
    v6 = *((_DWORD *)this + 14);
    v9 = 0;
    LODWORD(v10) = v6;
    v12 = (void *)*((_QWORD *)this + 6);
    v8 = "Removed hide cursor request";
    v11 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)this,
      byte_1C031F57A,
      a3,
      a4,
      (__int64)&v9,
      (void **)&v8,
      &v12,
      (__int64)&v11,
      (__int64)&v10);
  }
  return 0LL;
}

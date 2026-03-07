void __fastcall COverlayContext::DisableHardwareCursor(COverlayContext *this)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // ebp
  struct _LUID *v6; // rax
  CCursorState *v7; // rcx
  CResource *v8; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 1379) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
    v3 = v2;
    if ( v2 )
    {
      v4 = *((_QWORD *)this + 1379);
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
      v6 = (struct _LUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 48LL))(v3, &v9);
      v7 = *(CCursorState **)(v4 + 720);
      if ( v7 )
        CCursorState::DisableHardwareCursor(v7, *v6, v5);
    }
    v8 = (CResource *)*((_QWORD *)this + 1379);
    *((_QWORD *)this + 1379) = 0LL;
    if ( v8 )
      CResource::InternalRelease(v8);
  }
}

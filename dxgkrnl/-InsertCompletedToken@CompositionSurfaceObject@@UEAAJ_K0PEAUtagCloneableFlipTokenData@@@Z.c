__int64 __fastcall CompositionSurfaceObject::InsertCompletedToken(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct tagCloneableFlipTokenData *a4)
{
  int inserted; // ebx
  __int64 v9; // rdi
  struct CToken *v10; // rsi
  struct CToken *v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v12 = 0LL;
  inserted = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 16));
  if ( inserted >= 0 )
  {
    inserted = CCompositionSurface::InsertCompletedToken(
                 (CompositionSurfaceObject *)((char *)this + 8),
                 a2,
                 a3,
                 a4,
                 &v12);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 16));
    if ( inserted >= 0 )
    {
      v13 = 0LL;
      inserted = DxgkGetSessionTokenManager(&v13);
      if ( inserted >= 0 )
      {
        v9 = v13;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        v10 = v12;
        inserted = (*(__int64 (__fastcall **)(__int64, struct CToken *))(*(_QWORD *)v9 + 192LL))(v9, v12);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
        if ( inserted < 0 && v10 )
          (**(void (__fastcall ***)(struct CToken *, __int64))v10)(v10, 1LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  return (unsigned int)inserted;
}

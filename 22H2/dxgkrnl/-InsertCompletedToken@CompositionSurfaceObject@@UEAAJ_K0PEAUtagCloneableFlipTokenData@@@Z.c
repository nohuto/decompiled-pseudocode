/*
 * XREFs of ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0065F20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C000ED40 (DxgkGetSessionTokenManager.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000FAAC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00118B4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@@@Z @ 0x1C0066278 (-InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@.c)
 */

__int64 __fastcall CompositionSurfaceObject::InsertCompletedToken(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct tagCloneableFlipTokenData *a4)
{
  int inserted; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdi
  struct CToken *v11; // rsi
  struct CToken *v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0LL;
  inserted = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 16));
  if ( inserted >= 0 )
  {
    inserted = CCompositionSurface::InsertCompletedToken(
                 (CompositionSurfaceObject *)((char *)this + 8),
                 a2,
                 a3,
                 a4,
                 &v13);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 16));
    if ( inserted >= 0 )
    {
      v14 = 0LL;
      inserted = DxgkGetSessionTokenManager(&v14, v9);
      if ( inserted >= 0 )
      {
        v10 = v14;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v11 = v13;
        inserted = (*(__int64 (__fastcall **)(__int64, struct CToken *))(*(_QWORD *)v10 + 184LL))(v10, v13);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
        if ( inserted < 0 && v11 )
          (**(void (__fastcall ***)(struct CToken *, __int64))v11)(v11, 1LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  return (unsigned int)inserted;
}

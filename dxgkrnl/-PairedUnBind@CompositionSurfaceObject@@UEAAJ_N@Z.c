/*
 * XREFs of ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x1C007B830
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C000DB30 (DxgkGetSessionTokenManager.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::PairedUnBind(CompositionSurfaceObject *this, char a2)
{
  __int64 v4; // rdx
  int v5; // edi
  int SessionTokenManager; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 16));
  if ( v5 >= 0 )
  {
    LOBYTE(v4) = a2;
    v5 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8, v4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 16));
    if ( v5 >= 0 && !a2 )
    {
      v9 = 0LL;
      SessionTokenManager = DxgkGetSessionTokenManager(&v9);
      v7 = v9;
      v5 = SessionTokenManager;
      if ( SessionTokenManager >= 0 )
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 80LL))(v9, (char *)this - 32);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return (unsigned int)v5;
}

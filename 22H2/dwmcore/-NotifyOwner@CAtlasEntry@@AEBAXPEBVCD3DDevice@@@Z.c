/*
 * XREFs of ?NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDevice@@@Z @ 0x18024B6F8
 * Callers:
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x18024C2C4 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x18024C62C (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasEntry::NotifyOwner(CAtlasEntry *this, const struct CD3DDevice *a2)
{
  void (__fastcall ***v3)(_QWORD, const struct CD3DDevice *); // rcx
  void (__fastcall **v4)(_QWORD, const struct CD3DDevice *); // r8

  v3 = (void (__fastcall ***)(_QWORD, const struct CD3DDevice *))*((_QWORD *)this + 1);
  if ( v3 )
  {
    v4 = *v3;
    if ( *(_QWORD *)this )
      (*v4)(v3, a2);
    else
      v4[1](v3, a2);
  }
}

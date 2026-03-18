/*
 * XREFs of ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C00AC3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0013F54 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedSystemResource::Delete(
        DirectComposition::CConnection **this,
        struct _WIN32_DELETEMETHOD_PARAMETERS *a2)
{
  unsigned int v3; // edx
  DirectComposition::CConnection *v4; // rcx

  (*((void (__fastcall **)(DirectComposition::CConnection **, struct _WIN32_DELETEMETHOD_PARAMETERS *))*this + 1))(
    this,
    a2);
  v4 = this[2];
  if ( v4 )
  {
    if ( *((_DWORD *)this + 6) )
    {
      DirectComposition::CConnection::ReleaseSystemResource((__int64)v4, *((_DWORD *)this + 6));
      v4 = this[2];
    }
    DirectComposition::CConnection::Release(v4, v3);
    this[2] = 0LL;
  }
  return 0LL;
}

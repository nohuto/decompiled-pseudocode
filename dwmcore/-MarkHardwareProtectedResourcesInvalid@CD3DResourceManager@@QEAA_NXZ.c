/*
 * XREFs of ?MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ @ 0x180299B68
 * Callers:
 *     ?ClearProtectedResources@CD3DDevice@@QEAA_NXZ @ 0x1802893DC (-ClearProtectedResources@CD3DDevice@@QEAA_NXZ.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800F0480 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CD3DResourceManager::MarkHardwareProtectedResourcesInvalid(CD3DResourceManager *this)
{
  char *v1; // rsi
  char *v3; // rbx
  char v4; // bp
  struct CD3DResource *v5; // rdi

  v1 = (char *)this + 32;
  v3 = (char *)*((_QWORD *)this + 4);
  v4 = 0;
  while ( v3 != v1 )
  {
    v5 = (struct CD3DResource *)(v3 - 32);
    v3 = *(char **)v3;
    if ( *((_QWORD *)v5 + 3)
      && ((*(unsigned __int8 (__fastcall **)(struct CD3DResource *))(*(_QWORD *)v5 + 24LL))(v5) || *((_BYTE *)v5 + 69)) )
    {
      CD3DResourceManager::DestroyResource(this, v5);
      v4 = 1;
    }
  }
  return v4;
}

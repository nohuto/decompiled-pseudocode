/*
 * XREFs of ??4DDisplayPrimaryBufferResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x18028F2D4
 * Callers:
 *     ?CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@IPEAUDDisplayPrimaryBufferResources@@@Z @ 0x1802909A4 (-CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTarget.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall DDisplayPrimaryBufferResources::operator=(void **a1, __int64 *a2)
{
  void *v2; // rax
  void *v5; // rcx
  void **v6; // rsi
  void *v7; // rax
  void *v8; // rcx

  v2 = (void *)*a2;
  *a2 = 0LL;
  v5 = *a1;
  *a1 = v2;
  if ( v5 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = (void **)(a2 + 1);
  if ( a1 + 1 != (void **)(a2 + 1) )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      a1 + 1,
      *v6);
    *v6 = 0LL;
  }
  v7 = (void *)a2[2];
  a2[2] = 0LL;
  v8 = a1[2];
  a1[2] = v7;
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  *((_BYTE *)a1 + 24) = *((_BYTE *)a2 + 24);
  return a1;
}

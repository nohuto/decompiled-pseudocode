/*
 * XREFs of ??4DDisplayTargetResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x18028F378
 * Callers:
 *     ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@2@AEAUDDisplayTaskPoolResources@@AEAUDDisplayTargetResources@@AEAV?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18028E800 (--0CDDisplaySwapChain@@IEAA@AEAV-$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Win.c)
 *     ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x180291B70 (-GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?attach@?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x18020114C (-attach@-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x180201184 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

__int64 __fastcall DDisplayTargetResources::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx

  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::attach((__int64 *)a1, v4);
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v5;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v8 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v7;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  v10 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v9;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  v12 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v11;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
    (__int64 *)(a1 + 40),
    v13);
  v14 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  v15 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v14;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 56) = 0LL;
  v17 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v16;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 64) = 0LL;
  v19 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v18;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v20 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = 0LL;
  v21 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v20;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
  return a1;
}

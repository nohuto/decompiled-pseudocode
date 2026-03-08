/*
 * XREFs of ?ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AA6A0
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802AA1A4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAUIHolographicDisplayInfo@@$0A@@@QEAAHAEBQEAUIHolographicDisplayInfo@@@Z @ 0x1802AAD24 (-Remove@-$DynArray@PEAUIHolographicDisplayInfo@@$0A@@@QEAAHAEBQEAUIHolographicDisplayInfo@@@Z.c)
 */

void __fastcall CHolographicClient::ProcessRemoveDisplay(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_5e01b98c_b7d8_4f41_8bf2_9dc251835cd5,
         &v3) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 96LL))(*((_QWORD *)this + 3), v3);
    if ( (unsigned int)DynArray<IHolographicDisplayInfo *,0>::Remove((char *)this + 128, &v3) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}

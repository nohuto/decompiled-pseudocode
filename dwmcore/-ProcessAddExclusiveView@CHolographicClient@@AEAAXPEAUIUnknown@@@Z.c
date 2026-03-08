/*
 * XREFs of ?ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802A9D34
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802AA1A4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddExclusiveView(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // r8d
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_92c14223_53b5_489b_b195_4227022eda18,
         &v8) >= 0 )
  {
    v4 = *((_DWORD *)this + 24);
    v5 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024362, 0xB5u, 0LL);
      goto LABEL_8;
    }
    if ( v5 <= *((_DWORD *)this + 23) )
    {
      *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * v4) = v8;
      *((_DWORD *)this + 24) = v5;
      return;
    }
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 72, 8, 1, &v8);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC0u, 0LL);
LABEL_8:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
}

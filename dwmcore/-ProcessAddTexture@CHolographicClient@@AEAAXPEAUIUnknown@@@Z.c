/*
 * XREFs of ?ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802A9E0C
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802AA1A4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddTexture(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873,
         &v9) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v9);
    v4 = *((_DWORD *)this + 16);
    v5 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v5 <= *((_DWORD *)this + 15) )
      {
        *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v4) = v9;
        *((_DWORD *)this + 16) = v5;
LABEL_5:
        v6 = 0LL;
        v9 = 0LL;
        goto LABEL_10;
      }
      v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8, 1, &v9);
      if ( v7 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC0u, 0LL);
    }
    v6 = v9;
LABEL_10:
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}

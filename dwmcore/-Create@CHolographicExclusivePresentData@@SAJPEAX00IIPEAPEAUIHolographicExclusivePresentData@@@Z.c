/*
 * XREFs of ?Create@CHolographicExclusivePresentData@@SAJPEAX00IIPEAPEAUIHolographicExclusivePresentData@@@Z @ 0x1802ABBA8
 * Callers:
 *     ?ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA@@@Z @ 0x1802A5540 (-ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHI.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicExclusivePresentData::Create(
        void *a1,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct IHolographicExclusivePresentData **a6)
{
  unsigned int v7; // edi
  struct IHolographicExclusivePresentData *v11; // rax
  __int64 v12; // rcx
  struct IHolographicExclusivePresentData *v13; // rbx

  v7 = 0;
  v11 = (struct IHolographicExclusivePresentData *)operator new(0x38uLL);
  v13 = v11;
  if ( v11 )
  {
    *((_DWORD *)v11 + 4) = 0;
    *(_QWORD *)v11 = &CHolographicExclusivePresentData::`vftable'{for `IHolographicExclusivePresentData'};
    *((_QWORD *)v11 + 1) = &CHolographicExclusivePresentData::`vftable'{for `CMILCOMBaseT<IUnknown>'};
    *((_DWORD *)v11 + 6) = a5;
    *((_DWORD *)v11 + 7) = a4;
    *((_QWORD *)v11 + 4) = a3;
    *((_QWORD *)v11 + 5) = a1;
    *((_QWORD *)v11 + 6) = a2;
    (*(void (__fastcall **)(struct IHolographicExclusivePresentData *))(*(_QWORD *)v11 + 8LL))(v11);
    *a6 = v13;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x12u, 0LL);
  }
  return v7;
}

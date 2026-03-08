/*
 * XREFs of ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z @ 0x1800F7FC8
 * Callers:
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x1800F7E20 (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x18022721C (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18022796C (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::SetMask(
        CDropShadow::ShadowIntermediates *this,
        struct CDropShadow *a2,
        struct CBrush *a3)
{
  struct CResource *v5; // rdx
  unsigned int v7; // ebx
  CResource *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx

  v5 = (struct CResource *)*((_QWORD *)this + 6);
  if ( a3 != v5 )
  {
    v9 = (CResource *)*((_QWORD *)this + 5);
    if ( v9 )
    {
      CResource::UnRegisterNotifierInternal(v9, v5);
      *((_QWORD *)this + 6) = 0LL;
    }
    v10 = CResource::RegisterNotifier(a2, a3);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x2AFu, 0LL);
      return v7;
    }
    *((_QWORD *)this + 6) = a3;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)this + 7);
  }
  *((_QWORD *)this + 5) = a2;
  return 0;
}

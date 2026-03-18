/*
 * XREFs of ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x1801327A4
 * Callers:
 *     ?CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z @ 0x1802294D8 (-CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z.c)
 *     ?OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18022A7D4 (-OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18022AA9C (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CDropShadow::ShadowIntermediates::IsRectangularShadow(CDropShadow::ShadowIntermediates *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 6);
  v2 = 0;
  if ( !v1 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 56LL))(v1, 22LL) )
    return 1;
  return v2;
}

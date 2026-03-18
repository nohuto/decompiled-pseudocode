/*
 * XREFs of ?OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18022A7D4
 * Callers:
 *     ?NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180100730 (-NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E9DB4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x1801327A4 (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 */

void __fastcall CDropShadow::ShadowIntermediates::OnChanged(__int64 *a1, __int64 a2, __int64 a3)
{
  if ( a1[6]
    && a3 == a1[6]
    && !CDropShadow::ShadowIntermediates::IsRectangularShadow((CDropShadow::ShadowIntermediates *)a1) )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(a1 + 7);
  }
}

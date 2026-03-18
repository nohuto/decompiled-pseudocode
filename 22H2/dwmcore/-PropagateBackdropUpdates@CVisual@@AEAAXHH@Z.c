/*
 * XREFs of ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180098784
 * Callers:
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z @ 0x18004AC44 (-UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z.c)
 *     ?UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x18004ACD4 (-UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800986EC (-RemoveChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z @ 0x1800E8B1C (-UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::PropagateBackdropUpdates(CVisual *this, int a2, int a3)
{
  CVisual *v3; // rax

  if ( a2 || a3 )
  {
    v3 = this;
    do
    {
      *((_DWORD *)this + 66) += a2;
      *((_DWORD *)this + 67) += a3;
      this = (CVisual *)*((_QWORD *)this + 11);
      if ( v3 )
      {
        v3 = (CVisual *)*((_QWORD *)v3 + 11);
        if ( v3 )
          v3 = (CVisual *)*((_QWORD *)v3 + 11);
      }
    }
    while ( this != v3 );
  }
}

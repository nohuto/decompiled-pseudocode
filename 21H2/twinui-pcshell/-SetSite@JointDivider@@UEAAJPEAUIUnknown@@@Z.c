/*
 * XREFs of ?SetSite@JointDivider@@UEAAJPEAUIUnknown@@@Z @ 0x180486BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall JointDivider::SetSite(JointDivider *this, struct IUnknown *a2)
{
  if ( !a2 && *((_QWORD *)this + 2) )
  {
    DestroyWindow(*((HWND *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a2);
  return 0LL;
}

/*
 * XREFs of ?SetSite@CWRLObjectWithSite@@UEAAJPEAUIUnknown@@@Z @ 0x1801CBBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall CWRLObjectWithSite::SetSite(CWRLObjectWithSite *this, struct IUnknown *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a2);
  return 0LL;
}

/*
 * XREFs of ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x180034BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDevice@CRenderTargetBitmap@@UEBAPEAVCD3DDevice@@XZ @ 0x180034C44 (-GetDevice@CRenderTargetBitmap@@UEBAPEAVCD3DDevice@@XZ.c)
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x180035480 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003550C (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 */

void __fastcall CScratchRenderTargetBitmap::FinalRelease(CScratchRenderTargetBitmap *this)
{
  CRenderTargetBitmap *v2; // rdi
  struct CD3DDevice *Device; // rax

  if ( *((_BYTE *)this + 176) )
  {
    v2 = (CScratchRenderTargetBitmap *)((char *)this + 192);
    if ( (int)CRenderTargetBitmap::IsValid((CScratchRenderTargetBitmap *)((char *)this + 192)) >= 0 )
    {
      Device = CRenderTargetBitmap::GetDevice(v2);
      CRenderTargetBitmapCache::ReturnRenderTargetBitmap((struct CD3DDevice *)((char *)Device + 464), this);
    }
  }
}

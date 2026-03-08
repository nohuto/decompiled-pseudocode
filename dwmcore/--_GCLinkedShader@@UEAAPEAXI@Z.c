/*
 * XREFs of ??_GCLinkedShader@@UEAAPEAXI@Z @ 0x1800201A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAA@XZ @ 0x180020210 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CLinkedShader *__fastcall CLinkedShader::`scalar deleting destructor'(CLinkedShader *this, char a2)
{
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::~CDeviceResourceTable<CD3DPixelShader,CLinkedShader>((CLinkedShader *)((char *)this + 32));
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 16);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x58uLL);
  return this;
}

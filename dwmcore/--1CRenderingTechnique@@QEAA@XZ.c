void __fastcall CRenderingTechnique::~CRenderingTechnique(CRenderingTechnique *this)
{
  CRenderingTechniqueFragment *v2; // rbx

  wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((char *)this + 272);
  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>((char *)this + 16);
  v2 = (CRenderingTechniqueFragment *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v2);
    operator delete(v2, 0x80uLL);
  }
}

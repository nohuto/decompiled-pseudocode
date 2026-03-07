void __fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(struct D3DKMT_GETPATHSMODALITY **this, __int64 a2)
{
  struct D3DKMT_GETPATHSMODALITY *v3; // rcx

  *this = (struct D3DKMT_GETPATHSMODALITY *)&off_1C0281C58;
  FreePathsModality(this[6], a2);
  v3 = this[7];
  if ( v3 )
    ObfDereferenceObject(v3);
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)this);
}

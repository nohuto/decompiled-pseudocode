char __fastcall DXGPROCESS::IsVmProcessOrVmValidation(DXGPROCESS *this, struct DXGADAPTER *a2)
{
  struct DXGGLOBAL *Global; // rax
  char v4; // bl

  if ( (*((_DWORD *)this + 106) & 0x100) != 0 )
    return 1;
  Global = DXGGLOBAL::GetGlobal();
  v4 = 0;
  if ( *((_BYTE *)Global + 1691) )
  {
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1684), a2) )
      return 1;
  }
  return v4;
}

__int64 __fastcall CLegacyRotationMgr::GetDockedOrientationValue(CLegacyRotationMgr *this, unsigned int *a2)
{
  if ( !*((_DWORD *)this + 2) )
  {
    dword_1C035D600 = 0;
    dword_1C035D604 = dword_1C035D5E8 != 0 ? 3 : 0;
    if ( (int)CLegacyRotationMgr::QueryDockedOrientationRegistrySetting(this, &dword_1C035D600, &dword_1C035D604) >= 0 )
    {
      if ( dword_1C035D604 > 3 )
        dword_1C035D604 = dword_1C035D5E8 != 0 ? 3 : 0;
      *((_DWORD *)this + 2) = 1;
    }
  }
  return dword_1C035D604;
}

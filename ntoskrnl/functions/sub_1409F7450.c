__int64 __fastcall sub_1409F7450(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int a4, _DWORD *a5, _BYTE *a6)
{
  unsigned int v9; // ecx
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 0;
  ExpGetLicenseTamperState(a1, v11);
  if ( v11[0] )
  {
    *a6 = 1;
    return (unsigned int)sub_1409F6ABC(a2, a3, a4, a5, 0);
  }
  else
  {
    v9 = -1073741772;
    *a6 = 0;
  }
  return v9;
}

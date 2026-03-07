CCD_BTL *__fastcall CCD_BTL::CCD_BTL(CCD_BTL *this)
{
  bool v2; // bl
  __int64 v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+38h] [rbp-11h]
  const WCHAR *v6; // [rsp+40h] [rbp-9h]
  int *v7; // [rsp+48h] [rbp-1h]
  int v8; // [rsp+50h] [rbp+7h]
  int *v9; // [rsp+58h] [rbp+Fh]
  int v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+70h] [rbp+27h]
  __int128 v13; // [rsp+78h] [rbp+2Fh]
  __int128 v14; // [rsp+88h] [rbp+3Fh]
  __int64 v15; // [rsp+98h] [rbp+4Fh]
  int v16; // [rsp+B0h] [rbp+67h] BYREF
  int v17; // [rsp+B8h] [rbp+6Fh] BYREF

  *(_QWORD *)this = &CCD_BTL_FULL::`vftable';
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_BTL *)((char *)this + 8), 8u, 0);
  v2 = 0;
  v5 = 288;
  v16 = 0;
  v17 = 0;
  *((_OWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 32) = 0;
  v4 = 0LL;
  *((_QWORD *)this + 18) = (char *)this + 136;
  *((_QWORD *)this + 17) = (char *)this + 136;
  *((_BYTE *)this + 152) = 0;
  v6 = L"UnsupportedMonitorModesAllowed";
  v8 = 67108868;
  v7 = &v16;
  v9 = &v17;
  v15 = 0LL;
  v10 = 4;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v4, 0LL, 0LL) >= 0 )
    v2 = v16 != 0;
  *((_BYTE *)this + 152) = v2;
  return this;
}

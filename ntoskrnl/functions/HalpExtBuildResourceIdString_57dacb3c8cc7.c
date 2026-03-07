__int64 __fastcall HalpExtBuildResourceIdString(
        int a1,
        int a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        int a7,
        size_t SizeInWords,
        wchar_t *Dst)
{
  int v9; // eax
  int v10; // esi
  int v11; // edi
  int v13; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+58h] [rbp-28h] BYREF
  wchar_t v15[8]; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp-10h]
  __int16 v17; // [rsp+74h] [rbp-Ch]

  v9 = a2;
  v14 = a2;
  v10 = a4;
  v16 = 0;
  v17 = 0;
  v11 = a3;
  v13 = a1;
  *(_OWORD *)v15 = 0LL;
  if ( a6 )
  {
    swprintf_s(v15, 0xBuLL, L"INST_%04x&", a6);
    a1 = v13;
    v9 = v14;
  }
  if ( !a1 )
    return 3221225473LL;
  if ( v9 )
    swprintf_s(
      Dst,
      (unsigned int)SizeInWords,
      L"VEN_%.4hs&DEV_%04x&SUBVEN_%.4hs&SUBDEV_%04x&REV_%04x&%lsUID_%08x",
      &v13,
      v11,
      &v14,
      v10,
      a5,
      v15,
      a7);
  else
    swprintf_s(
      Dst,
      (unsigned int)SizeInWords,
      L"VEN_%.4hs&DEV_%04x&SUBDEV_%04x&REV_%04x&%lsUID_%08x",
      &v13,
      v11,
      v10,
      a5,
      v15,
      a7);
  return 0LL;
}

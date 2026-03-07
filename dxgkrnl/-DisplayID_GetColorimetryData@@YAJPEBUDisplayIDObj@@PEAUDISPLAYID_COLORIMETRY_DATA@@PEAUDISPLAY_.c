__int64 __fastcall DisplayID_GetColorimetryData(
        const struct DisplayIDObj *a1,
        struct DISPLAYID_COLORIMETRY_DATA *a2,
        struct DISPLAY_COLOR_DEPTHS *a3)
{
  unsigned __int8 *v6; // rcx
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  unsigned __int8 *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && a2 && a3 )
  {
    if ( !*((_BYTE *)a1 + 16) )
      return 3223126019LL;
    v9 = 0LL;
    if ( (int)DisplayID_GetBlock(a1, 38LL, &v9) < 0 )
      return 3221226021LL;
    v6 = v9;
    if ( *v9 == 38 )
    {
      v7 = v9[2];
      if ( v7 == (v9[11] & 7) + 9LL && (unsigned __int8)v7 <= 0xF8u )
      {
        v8 = v9[9];
        *((_DWORD *)a3 + 4) = 0;
        *(_BYTE *)a2 = v8;
        *(_DWORD *)a3 = v6[3];
        *((_DWORD *)a3 + 1) = v6[4];
        *((_DWORD *)a3 + 2) = 2 * v6[5];
        *((_DWORD *)a3 + 3) = 2 * v6[6];
        return 0LL;
      }
    }
  }
  return 3221225485LL;
}

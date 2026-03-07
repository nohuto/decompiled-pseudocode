__int64 __fastcall DisplayID_GetColorDataRaw(
        const struct DisplayIDObj *a1,
        struct DISPLAY_COLOR_DATA_RAW *a2,
        enum DISPLAY_NATIVE_COLOR_DEPTH *a3,
        bool *a4)
{
  _BYTE *v8; // rdx
  _BYTE *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && a2 && a3 && a4 )
  {
    if ( !*((_BYTE *)a1 + 16) )
      return 3223126019LL;
    v9 = 0LL;
    if ( (int)DisplayID_GetBlock(a1, 33LL, &v9) < 0 )
      return 3221226021LL;
    v8 = v9;
    if ( *v9 == 33 && v9[2] == 29 )
    {
      *(_DWORD *)a2 = (unsigned __int8)v9[12] + ((v9[13] & 0xF) << 8);
      *((_DWORD *)a2 + 1) = ((unsigned __int8)v8[13] >> 4) + 16 * (unsigned __int8)v8[14];
      *((_DWORD *)a2 + 2) = (unsigned __int8)v8[15] + ((v8[16] & 0xF) << 8);
      *((_DWORD *)a2 + 3) = ((unsigned __int8)v8[16] >> 4) + 16 * (unsigned __int8)v8[17];
      *((_DWORD *)a2 + 4) = (unsigned __int8)v8[18] + ((v8[19] & 0xF) << 8);
      *((_DWORD *)a2 + 5) = ((unsigned __int8)v8[19] >> 4) + 16 * (unsigned __int8)v8[20];
      *((_DWORD *)a2 + 6) = (unsigned __int8)v8[21] + ((v8[22] & 0xF) << 8);
      *((_DWORD *)a2 + 7) = ((unsigned __int8)v8[22] >> 4) + 16 * (unsigned __int8)v8[23];
      *(_DWORD *)a3 = v8[30] & 7;
      *a4 = (v8[11] & 0x40) != 0;
      return 0LL;
    }
  }
  return 3221225485LL;
}

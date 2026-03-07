__int64 __fastcall HrgnToRgnData(HRGN hrgn, struct _RGNDATA **a2, unsigned int *a3)
{
  signed int v5; // ebx
  struct _RGNDATA *v6; // rdi
  DWORD RegionData; // eax
  DWORD v8; // esi
  unsigned int v9; // ecx
  __int64 result; // rax
  signed int v11; // eax
  unsigned int v12; // ecx
  signed int LastError; // eax
  unsigned int v14; // ecx

  v5 = 0;
  v6 = 0LL;
  SetLastError(0);
  RegionData = GetRegionData(hrgn, 0, 0LL);
  v8 = RegionData;
  if ( RegionData )
  {
    v6 = (struct _RGNDATA *)DefaultHeap::Alloc(RegionData);
    if ( v6 )
    {
      SetLastError(0);
      if ( !GetRegionData(hrgn, v8, v6) )
      {
        LastError = GetLastError();
        v5 = LastError;
        if ( LastError > 0 )
          v5 = (unsigned __int16)LastError | 0x80070000;
        if ( v5 >= 0 )
          v5 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v5, 0x88u, 0LL);
        operator delete(v6);
        v6 = 0LL;
      }
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x85u, 0LL);
    }
  }
  else
  {
    v11 = GetLastError();
    v5 = v11;
    if ( v11 > 0 )
      v5 = (unsigned __int16)v11 | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v5, 0x82u, 0LL);
  }
  result = (unsigned int)v5;
  *a2 = v6;
  return result;
}

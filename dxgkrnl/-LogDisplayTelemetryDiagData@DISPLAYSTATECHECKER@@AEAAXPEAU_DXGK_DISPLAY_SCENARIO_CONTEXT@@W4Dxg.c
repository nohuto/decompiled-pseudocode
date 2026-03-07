void __fastcall DISPLAYSTATECHECKER::LogDisplayTelemetryDiagData(int *a1, __int64 a2)
{
  __int64 v4; // r9
  unsigned int v5; // ecx
  __int64 v6; // rcx
  unsigned int i; // esi
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  DISPLAYSTATECHECKER *v9; // rcx
  struct DISPLAYDIAGNOSTICADAPTERDATA *v10; // rdi
  unsigned int j; // ebx
  DISPLAYSTATECHECKER *v12; // rcx
  char *v13; // r8
  __int16 v14[2]; // [rsp+60h] [rbp+7h] BYREF
  int v15; // [rsp+64h] [rbp+Bh] BYREF
  int v16; // [rsp+68h] [rbp+Fh] BYREF
  const CHAR *v17; // [rsp+70h] [rbp+17h] BYREF
  int *v18; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v19[6]; // [rsp+80h] [rbp+27h] BYREF
  char v20; // [rsp+C0h] [rbp+67h] BYREF
  char v21; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000400LL) )
  {
    v5 = *a1;
    v17 = (const CHAR *)(a1 + 1);
    v15 = v4;
    v20 = v5 >> 9;
    v21 = *(_BYTE *)a1;
    v18 = a1 + 5;
    v14[0] = 3;
    v6 = (v5 >> 8) & 1;
    v16 = v6;
    v19[0] = 16779264LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      v6,
      byte_1C009E040,
      (const GUID *)(a2 + 8),
      v4,
      (__int64)v19,
      (__int64)v14,
      (__int64 *)&v18,
      (__int64)&v21,
      (__int64)&v16,
      (__int64)&v20,
      &v17,
      (__int64)&v15);
  }
  for ( i = 0; i < a1[3522]; ++i )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData((DISPLAYSTATECHECKER *)a1, i);
    v10 = DisplayAdapterDiagData;
    if ( DisplayAdapterDiagData )
    {
      DISPLAYSTATECHECKER::LogDisplayTelemetryAdapterInfo(
        v9,
        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2,
        DisplayAdapterDiagData);
      for ( j = 0; j < *((_DWORD *)v10 + 240); ++j )
      {
        if ( j < 4 )
        {
          v12 = (DISPLAYSTATECHECKER *)(224LL * j);
          v13 = (char *)v10 + (_QWORD)v12 + 64;
          if ( v13 )
            DISPLAYSTATECHECKER::LogDisplayTelemetrySourceInfo(
              v12,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2,
              (const struct DXG_BLACKBOX_DISPLAY_SOURCE_INFO *)(v13 + 16));
        }
      }
    }
  }
}

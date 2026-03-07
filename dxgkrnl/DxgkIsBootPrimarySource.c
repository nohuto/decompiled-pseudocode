unsigned __int8 __fastcall DxgkIsBootPrimarySource(struct DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int8 v4; // si
  int v5; // edx
  int IsSourcePresentedOnClientVidPnUsedByFirmware; // eax
  __int64 v8; // rbx
  ADAPTER_DISPLAY *v9; // rcx
  unsigned __int8 v10[4]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v11; // [rsp+54h] [rbp-C4h] BYREF
  _BYTE v12[4]; // [rsp+58h] [rbp-C0h] BYREF
  unsigned int v13; // [rsp+5Ch] [rbp-BCh] BYREF
  _BYTE v14[144]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = a2;
  v4 = 0;
  v10[0] = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL) >= 0 )
  {
    v5 = *((_DWORD *)a1 + 109);
    if ( (v5 & 1) != 0 || DXGADAPTER::IsBddFallbackDriver(a1) )
    {
      if ( (v5 & 0x8000) != 0 )
      {
        IsSourcePresentedOnClientVidPnUsedByFirmware = DmmIsSourcePresentedOnClientVidPnUsedByFirmware(a1, v2, v10);
        if ( IsSourcePresentedOnClientVidPnUsedByFirmware < 0 )
        {
          v8 = IsSourcePresentedOnClientVidPnUsedByFirmware;
          WdLogSingleEntry3(2LL, a1, v2, IsSourcePresentedOnClientVidPnUsedByFirmware);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DmmIsSourcePresentedOnClientVidPnUsedByFirmware failed on adapter 0x%I64x (SourceId = 0x%I64x Status = 0x%I64x)",
            (__int64)a1,
            v2,
            v8,
            0LL,
            0LL);
        }
        else
        {
          v4 = v10[0];
        }
      }
      else
      {
        v9 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 365);
        v11 = 0;
        ADAPTER_DISPLAY::GetPrimaryPath(v9, &v11, &v13, (enum _DXGK_PRIMARY_TARGET_TYPE *)v12);
        v4 = (_DWORD)v2 == v11;
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  return v4;
}

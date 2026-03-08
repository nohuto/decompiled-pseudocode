/*
 * XREFs of ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02BA640
 * Callers:
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02B4808 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0009084 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer @ 0x1C0015EDC (McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer.c)
 */

void __fastcall ADAPTER_DISPLAY::ReportState(ADAPTER_DISPLAY *this)
{
  unsigned int i; // ebx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v4; // [rsp+20h] [rbp-68h]
  __int64 v5; // [rsp+28h] [rbp-60h]
  __int64 v6; // [rsp+30h] [rbp-58h]
  __int64 v7; // [rsp+38h] [rbp-50h]
  __int64 v8; // [rsp+40h] [rbp-48h]
  __int64 v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+50h] [rbp-38h]
  __int64 v11; // [rsp+58h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp-28h]
  __int64 v13; // [rsp+68h] [rbp-20h]
  __int64 v14; // [rsp+70h] [rbp-18h]
  __int64 v15; // [rsp+78h] [rbp-10h]

  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(this, i);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        LODWORD(v15) = *((_DWORD *)DisplayModeInfo + 12);
        LODWORD(v14) = *((_DWORD *)DisplayModeInfo + 11);
        LODWORD(v13) = *((_BYTE *)DisplayModeInfo + 36) & 1;
        LODWORD(v12) = *((_DWORD *)DisplayModeInfo + 8);
        LODWORD(v11) = *((_DWORD *)DisplayModeInfo + 7);
        LODWORD(v10) = *((_DWORD *)DisplayModeInfo + 6);
        LODWORD(v9) = *((_DWORD *)DisplayModeInfo + 5);
        LODWORD(v8) = *((_DWORD *)DisplayModeInfo + 4);
        LODWORD(v7) = *((_DWORD *)DisplayModeInfo + 2);
        LODWORD(v6) = *((_DWORD *)DisplayModeInfo + 1);
        LODWORD(v5) = *(_DWORD *)DisplayModeInfo;
        LODWORD(v4) = i;
        McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer(
          (unsigned int)v14,
          *((_BYTE *)DisplayModeInfo + 36) & 1,
          (__int64)DisplayModeInfo,
          *((_QWORD *)this + 2),
          v4,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
    }
  }
}

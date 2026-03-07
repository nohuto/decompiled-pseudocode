void __fastcall VIDPN_MGR::HandleLinkTrainingTimeout(
        VIDPN_MGR *this,
        unsigned int a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  __int64 v8; // rbx
  PERESOURCE *v9; // rdi
  struct _LUID *v10; // rdx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v12; // r11
  int v13; // r8d
  unsigned int v14; // ecx
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 v18[4]; // [rsp+20h] [rbp-71h]
  int v19; // [rsp+20h] [rbp-71h]
  unsigned __int64 v20; // [rsp+30h] [rbp-61h] BYREF
  struct _DXGK_CONNECTION_CHANGE v21; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v22[10]; // [rsp+50h] [rbp-41h] BYREF

  v8 = a2;
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  v9 = *(PERESOURCE **)(*((_QWORD *)this + 1) + 16LL);
  memset(v22, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v22[1]);
  v22[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v22[3]) = 61;
  LOBYTE(v22[6]) = -1;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v9) )
    WdLogSingleEntry0(1LL);
  *a4 = 0;
  *a5 = 0;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 15), v8);
  if ( TargetById )
  {
    v20 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v9, v10, 0LL, &v20);
    v14 = v13 + 88;
    v19 = v13 & *(_DWORD *)v18;
    if ( a3 )
    {
      DxgkLogCodePointPacketForSession(v14, v20, v8, 268435454, v19, v12);
      if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn((DXGADAPTER *)v9) )
      {
        *a4 = 1;
      }
      else
      {
        *(_OWORD *)&v21.ConnectionChangeId = 0LL;
        DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v21);
        *(_BYTE *)(*((_QWORD *)TargetById + 67) + 168LL) = 13;
        *(_QWORD *)(*((_QWORD *)TargetById + 67) + 160LL) = v21.ConnectionChangeId;
        Global = DXGGLOBAL::GetGlobal();
        QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0LL, v16, v17);
        WdLogSingleEntry2(7LL, v8, v9);
        *a5 = 1;
      }
    }
    else
    {
      DxgkLogCodePointPacketForSession(v14, v20, v8, 0xFFFFFFF, v19, v12);
      memset(&v21, 0, sizeof(v21));
      DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v21);
      *((_DWORD *)&v21 + 2) = v8 & 0xFFFFFF | *((_DWORD *)&v21 + 2) & 0xFD000000 | 0xD000000;
      VIDPN_MGR::UpdateTargetLinkTrainingStatus(this, &v21, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v22, 0);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v8);
  }
}

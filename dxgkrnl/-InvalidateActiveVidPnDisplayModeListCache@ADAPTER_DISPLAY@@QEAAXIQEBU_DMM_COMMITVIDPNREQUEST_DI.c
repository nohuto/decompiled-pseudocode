void __fastcall ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(
        PERESOURCE **this,
        __int64 a2,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const a3)
{
  char v4; // di
  unsigned int v5; // edx
  __int64 v6; // rcx
  PERESOURCE *v7; // rax
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+48h] [rbp-20h]
  int v18; // [rsp+50h] [rbp-18h]

  v4 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 2938LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 2938LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = 0;
  if ( *((_DWORD *)this + 24) )
  {
    do
    {
      if ( v5 != -3 )
      {
        v6 = 500LL * v5;
        v7 = this[16];
        v8 = BYTE4(v7[v6 + 139]) == 0;
        BYTE4(v7[v6 + 139]) = 0;
        if ( !v8 )
          v4 = 1;
        LODWORD(this[16][v6 + 140]) = -1;
        HIDWORD(this[16][v6 + 141]) = -1;
        LODWORD(this[16][v6 + 142]) = -1;
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)this + 24) );
    if ( v4 )
    {
      DxgkLogCodePointPacket(0x1Cu, 0xFFFFFFFD, 0, 0, *(__int64 *)((char *)this[2] + 404));
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v18 = 0;
          v17 = 0;
          LODWORD(v16) = 0;
          LODWORD(v15) = 0;
          LOBYTE(v14) = 0;
          LOBYTE(v13) = 0;
          LODWORD(v12) = -3;
          McTemplateK0pquutttq_EtwWriteTransfer(v10, v9, v11, this, v12, v13, v14, v15, v16, v17, v18);
        }
      }
    }
  }
}

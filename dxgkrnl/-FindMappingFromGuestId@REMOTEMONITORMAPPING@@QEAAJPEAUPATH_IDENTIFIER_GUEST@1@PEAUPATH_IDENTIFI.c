/*
 * XREFs of ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1C0347D0C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkAttemptOpmVmBusRedirect @ 0x1C02BD7E4 (DxgkAttemptOpmVmBusRedirect.c)
 *     ?StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C03D0AD0 (-StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 */

__int64 __fastcall REMOTEMONITORMAPPING::FindMappingFromGuestId(
        struct _KTHREAD **this,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *a2,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *a3)
{
  struct _KTHREAD *v6; // r9
  unsigned int v7; // ebx
  int v9; // eax
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v6 = *this;
  v12 = 1;
  if ( v6 == (struct _KTHREAD *)this )
  {
LABEL_6:
    v7 = -1073741275;
  }
  else
  {
    while ( *((_DWORD *)v6 + 7) != *(_DWORD *)a2
         || *((_DWORD *)v6 + 8) != *((_DWORD *)a2 + 1)
         || *((_DWORD *)v6 + 9) != *((_DWORD *)a2 + 2) )
    {
      v6 = *(struct _KTHREAD **)v6;
      if ( v6 == (struct _KTHREAD *)this )
        goto LABEL_6;
    }
    v7 = 0;
    v9 = *((_DWORD *)v6 + 6);
    *(_QWORD *)a3 = *((_QWORD *)v6 + 2);
    *((_DWORD *)a3 + 2) = v9;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return v7;
}

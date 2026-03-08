/*
 * XREFs of ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C03CEFC0
 * Callers:
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0166EB8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02B1EF0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BA8B0 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C01C7320 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C03CCD2C (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::Reset(BLTQUEUE *this, char a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  char *v6; // rdx
  _BYTE v7[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v8[64]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v9[88]; // [rsp+78h] [rbp-70h] BYREF

  if ( *((_QWORD *)this + 76) )
  {
    *((_BYTE *)this + 569) = 1;
    BLTQUEUE::IssueCommand(this);
    v5 = *((_QWORD *)this + 45);
    if ( v5 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v7, v5, 0, v4, 0);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 45) + 16LL) + 16LL)) )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v7, v6);
      BLTQUEUE::DestroyStagingBuffer(this);
      *((_QWORD *)this + 45) = 0LL;
      COREACCESS::~COREACCESS((COREACCESS *)v9);
      COREACCESS::~COREACCESS((COREACCESS *)v8);
    }
    if ( !a2 )
      *((_DWORD *)this + 239) = 0;
  }
}

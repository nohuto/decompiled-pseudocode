/*
 * XREFs of DxgkQueryClockCalibration @ 0x1C02CF4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C02CA274 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 */

__int64 __fastcall DxgkQueryClockCalibration(__int64 a1)
{
  _D3DKMT_QUERYCLOCKCALIBRATION *v1; // rbx
  struct _KTHREAD **Current; // rdi
  _D3DKMT_QUERYCLOCKCALIBRATION *v4; // rax
  int v5; // edi
  struct DXGADAPTER *v6; // [rsp+50h] [rbp-58h] BYREF
  DXGADAPTER *v7; // [rsp+58h] [rbp-50h] BYREF
  _D3DKMT_QUERYCLOCKCALIBRATION v8; // [rsp+68h] [rbp-40h] BYREF

  v1 = (_D3DKMT_QUERYCLOCKCALIBRATION *)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    memset(&v8, 0, sizeof(v8));
    v4 = v1;
    if ( (unsigned __int64)v1 >= MmUserProbeAddress )
      v4 = (_D3DKMT_QUERYCLOCKCALIBRATION *)MmUserProbeAddress;
    v8 = *v4;
    v6 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v7, v8.hAdapter, Current, &v6, 1);
    v5 = DxgkQueryClockCalibrationInternal((struct DXGPROCESS *)Current, &v8, v6);
    if ( v5 >= 0 )
    {
      if ( (unsigned __int64)v1 >= MmUserProbeAddress )
        v1 = (_D3DKMT_QUERYCLOCKCALIBRATION *)MmUserProbeAddress;
      *v1 = v8;
    }
    if ( v7 )
      DXGADAPTER::ReleaseReference(v7);
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry1(2LL, 10052LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 10052LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}

/*
 * XREFs of ?PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z @ 0x1C0222032
 * Callers:
 *     NtDxgkGetProperties @ 0x1C01A8E80 (NtDxgkGetProperties.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1C0221B7E (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 */

__int64 __fastcall PresentStatsDwm2Property(struct _KTHREAD **a1, struct _D3DKMT_PROPERTIES_PRESENT_STATS_DWM2 *a2)
{
  unsigned int LastCompletedPresentIdDWM; // ebx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE v9[8]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v10; // [rsp+58h] [rbp-18h]
  char v11; // [rsp+60h] [rbp-10h]
  struct DXGDEVICE *v12; // [rsp+88h] [rbp+18h] BYREF
  struct DXGDEVICE *v13; // [rsp+90h] [rbp+20h] BYREF

  v12 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v13, *(_DWORD *)a2, a1, &v12);
  if ( v12 )
  {
    v4 = *((_QWORD *)v12 + 2);
    v11 = 0;
    v10 = *(_QWORD *)(v4 + 16);
    v5 = v10;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
    if ( *(_DWORD *)(v5 + 200) == 1 )
    {
      v6 = *((_QWORD *)v12 + 235);
      if ( v6 && (v7 = *((unsigned int *)a2 + 1), (unsigned int)v7 >= *(_DWORD *)(*(_QWORD *)(v6 + 2920) + 96LL)) )
      {
        LastCompletedPresentIdDWM = -1073741811;
        WdLogSingleEntry2(3LL, v7, -1073741811LL);
      }
      else
      {
        LastCompletedPresentIdDWM = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                                      v12,
                                      *((_DWORD *)a2 + 1),
                                      (struct _D3DKMT_PROPERTIES_PRESENT_STATS_DWM2 *)((char *)a2 + 8));
      }
    }
    else
    {
      LastCompletedPresentIdDWM = -1073741130;
    }
    if ( v11 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  }
  else
  {
    LastCompletedPresentIdDWM = -1073741811;
    WdLogSingleEntry2(2LL, *(unsigned int *)a2, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *(unsigned int *)a2,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v13 && _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v13 + 2), v13);
  return LastCompletedPresentIdDWM;
}

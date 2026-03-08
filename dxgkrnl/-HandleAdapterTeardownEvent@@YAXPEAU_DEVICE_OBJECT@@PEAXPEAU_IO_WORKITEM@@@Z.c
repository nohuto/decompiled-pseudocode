/*
 * XREFs of ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02B2D50
 * Callers:
 *     ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x1C003F040 (-NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall HandleAdapterTeardownEvent(PVOID IoObject, _DWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-58h]
  int v8; // [rsp+28h] [rbp-50h]
  int v9; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+54h] [rbp-24h]
  int v11; // [rsp+5Ch] [rbp-1Ch]
  __int64 v12; // [rsp+60h] [rbp-18h]
  __int64 v13; // [rsp+68h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 372);
  WdLogSingleEntry3(4LL, *(_QWORD *)Context, (unsigned int)Context[2], (unsigned int)Context[3]);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v8 = Context[3];
    v7 = Context[2];
    McTemplateK0pqq_EtwWriteTransfer(v5, &HardwareContentProtectionTeardown, v6, *(_QWORD *)Context, v7, v8);
  }
  v10 = 0LL;
  v11 = 0;
  v13 = 0LL;
  v9 = 11;
  v12 = 1LL;
  SMgrGdiCallout(&v9, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
  if ( (int)ZwUpdateWnfStateData(
              &WNF_DX_HARDWARE_CONTENT_PROTECTION_TILT_NOTIFICATION,
              Context + 4,
              8LL,
              0LL,
              0LL,
              0,
              0) < 0 )
  {
    WdLogSingleEntry1(2LL, 2316LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Hardware content protection teardown notification failed",
      2316LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}

/*
 * XREFs of ?DxgkpProcessOpmVmBusRequest@@YAJU_LUID@@IKPEAXK1PEAK@Z @ 0x1C02BD640
 * Callers:
 *     ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037EA20 (-VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C0009308 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiProcessOpmVmBusRequest @ 0x1C0064504 (DpiProcessOpmVmBusRequest.c)
 */

__int64 __fastcall DxgkpProcessOpmVmBusRequest(
        struct _LUID a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        void **a6,
        unsigned int *a7)
{
  DWORD LowPart; // ebx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  DXGADAPTER *v13; // rbx
  DXGADAPTER *v15[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-20h] BYREF
  DXGADAPTER *v17; // [rsp+58h] [rbp-18h]
  char v18; // [rsp+60h] [rbp-10h]
  struct _LUID v19; // [rsp+90h] [rbp+20h] BYREF

  v19 = a1;
  v15[0] = 0LL;
  LowPart = a1.LowPart;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v15, &v19) )
  {
    v13 = v15[0];
    v17 = v15[0];
    v18 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
    v12 = DpiProcessOpmVmBusRequest(*((_QWORD *)v13 + 27), a2, a3, a4, a5, a6, a7);
    if ( v18 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
  }
  else
  {
    v11 = LowPart;
    v12 = -1073741811;
    WdLogSingleEntry3(3LL, v11, v19.HighPart, -1073741811LL);
  }
  DXGADAPTER_REFERENCE::Assign(v15, 0LL);
  return v12;
}

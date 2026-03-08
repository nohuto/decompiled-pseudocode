/*
 * XREFs of _lambda_8317567312832b51b45aaef017a7684b_::operator() @ 0x1C01D5A20
 * Callers:
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C01D5780 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0002D10 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C0016524 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1C01D5D70 (-IsClientHandleValid@DispBrokerClient@@AEAA_NXZ.c)
 */

void __fastcall lambda_8317567312832b51b45aaef017a7684b_::operator()(unsigned int ***a1)
{
  struct DispBrokerClientHandle **v2; // rdx
  DispBrokerClientHandle **v3; // rcx
  int v4; // ebx
  unsigned __int64 v5; // kr00_8
  unsigned int **v6; // rax
  unsigned int v7; // r8d
  _BYTE v8[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  unsigned __int64 v11; // [rsp+88h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, (struct _KTHREAD **)*a1 + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v9);
  v2 = (struct DispBrokerClientHandle **)a1[1];
  v3 = (DispBrokerClientHandle **)(*a1 + 6);
  v10 = 2;
  DispBrokerClientReference::Assign(v3, *v2);
  v4 = *(_DWORD *)a1[2];
  if ( v4 >= 0 != DispBrokerClient::IsClientHandleValid((DispBrokerClient *)*a1) )
  {
    WdLogSingleEntry1(1LL, 190LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!!NT_SUCCESS(Status) == IsClientHandleValid()",
      190LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = KeQueryInterruptTimePrecise(&v11);
  v6 = a1[3];
  v7 = *(_DWORD *)a1[2];
  v11 = v5 / 0xA;
  DxgkLogCodePointPacketForSession(0x70u, ***a1, v7, (v5 / 0xA - (unsigned __int64)*v6) / 0x3E8, 0, 0LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
}

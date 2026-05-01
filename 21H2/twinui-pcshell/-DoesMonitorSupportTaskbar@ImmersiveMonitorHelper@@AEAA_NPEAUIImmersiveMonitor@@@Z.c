/*
 * XREFs of ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18000EC68
 * Callers:
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x18000EB3C (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     _lambda_ead0512f969402d1fc8d2633e8190cfb_::operator() @ 0x1800CC594 (_lambda_ead0512f969402d1fc8d2633e8190cfb_--operator().c)
 * Callees:
 *     _lambda_b5e774836b892e09f713259a625a971e_::operator() @ 0x1800CC454 (_lambda_b5e774836b892e09f713259a625a971e_--operator().c)
 */

char __fastcall ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(
        ImmersiveMonitorHelper *this,
        struct IImmersiveMonitor *a2)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  char v4; // [rsp+50h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v3[1] = this;
  v3[0] = &v5;
  v4 = 0;
  v3[2] = &v4;
  lambda_b5e774836b892e09f713259a625a971e_::operator()(v3);
  return v4;
}

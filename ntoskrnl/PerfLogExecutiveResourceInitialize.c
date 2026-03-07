void __fastcall PerfLogExecutiveResourceInitialize(int a1, __int64 a2, int a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD v5[3]; // [rsp+30h] [rbp-50h] BYREF
  int v6; // [rsp+48h] [rbp-38h]
  unsigned int CurrentRunTime; // [rsp+4Ch] [rbp-34h]
  __int64 v8; // [rsp+50h] [rbp-30h]
  int v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+5Ch] [rbp-24h]
  _QWORD v11[2]; // [rsp+60h] [rbp-20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  v9 = a1;
  v8 = a2;
  v6 = a3;
  v10 = a4;
  memset(v5, 0, sizeof(v5));
  v11[1] = 48LL;
  CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
  v11[0] = v5;
  EtwTraceKernelEvent((__int64)v11, 1u, 0x20020000u, 0x52Bu, 0x1501802u);
}

void __fastcall DXGDEVICE::RemoveTrackedWorkloadFromList(struct _KTHREAD **this, struct DXGTRACKEDWORKLOAD *a2)
{
  struct DXGTRACKEDWORKLOAD *v3; // rcx
  struct DXGTRACKEDWORKLOAD **v4; // rax
  char v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 72, 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  v7 = 2;
  DXGTRACKEDWORKLOAD::ReportState(a2, 0x1E2u);
  v3 = *(struct DXGTRACKEDWORKLOAD **)a2;
  if ( *(struct DXGTRACKEDWORKLOAD **)(*(_QWORD *)a2 + 8LL) != a2
    || (v4 = (struct DXGTRACKEDWORKLOAD **)*((_QWORD *)a2 + 1), *v4 != a2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *((_QWORD *)v3 + 1) = v4;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}

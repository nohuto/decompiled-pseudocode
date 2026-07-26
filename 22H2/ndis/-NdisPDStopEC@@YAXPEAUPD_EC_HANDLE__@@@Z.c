/*
 * XREFs of ?NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z @ 0x1C011D250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005F6B0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FEEC0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FF390 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_EC@@QEAAPEAXI@Z @ 0x1C011A34C (--_GNDIS_PD_EC@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDStopEC(struct PD_EC_HANDLE__ *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // r9
  __int64 v4; // rcx
  struct PD_EC_HANDLE__ **v5; // rax
  void *v6; // rcx
  KLockHolder v7; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x5Cu,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      (char)a1,
      *((_QWORD *)a1 + 3),
      CurrentThread);
  v3 = *((_QWORD *)a1 + 3);
  if ( (struct _KTHREAD *)v3 != CurrentThread )
    ndisBugCheckEx(0x23uLL, 1uLL, *((_QWORD *)a1 + 2), v3);
  v7.m_Lock = (KPushLockBase *)qword_1C00E5528;
  v7.m_State = Unlocked;
  v7.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v7);
  v4 = *(_QWORD *)a1;
  if ( *(struct PD_EC_HANDLE__ **)(*(_QWORD *)a1 + 8LL) != a1
    || (v5 = (struct PD_EC_HANDLE__ **)*((_QWORD *)a1 + 1), *v5 != a1) )
  {
    __fastfail(3u);
  }
  *v5 = (struct PD_EC_HANDLE__ *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_QWORD *)a1 = 0LL;
  KLockHolder::~KLockHolder(&v7);
  v6 = (void *)*((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 2) = 0LL;
  ObfDereferenceObject(v6);
  *((_QWORD *)a1 + 3) = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x5Du,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      a1);
  NDIS_PD_EC::`scalar deleting destructor'((char *)a1);
}

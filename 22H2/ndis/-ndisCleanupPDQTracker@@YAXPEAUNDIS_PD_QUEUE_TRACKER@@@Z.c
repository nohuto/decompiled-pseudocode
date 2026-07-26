/*
 * XREFs of ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C011D434
 * Callers:
 *     ?NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C011C390 (-NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C011D4EC (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FEEC0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FF390 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPDDetachQueueFromECInternal@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C011E290 (-ndisPDDetachQueueFromECInternal@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C011E73C (-ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 */

void __fastcall ndisCleanupPDQTracker(struct NDIS_PD_QUEUE_TRACKER ***a1)
{
  struct NDIS_PD_QUEUE_TRACKER **v2; // rcx
  struct NDIS_PD_QUEUE_TRACKER **v3; // rax
  struct NDIS_PD_COUNTER *v4; // rcx
  struct NDIS_PD_QUEUE_TRACKER *v5; // rax
  struct NDIS_PD_QUEUE_TRACKER **v6; // rdx
  struct NDIS_PD_QUEUE_TRACKER **v7; // r8
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  v8.m_State = Unlocked;
  v8.m_Lock = (KPushLockBase *)qword_1C00E5528;
  v8.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v8);
  ndisPDDetachQueueFromECInternal((struct NDIS_PD_QUEUE_TRACKER *)a1);
  v2 = *a1;
  if ( (*a1)[1] != (struct NDIS_PD_QUEUE_TRACKER *)a1 )
    goto LABEL_8;
  v3 = a1[1];
  if ( *v3 != (struct NDIS_PD_QUEUE_TRACKER *)a1 )
    goto LABEL_8;
  *v3 = (struct NDIS_PD_QUEUE_TRACKER *)v2;
  v2[1] = (struct NDIS_PD_QUEUE_TRACKER *)v3;
  *a1 = 0LL;
  v4 = (struct NDIS_PD_COUNTER *)a1[28];
  if ( v4 )
  {
    v5 = (struct NDIS_PD_QUEUE_TRACKER *)(a1 + 29);
    v6 = a1[29];
    if ( v6[1] == (struct NDIS_PD_QUEUE_TRACKER *)(a1 + 29) )
    {
      v7 = a1[30];
      if ( *v7 == v5 )
      {
        *v7 = (struct NDIS_PD_QUEUE_TRACKER *)v6;
        v6[1] = (struct NDIS_PD_QUEUE_TRACKER *)v7;
        *(_QWORD *)v5 = 0LL;
        a1[28] = 0LL;
        --*((_DWORD *)v4 + 22);
        ndisPdQCounterUpdateName(v4);
        goto LABEL_7;
      }
    }
LABEL_8:
    __fastfail(3u);
  }
LABEL_7:
  a1[6] = 0LL;
  a1[4] = 0LL;
  KLockHolder::~KLockHolder(&v8);
}

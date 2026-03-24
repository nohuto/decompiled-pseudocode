/*
 * XREFs of ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C0073894
 * Callers:
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0073674 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C0073C88 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 * Callees:
 *     McTemplateK0pppxqpq_EtwWriteTransfer @ 0x1C0025E38 (McTemplateK0pppxqpq_EtwWriteTransfer.c)
 *     McTemplateK0pppxqq_EtwWriteTransfer @ 0x1C0025EF4 (McTemplateK0pppxqq_EtwWriteTransfer.c)
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C0073A44 (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007E800 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1C00BA5FC (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::AppendReadyPacket(
        VIDMM_PAGING_QUEUE *this,
        struct VIDMM_PAGING_QUEUE_PACKET *a2,
        unsigned __int64 *a3)
{
  bool v4; // zf
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  VIDMM_PAGING_QUEUE **v12; // rcx
  __int64 v13; // rcx
  VIDMM_DEVICE *v14; // rcx
  __int64 v15; // rcx
  struct VIDMM_DEVICE *VidMmDevice; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+38h] [rbp-20h]
  int v24; // [rsp+38h] [rbp-20h]
  int v25; // [rsp+40h] [rbp-18h]
  int v26; // [rsp+48h] [rbp-10h]

  v4 = *((_BYTE *)a2 + 24) == 0;
  *((_QWORD *)a2 + 2) = KeGetCurrentThread();
  if ( !v4 )
  {
    v7 = *((_QWORD *)a2 + 8);
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 160));
  }
  v8 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8 + 144, 0LL);
  *(_QWORD *)(v8 + 152) = KeGetCurrentThread();
  if ( *((_BYTE *)a2 + 25) )
  {
    *((_QWORD *)this + 12) += *((unsigned int *)this + 33);
    v11 = *((_QWORD *)this + 12);
    if ( !*((_BYTE *)this + 130) )
    {
      *((_DWORD *)this + 25) = 0;
      v11 = *((_QWORD *)this + 12);
    }
    *((_QWORD *)a2 + 4) = v11;
    *a3 = v11;
  }
  v12 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 5);
  if ( *v12 != (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 32;
  *((_QWORD *)a2 + 1) = v12;
  *v12 = a2;
  *((_QWORD *)this + 5) = a2;
  if ( *((_BYTE *)a2 + 24) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a2);
      v26 = *((_DWORD *)this + 29);
      v23 = *((_DWORD *)a2 + 12);
      McTemplateK0pppxqpq_EtwWriteTransfer(
        *((_QWORD *)a2 + 5),
        v17,
        v18,
        *((_QWORD *)VidMmDevice + 3),
        this,
        a2,
        *((_QWORD *)a2 + 5),
        v23,
        *((_QWORD *)a2 + 8),
        v26);
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
      v19[3] = a2;
      v19[4] = *((int *)a2 + 12);
      v19[5] = *((_QWORD *)a2 + 8);
      v19[6] = *((_QWORD *)a2 + 7);
      v19[7] = *((_QWORD *)a2 + 4);
    }
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v25 = *((_DWORD *)this + 29);
      v24 = *((_DWORD *)a2 + 12);
      McTemplateK0pppxqq_EtwWriteTransfer(
        (__int64)v12,
        v9,
        v10,
        *(_QWORD *)(**((_QWORD **)this + 10) + 24LL),
        this,
        a2,
        *((_QWORD *)a2 + 5),
        v24,
        v25);
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
      v20[3] = a2;
      v20[4] = *((int *)a2 + 12);
      v20[5] = *((unsigned __int8 *)a2 + 25);
      v20[6] = *((_QWORD *)a2 + 4);
    }
  }
  if ( !*((_DWORD *)this + 28) )
  {
    VIDMM_PAGING_QUEUE::SetStatus(this, 1LL);
    if ( *((_BYTE *)a2 + 24) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v21 = WdLogNewEntry5_WdTrace(v13);
        *(_QWORD *)(v21 + 24) = this;
        *(_QWORD *)(v21 + 32) = *((_QWORD *)a2 + 7);
      }
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      v22 = WdLogNewEntry5_WdTrace(v13);
      *(_QWORD *)(v22 + 24) = this;
      *(_QWORD *)(v22 + 32) = **((_QWORD **)this + 17);
    }
  }
  v14 = (VIDMM_DEVICE *)*((_QWORD *)this + 17);
  ++*((_DWORD *)v14 + 16);
  VIDMM_DEVICE::EnsureSchedulable(v14, 1);
  ++*(_DWORD *)(*((_QWORD *)this + 10) + 168LL);
  v15 = *((_QWORD *)this + 10) + 144LL;
  *(_QWORD *)(v15 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v15, 0LL);
  KeLeaveCriticalRegion();
}

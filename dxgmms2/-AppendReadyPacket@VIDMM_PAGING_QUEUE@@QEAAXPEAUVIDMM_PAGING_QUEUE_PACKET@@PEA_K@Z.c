void __fastcall VIDMM_PAGING_QUEUE::AppendReadyPacket(
        VIDMM_PAGING_QUEUE *this,
        struct VIDMM_PAGING_QUEUE_PACKET *a2,
        unsigned __int64 *a3)
{
  bool v4; // zf
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  VIDMM_PAGING_QUEUE **v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  VIDMM_DEVICE *v17; // rcx
  __int64 v18; // rcx
  struct VIDMM_DEVICE *VidMmDevice; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  VIDMM_PAGING_QUEUE *v25; // rax
  VIDMM_PAGING_QUEUE **v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+38h] [rbp-20h]
  int v30; // [rsp+38h] [rbp-20h]
  int v31; // [rsp+40h] [rbp-18h]
  int v32; // [rsp+48h] [rbp-10h]

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
    if ( !*((_BYTE *)this + 130) )
      *((_DWORD *)this + 25) = 0;
    v11 = *((_QWORD *)this + 12);
    *((_QWORD *)a2 + 4) = v11;
    *a3 = v11;
  }
  v12 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 5);
  if ( *v12 != (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
    goto LABEL_39;
  *(_QWORD *)a2 = (char *)this + 32;
  *((_QWORD *)a2 + 1) = v12;
  *v12 = a2;
  *((_QWORD *)this + 5) = a2;
  if ( *((_BYTE *)a2 + 24) )
  {
    if ( (byte_1C00769C1 & 1) != 0 )
    {
      VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a2);
      v32 = *((_DWORD *)this + 29);
      v29 = *((_DWORD *)a2 + 12);
      McTemplateK0pppxqpq_EtwWriteTransfer(
        *((_QWORD *)a2 + 5),
        v20,
        v21,
        *((_QWORD *)VidMmDevice + 3),
        this,
        a2,
        *((_QWORD *)a2 + 5),
        v29,
        *((_QWORD *)a2 + 8),
        v32);
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
      v22[3] = a2;
      v22[4] = *((int *)a2 + 12);
      v22[5] = *((_QWORD *)a2 + 8);
      v22[6] = *((_QWORD *)a2 + 7);
      v12 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 4);
      v22[7] = v12;
    }
  }
  else
  {
    if ( (byte_1C00769C1 & 1) != 0 )
    {
      v31 = *((_DWORD *)this + 29);
      v30 = *((_DWORD *)a2 + 12);
      McTemplateK0pppxqq_EtwWriteTransfer(
        (__int64)v12,
        v9,
        v10,
        *(_QWORD *)(**((_QWORD **)this + 10) + 24LL),
        this,
        a2,
        *((_QWORD *)a2 + 5),
        v30,
        v31);
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
      v23[3] = a2;
      v23[4] = *((int *)a2 + 12);
      v23[5] = *((unsigned __int8 *)a2 + 25);
      v12 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 4);
      v23[6] = v12;
    }
  }
  if ( !*((_DWORD *)this + 28) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
      v24[3] = this;
      v24[4] = *((int *)this + 28);
      v24[5] = 1LL;
    }
    if ( *((_DWORD *)this + 28) == 2 )
    {
      v25 = *(VIDMM_PAGING_QUEUE **)this;
      if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)this + 8LL) != this )
        goto LABEL_39;
      v26 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 1);
      if ( *v26 != this )
        goto LABEL_39;
      *v26 = v25;
      *((_QWORD *)v25 + 1) = v26;
      *(_QWORD *)this = 0LL;
      *((_QWORD *)this + 1) = 0LL;
    }
    v13 = *((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 1;
    if ( *((_BYTE *)this + 128) )
    {
      if ( *((_DWORD *)this + 29) == 3 )
      {
        v15 = *(_QWORD **)(v13 + 88);
        v14 = v13 + 80;
        if ( *v15 == v14 )
        {
LABEL_22:
          *(_QWORD *)this = v14;
          *((_QWORD *)this + 1) = v15;
          *v15 = this;
          *(_QWORD *)(v14 + 8) = this;
          KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 10) + 176LL), 0, 0);
          if ( *((_BYTE *)a2 + 24) )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              v27 = WdLogNewEntry5_WdTrace(v16);
              *(_QWORD *)(v27 + 24) = this;
              *(_QWORD *)(v27 + 32) = *((_QWORD *)a2 + 7);
            }
          }
          else if ( g_IsInternalReleaseOrDbg )
          {
            v28 = WdLogNewEntry5_WdTrace(v16);
            *(_QWORD *)(v28 + 24) = this;
            *(_QWORD *)(v28 + 32) = **((_QWORD **)this + 17);
          }
          goto LABEL_25;
        }
LABEL_39:
        __fastfail(3u);
      }
      v14 = v13 + 112;
    }
    else if ( *((_BYTE *)this + 129) )
    {
      v14 = v13 + 96;
    }
    else
    {
      v14 = v13 + 80;
    }
    v15 = *(_QWORD **)(v14 + 8);
    if ( *v15 == v14 )
      goto LABEL_22;
    goto LABEL_39;
  }
LABEL_25:
  v17 = (VIDMM_DEVICE *)*((_QWORD *)this + 17);
  ++*((_DWORD *)v17 + 18);
  VIDMM_DEVICE::EnsureSchedulable(v17, 1);
  ++*(_DWORD *)(*((_QWORD *)this + 10) + 168LL);
  v18 = *((_QWORD *)this + 10) + 144LL;
  *(_QWORD *)(v18 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v18, 0LL);
  KeLeaveCriticalRegion();
}

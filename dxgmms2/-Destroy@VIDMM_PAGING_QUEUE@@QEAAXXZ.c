// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PAGING_QUEUE::Destroy(struct _LIST_ENTRY *this)
{
  VIDMM_DEVICE *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v4; // rcx
  char *v5; // rbx
  char *v6; // rcx
  __int64 v7; // rax
  struct _LIST_ENTRY *v8; // rax
  VIDMM_PAGING_QUEUE **v9; // rcx

  if ( this[7].Blink )
    VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)this);
  Blink = (VIDMM_DEVICE *)this[8].Blink;
  if ( Blink )
    VIDMM_DEVICE::RemovePagingQueueList(Blink, this + 3);
  Flink = this[5].Flink;
  if ( Flink )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&Flink[9], 0LL);
    Flink[9].Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    if ( this[2].Flink != &this[2] )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 50LL, this, 0LL, 0LL);
    }
    if ( LODWORD(this[7].Flink) == 2 )
    {
      v8 = this->Flink;
      if ( this->Flink->Blink != this || (v9 = (VIDMM_PAGING_QUEUE **)this->Blink, *v9 != (VIDMM_PAGING_QUEUE *)this) )
LABEL_21:
        __fastfail(3u);
      *v9 = (VIDMM_PAGING_QUEUE *)v8;
      v8->Blink = (struct _LIST_ENTRY *)v9;
      this->Flink = 0LL;
      this->Blink = 0LL;
    }
    else if ( this->Flink || this->Blink )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 49LL, this, 0LL, 0LL);
    }
    v4 = (__int64)&this[5].Flink[9];
    *(_QWORD *)(v4 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    v5 = (char *)&this[1];
    while ( 1 )
    {
      v6 = *(char **)v5;
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
        goto LABEL_21;
      v7 = *(_QWORD *)v6;
      if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
        goto LABEL_21;
      *(_QWORD *)v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      if ( v6 == v5 )
        break;
      operator delete(v6);
    }
    operator delete(this[7].Blink);
    this[7].Blink = 0LL;
  }
}

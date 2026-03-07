VIDMM_PAGING_QUEUE **__fastcall VIDMM_PAGING_QUEUE::GetNewPacket(VIDMM_PAGING_QUEUE *this)
{
  __int64 v1; // rbx
  VIDMM_PAGING_QUEUE **v3; // rdi
  VIDMM_PAGING_QUEUE *v4; // rbp
  VIDMM_PAGING_QUEUE **v5; // rbx
  VIDMM_PAGING_QUEUE *v6; // rax
  __int64 v7; // rcx
  VIDMM_PAGING_QUEUE **result; // rax

  v1 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 144, 0LL);
  v3 = (VIDMM_PAGING_QUEUE **)((char *)this + 16);
  *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
  v4 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = (char *)v4 + 1;
  v5 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 2);
  if ( v5[1] != (VIDMM_PAGING_QUEUE *)((char *)this + 16) || (v6 = *v5, *((VIDMM_PAGING_QUEUE ***)*v5 + 1) != v5) )
    __fastfail(3u);
  *v3 = v6;
  *((_QWORD *)v6 + 1) = v3;
  v7 = *((_QWORD *)this + 10) + 144LL;
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v3 )
  {
    memset(v5, 0, 0xA0uLL);
    goto LABEL_7;
  }
  result = (VIDMM_PAGING_QUEUE **)operator new(160LL, 0x38346956u, 256LL);
  v5 = result;
  if ( result )
  {
LABEL_7:
    v5[5] = v4;
    return v5;
  }
  return result;
}

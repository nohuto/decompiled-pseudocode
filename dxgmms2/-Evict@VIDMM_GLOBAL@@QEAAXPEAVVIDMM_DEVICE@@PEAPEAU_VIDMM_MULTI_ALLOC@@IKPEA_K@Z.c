void __fastcall VIDMM_GLOBAL::Evict(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC **a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  struct _VIDMM_MULTI_ALLOC **v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // r8
  struct _VIDMM_MULTI_ALLOC **i; // r12
  struct _VIDMM_MULTI_ALLOC *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rcx
  _QWORD **v14; // r8
  char v15; // r9
  __int64 v16; // [rsp+20h] [rbp-98h]
  _QWORD v17[12]; // [rsp+30h] [rbp-88h] BYREF

  v6 = a3;
  v7 = a4;
  VIDMM_DEVICE::UnreferenceAllocationList(a2, a3, a4, a6);
  for ( i = &v6[v7]; v6 != i; ++v6 )
  {
    v11 = *v6;
    v12 = **(_QWORD **)*v6;
    if ( (a5 & 2) != 0 )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v12 + 296));
      *(_BYTE *)(v12 + 83) = 1;
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 296));
    }
    v13 = *((_BYTE *)v11 + 25) & 1;
    if ( !((unsigned int)v13 | *((_DWORD *)v11 + 38)) && !*((_DWORD *)v11 + 39) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 41);
      memset(v17, 0, 0x58uLL);
      v14 = (_QWORD **)((char *)v11 + 8);
      LODWORD(v17[0]) = 207;
      v17[2] = v11;
      LODWORD(v17[4]) = a5;
      v15 = dword_1C0076538 || (*(_DWORD *)((*v14)[1] + 112LL) & 1) != 0;
      VIDMM_GLOBAL::QueueDeferredCommand(
        this,
        (struct VIDMM_PAGING_QUEUE *)((*v14)[11] + 176LL * (*(_DWORD *)(v12 + 68) & 0x3F)),
        (struct _VIDMM_DEFERRED_COMMAND *)v17,
        v15,
        0LL);
    }
    if ( (byte_1C00769C1 & 0x10) != 0 )
    {
      LODWORD(v16) = *((_DWORD *)v11 + 38);
      McTemplateK0pq_EtwWriteTransfer(v13, &EventVidMmEvict, v9, v11, v16);
    }
  }
}

/*
 * XREFs of ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C00E0038
 * Callers:
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C002D898 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001310 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0004050 (VidSchiReleaseSyncObjectReference.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0011AEC (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x1C002DC94 (-DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE_COMMAND_UPDATEGPUVA::~VIDMM_DEVICE_COMMAND_UPDATEGPUVA(
        VIDMM_DEVICE_COMMAND_UPDATEGPUVA *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  char *v3; // rcx
  __int64 i; // rdi
  __int64 v5; // rax
  VIDMM_GLOBAL *v6; // rcx
  bool v7; // zf
  unsigned int v8; // edx
  _QWORD **v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]

  v3 = (char *)*((_QWORD *)this + 9);
  if ( v3 )
    VidSchiReleaseSyncObjectReference(v3, a2);
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
      VIDMM_ALLOC::DecrementPagingPacketReferenceCount(*(VIDMM_ALLOC **)(*((_QWORD *)this + 8) + 8 * i));
    operator delete(*((void **)this + 8));
  }
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    if ( *(_QWORD *)v5 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)(*(_QWORD *)v5 + 56LL), 0);
      DXGPUSHLOCK::AcquireExclusive(v13);
      v7 = *((_QWORD *)this + 14) == 0LL;
      v14 = 2;
      if ( !v7 )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v6, (struct _LIST_ENTRY *)this + 8);
      if ( *((_QWORD *)this + 15) )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v6, (struct _LIST_ENTRY *)((char *)this + 152));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    }
    KeReleaseSemaphore((PRKSEMAPHORE)(*((_QWORD *)this + 11) + 24LL), 0, 1, 0);
  }
  operator delete(*((void **)this + 3));
  v9 = (_QWORD **)((char *)this + 96);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 == v9 )
      break;
    if ( (_QWORD **)v10[1] != v9 || (v11 = (_QWORD *)*v10, *(_QWORD **)(*v10 + 8LL) != v10) )
      __fastfail(3u);
    *v9 = v11;
    v11[1] = v9;
    v10[1] = 0LL;
    *v10 = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v10 - 1), v8);
  }
}

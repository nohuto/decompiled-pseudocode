/*
 * XREFs of ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x18025AF20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB254 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x1801C7780 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x180256B28 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x180256D48 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x180257038 (-ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___ @ 0x18025A780 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___.c)
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x18025AC5C (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicClient::FrameUpdate(CHolographicClient *this, unsigned int a2, DWORD a3, int a4)
{
  struct CHolographicClient *v4; // r15
  unsigned int v9; // ebx
  CHolographicExclusiveView **v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  void *v14; // rcx
  char v15; // si
  signed int v16; // edi
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  CHolographicClient *v20; // [rsp+70h] [rbp+8h] BYREF

  v4 = (CHolographicClient *)((char *)this - 16);
  v20 = (CHolographicClient *)((char *)this - 16);
  v9 = 0;
  CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___(
    *((_QWORD *)this + 31),
    &v20);
  v10 = (CHolographicExclusiveView **)((char *)this + 184);
  v11 = *((_QWORD *)this + 23);
  if ( v11 )
  {
    if ( *(_DWORD *)(v11 + 64) == a4 )
      goto LABEL_14;
    if ( !*(_BYTE *)(v11 + 75) )
      CHolographicExclusiveView::DeactivateView((CHolographicExclusiveView *)v11, v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 23);
  }
  v12 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v12);
      if ( *(_DWORD *)(v13 + 64) == a4 )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *((_DWORD *)this + 20) )
        goto LABEL_14;
    }
    if ( v13 && (*(_BYTE *)(v13 + 75) || CHolographicExclusiveView::ActivateView((CHolographicExclusiveView *)v13, v4)) )
      Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)this + 23, v13);
  }
LABEL_14:
  if ( !*v10 || *((_BYTE *)*v10 + 75) )
    goto LABEL_27;
  v14 = (void *)*((_QWORD *)this + 30);
  v18 = 0LL;
  v19 = 0LL;
  v15 = 0;
  v16 = WaitForSingleObject(v14, a3);
  if ( !v16 )
  {
    if ( *((_BYTE *)*v10 + 72) )
      v15 = CHolographicExclusiveView::ProcessExclusiveSurfaceUpdate(*v10, a2, (struct EXCLUSIVE_SURFACE_UPDATE *)&v18);
    if ( !v15 )
      goto LABEL_22;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 1) + 112LL))(*((_QWORD *)this + 1), &v18);
  }
  if ( v16 > 0 )
  {
    v9 = (unsigned __int16)v16 | 0x80070000;
    goto LABEL_24;
  }
LABEL_22:
  v9 = v16;
LABEL_24:
  if ( !v16 && !v15 )
    v9 = 1;
LABEL_27:
  CHolographicClient::DoTextureUpdates(v4);
  return v9;
}

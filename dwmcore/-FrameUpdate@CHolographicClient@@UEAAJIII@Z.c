__int64 __fastcall CHolographicClient::FrameUpdate(CHolographicClient *this, unsigned int a2, DWORD a3, int a4)
{
  struct CHolographicClient *v4; // r14
  int v9; // ebx
  CHolographicExclusiveView **v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  void *v14; // rcx
  char v15; // di
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  CHolographicClient *v19; // [rsp+70h] [rbp+8h] BYREF

  v4 = (CHolographicClient *)((char *)this - 16);
  v19 = (CHolographicClient *)((char *)this - 16);
  v9 = 0;
  CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___(
    *((_QWORD *)this + 31),
    &v19);
  v10 = (CHolographicExclusiveView **)((char *)this + 184);
  v11 = *((_QWORD *)this + 23);
  if ( v11 )
  {
    if ( *(_DWORD *)(v11 + 72) == a4 )
      goto LABEL_14;
    if ( !*(_BYTE *)(v11 + 83) )
      CHolographicExclusiveView::DeactivateView((CHolographicExclusiveView *)v11, v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 23);
  }
  v12 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v12);
      if ( *(_DWORD *)(v13 + 72) == a4 )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *((_DWORD *)this + 20) )
        goto LABEL_14;
    }
    if ( v13 && (*(_BYTE *)(v13 + 83) || CHolographicExclusiveView::ActivateView((CHolographicExclusiveView *)v13, v4)) )
      Microsoft::WRL::ComPtr<CHolographicExclusiveView>::operator=((__int64 *)this + 23, v13);
  }
LABEL_14:
  if ( *v10 && !*((_BYTE *)*v10 + 83) )
  {
    v14 = (void *)*((_QWORD *)this + 30);
    v17 = 0LL;
    v18 = 0LL;
    v15 = 0;
    v9 = WaitForSingleObject(v14, a3);
    if ( v9 )
    {
      if ( v9 > 0 )
      {
        v9 = (unsigned __int16)v9 | 0x80070000;
        goto LABEL_25;
      }
    }
    else
    {
      if ( *((_BYTE *)*v10 + 80) )
        v15 = CHolographicExclusiveView::ProcessExclusiveSurfaceUpdate(
                *v10,
                a2,
                (struct EXCLUSIVE_SURFACE_UPDATE *)&v17);
      if ( v15 )
        (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 1) + 112LL))(*((_QWORD *)this + 1), &v17);
    }
    if ( !v9 )
      v9 = v15 == 0;
  }
LABEL_25:
  CHolographicClient::DoTextureUpdates(v4);
  return (unsigned int)v9;
}

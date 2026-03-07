void __fastcall DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutWorkItem(
        PVOID IoObject,
        volatile signed __int32 *Context,
        PIO_WORKITEM IoWorkItem)
{
  unsigned int v4; // r15d
  void *v5; // rbx
  signed __int32 v6; // eax
  __int64 v7; // r14
  int v8; // r8d
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // esi
  __int64 v12; // r8
  __int64 v13; // rcx
  VIDPN_MGR *v14; // rbx
  __int64 v15; // rax
  struct _IO_WORKITEM *v16; // rcx
  unsigned __int8 v17; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v18[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v20[10]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[144]; // [rsp+90h] [rbp-70h] BYREF

  v4 = 0;
  v17 = 0;
  v5 = 0LL;
  v6 = _InterlockedCompareExchange(Context + 38, 0, 5);
  if ( ((v6 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v6 != -1 )
    {
      if ( v6 != 5 )
        WdLogSingleEntry2(7LL, *(_QWORD *)Context, v6);
      return;
    }
    goto LABEL_25;
  }
  v7 = *(_QWORD *)Context;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, *(struct DXGADAPTER *const *)Context, 0LL);
  v9 = (int)COREADAPTERACCESS::AcquireExclusive((__int64)v21, (unsigned int)(v8 + 2));
  v10 = _InterlockedCompareExchange(Context + 38, 0, 5);
  v11 = v10;
  if ( ((v10 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v10 != -1 && v10 != 5 )
    {
      v12 = v10;
      v13 = 7LL;
LABEL_9:
      WdLogSingleEntry2(v13, v7, v12);
    }
  }
  else
  {
    if ( (int)v9 < 0 )
    {
      v12 = v9;
      v13 = 2LL;
      goto LABEL_9;
    }
    v14 = *(VIDPN_MGR **)(*(_QWORD *)(v7 + 2920) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v19, (__int64)v14);
    v15 = *((_QWORD *)Context + 1);
    v18[0] = 0;
    v4 = *(_DWORD *)(v15 + 24);
    VIDPN_MGR::HandleLinkTrainingTimeout(v14, v4, v11 == 2, v18, &v17);
    if ( v18[0] )
    {
      if ( v11 != 2 )
        WdLogSingleEntry0(1LL);
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(*((DMMVIDEOPRESENTTARGET **)Context + 1), 0);
    }
    v5 = *(void **)(v7 + 216);
    if ( v5 )
    {
      ObfReferenceObject(*(PVOID *)(v7 + 216));
    }
    else
    {
      WdLogSingleEntry0(1LL);
      v17 = 0;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v19 + 40));
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
  if ( v17 )
  {
    memset(v20, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v20[1]);
    v20[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v20[3]) = 64;
    LOBYTE(v20[6]) = -1;
    WdLogSingleEntry2(7LL, v4, *(_QWORD *)Context);
    DpiPollSingleDisplayChild((__int64)v5, v4, (__int64)v20);
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v11 == -1 )
  {
LABEL_25:
    if ( *(_QWORD *)Context )
      DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)Context);
    v16 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 18);
    if ( v16 )
      IoFreeWorkItem(v16);
    operator delete((void *)Context);
  }
}

void __fastcall HandleUnblockUEFIFrameBufferRanges(PVOID IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGADAPTER *v11; // rsi
  _QWORD *v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  unsigned __int64 v19; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v20[144]; // [rsp+40h] [rbp-B8h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *Context, &v19);
  v11 = v6;
  if ( v6 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v6, 0LL);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20, 0LL);
    DXGADAPTER::ReleaseReference(v11);
    if ( v13 >= 0 )
    {
      if ( !*((_QWORD *)v11 + 366) )
        WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
      (*(void (__fastcall **)(_QWORD, struct _LUID *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 366) + 760LL) + 8LL)
                                                     + 1168LL))(
        *(_QWORD *)(*((_QWORD *)v11 + 366) + 768LL),
        Context + 1);
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v18[3] = v11;
      v18[4] = Context->HighPart;
      v18[5] = Context->LowPart;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    v12[3] = 0LL;
    v12[4] = Context->HighPart;
    v12[5] = Context->LowPart;
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}

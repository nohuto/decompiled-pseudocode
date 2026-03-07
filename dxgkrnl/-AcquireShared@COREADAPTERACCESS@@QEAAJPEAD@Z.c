__int64 __fastcall COREADAPTERACCESS::AcquireShared(COREADAPTERACCESS *this, char *a2)
{
  char *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8

  v2 = (char *)this + 72;
  if ( *((_BYTE *)this + 96) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v2, 0LL, 0LL);
  v5 = *((_QWORD *)v2 + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 184) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v5 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, "g", v7, 72LL);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)v2 + 2) + 48LL), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)v2 + 2), 0LL);
  }
  *((_QWORD *)v2 + 4) = 0LL;
  v2[24] = 1;
  if ( *(_DWORD *)(*((_QWORD *)this + 11) + 200LL) == 1 )
  {
    if ( *((_QWORD *)this + 3) == *((_QWORD *)this + 11)
      || (COREACCESS::AcquireShared((COREADAPTERACCESS *)((char *)this + 8), a2),
          *(_DWORD *)(*((_QWORD *)this + 3) + 200LL) == 1) )
    {
      *((_BYTE *)this + 1) = 1;
      return 0LL;
    }
    COREACCESS::Release((COREADAPTERACCESS *)((char *)this + 8));
  }
  COREACCESS::Release((COREACCESS *)v2);
  return 3221226166LL;
}

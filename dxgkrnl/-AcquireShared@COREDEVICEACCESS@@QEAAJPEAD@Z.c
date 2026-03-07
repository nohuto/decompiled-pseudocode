__int64 __fastcall COREDEVICEACCESS::AcquireShared(COREDEVICEACCESS *this, char *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // r10

  if ( *((_BYTE *)this + 144) )
  {
    COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)this + 72), 0LL);
    if ( *(_DWORD *)(*((_QWORD *)this + 11) + 200LL) != 1 )
      goto LABEL_13;
  }
  if ( *((_BYTE *)this + 32) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)this + 8, 0LL, 0LL);
  v4 = *((_QWORD *)this + 3);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 184) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v4 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, "g", v6, 72LL);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 3) + 48LL), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)this + 3), a2);
  }
  *((_QWORD *)this + 5) = 0LL;
  if ( a2 )
  {
    if ( (int)RtlStringCbCopyA((char *)this + 48, 0x11uLL, a2) >= 0 )
      *((_QWORD *)this + 5) = v8;
  }
  *((_BYTE *)this + 32) = 1;
  if ( *(_DWORD *)(*((_QWORD *)this + 17) + 608LL) == 1 )
    return 0LL;
  COREACCESS::Release((COREDEVICEACCESS *)((char *)this + 8));
  if ( *((_BYTE *)this + 144) )
LABEL_13:
    COREACCESS::Release((COREDEVICEACCESS *)((char *)this + 72));
  return 3221226166LL;
}

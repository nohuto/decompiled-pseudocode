void __fastcall COREACCESS::AcquireShared(COREACCESS *this, char *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r10

  if ( *((_BYTE *)this + 24) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
  v4 = *((_QWORD *)this + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 184) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v4 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, "g", v6, 72LL);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 2) + 48LL), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)this + 2), a2);
  }
  *((_QWORD *)this + 4) = 0LL;
  if ( a2 && (int)RtlStringCbCopyA((char *)this + 40, 0x11uLL, a2) >= 0 )
    *((_QWORD *)this + 4) = v7;
  *((_BYTE *)this + 24) = 1;
}

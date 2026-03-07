void __fastcall VidSchiNodePerfTracingThread(struct _VIDSCH_NODE *a1)
{
  VidSchiGpuPerfTracing(a1);
  *((_DWORD *)a1 + 736) = 0;
}

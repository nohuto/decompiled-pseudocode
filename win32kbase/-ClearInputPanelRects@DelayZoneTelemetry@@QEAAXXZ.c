void __fastcall DelayZoneTelemetry::ClearInputPanelRects(DelayZoneTelemetry *this)
{
  char *v1; // rdi
  char *v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  char **v5; // rcx

  v1 = (char *)this + 12288;
  v2 = (char *)*((_QWORD *)this + 1536);
  while ( v2 != v1 )
  {
    v3 = *(_QWORD *)v2;
    v4 = v2;
    v2 = (char *)v3;
    v5 = (char **)*((_QWORD *)v4 + 1);
    if ( *(char **)(v3 + 8) != v4 || *v5 != v4 )
      __fastfail(3u);
    *v5 = (char *)v3;
    *(_QWORD *)(v3 + 8) = v5;
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  }
}

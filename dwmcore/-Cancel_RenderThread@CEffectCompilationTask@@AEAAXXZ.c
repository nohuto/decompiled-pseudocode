void __fastcall CEffectCompilationTask::Cancel_RenderThread(CEffectCompilationTask *this)
{
  struct _TP_WORK *v2; // rcx
  CEffectCompilationService *v3; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    WaitForThreadpoolWorkCallbacks(v2, 1);
    CloseThreadpoolWork(*((PTP_WORK *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  v3 = (CEffectCompilationService *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 16) = 1;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v3, this, 1);
}

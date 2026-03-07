struct CProcessAttribution *__fastcall CProcessAttributionManager::GetNullProcessAttribution(
        CProcessAttributionManager *this)
{
  int v3; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CProcessAttribution *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( dword_1803E6ED0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1803E6ED0);
    if ( dword_1803E6ED0 == -1 )
    {
      v3 = CProcessAttributionManager::CreateProcessAttribution(
             this,
             0xFFFFFFFF,
             (const struct CProcessAttributionManager::ProcessAttributionRecord *)&unk_1803E3370,
             0,
             &v5);
      if ( v3 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v3, retaddr);
      qword_1803E2E50 = (__int64)v5;
      Init_thread_footer(&dword_1803E6ED0);
    }
  }
  return (struct CProcessAttribution *)qword_1803E2E50;
}

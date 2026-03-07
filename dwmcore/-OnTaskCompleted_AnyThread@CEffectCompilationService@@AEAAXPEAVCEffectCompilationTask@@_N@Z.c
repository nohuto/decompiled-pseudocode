void __fastcall CEffectCompilationService::OnTaskCompleted_AnyThread(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2,
        char a3)
{
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( !*((_BYTE *)this + 72) )
  {
    v6 = *((_DWORD *)this + 26);
    v7 = 0LL;
    if ( v6 )
    {
      do
      {
        if ( *(struct CEffectCompilationTask **)(*((_QWORD *)this + 10) + 8 * v7) == a2 )
          break;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < v6 );
      if ( (unsigned int)v7 < v6 )
      {
        if ( (unsigned int)v7 >= *((_DWORD *)this + 19) )
        {
          v8 = *((unsigned int *)this + 19);
          v9 = *((_QWORD *)this + 10);
          v10 = (unsigned int)v7;
          v11 = *(_QWORD *)(v9 + 8 * v7);
          *(_QWORD *)(v9 + 8 * v10) = *(_QWORD *)(v9 + 8 * v8);
          *(_QWORD *)(v9 + 8 * v8) = v11;
          v7 = (unsigned int)++*((_DWORD *)this + 19);
        }
        if ( a3 )
        {
          DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((char *)this + 80, v7);
          --*((_DWORD *)this + 19);
        }
        SetEvent(*((HANDLE *)this + 3));
      }
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
}

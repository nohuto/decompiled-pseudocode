void __fastcall DirectComposition::CConnection::OnProcessDestruction(struct DirectComposition::CProcessData *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edx
  struct HDCOMPOSITIONCONNECTION__ *v8; // rcx
  struct _ERESOURCE *v9; // rcx
  void *v10; // rdx
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)a1);
  if ( DefaultConnection )
  {
    if ( *((_QWORD *)DefaultConnection + 34) == PsGetCurrentProcess(v3, v2, v5, v6) )
    {
      v11 = 0LL;
      DirectComposition::CConnection::SetBlurredWallpaperSurface(DefaultConnection, 0LL, &v11);
    }
    DirectComposition::CConnection::Release(DefaultConnection, v7);
  }
  v8 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)a1 + 2);
  if ( v8 )
    DirectComposition::CConnection::DestroyHandle(v8);
  v9 = (struct _ERESOURCE *)*((_QWORD *)a1 + 4);
  if ( v9 )
  {
    ExDeleteResourceLite(v9);
    v10 = (void *)*((_QWORD *)a1 + 4);
    if ( v10 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v10);
  }
}

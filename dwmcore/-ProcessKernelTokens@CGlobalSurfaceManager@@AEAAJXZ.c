__int64 __fastcall CGlobalSurfaceManager::ProcessKernelTokens(CGlobalSurfaceManager *this)
{
  int v1; // ebx
  const struct DWM_MMTASK **v3; // rsi
  char v4; // al
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  CMmcssTask *v12; // rcx
  signed int LastError; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  __int128 v17; // [rsp+38h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v16 = *((_QWORD *)this + 16);
  v17 = 0LL;
  if ( !*((_BYTE *)this + 144) )
  {
    while ( 1 )
    {
      SetLastError(0);
      if ( !ResetEvent(*((HANDLE *)this + 16)) )
        break;
      if ( !*((_BYTE *)this + 144) )
      {
        v3 = (const struct DWM_MMTASK **)((char *)g_pComposition + 336);
        v18 = (struct _RTL_CRITICAL_SECTION *)((char *)g_pComposition + 336);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pComposition + 336));
        if ( CMmcssTask::AreEqualMmTask((LPCWCH)v3[5], *((LPCWCH *)this + 53)) )
        {
          v4 = *((_BYTE *)v3 + 80);
          if ( *((_BYTE *)this + 464) != v4 )
          {
            v12 = (CGlobalSurfaceManager *)((char *)this + 384);
            if ( v4 )
              CMmcssTask::Apply(v12, 0);
            else
              CMmcssTask::Revert(v12);
          }
        }
        else
        {
          v10 = CMmcssTask::Set((struct _RTL_CRITICAL_SECTION *)((char *)this + 384), v3[5], *((_BYTE *)v3 + 80));
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x77u, 0LL);
        }
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v18);
        v5 = CGlobalSurfaceManager::EnsureAdapterInfo(this);
        v1 = v5;
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x16Cu, 0LL);
          WaitForSingleObject(*((HANDLE *)this + 16), 0xFFFFFFFF);
        }
        else
        {
          v7 = *((_QWORD *)this + 61) - *((_QWORD *)this + 60);
          *(_QWORD *)&v17 = *((_QWORD *)this + 60);
          DWORD2(v17) = -1431655765 * (v7 >> 3);
          v8 = NtTokenManagerThread(&v16);
          if ( v8 < 0 )
          {
            v1 = v8 | 0x10000000;
            MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8 | 0x10000000, 0x17Bu, 0LL);
          }
          std::vector<CGlobalSurfaceManager::AdapterInfo>::clear((char *)this + 480);
        }
        if ( !*((_BYTE *)this + 144) )
          continue;
      }
      return (unsigned int)v1;
    }
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    if ( v1 >= 0 )
      v1 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v1, 0x15Bu, 0LL);
  }
  return (unsigned int)v1;
}

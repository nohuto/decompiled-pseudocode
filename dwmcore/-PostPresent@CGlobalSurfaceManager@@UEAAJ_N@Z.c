__int64 __fastcall CGlobalSurfaceManager::PostPresent(CGlobalSurfaceManager *this, char a2)
{
  char *v3; // rcx
  __int64 i; // rdi
  int v5; // edi
  __int64 j; // rbp
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rcx
  HANDLE hEvent; // [rsp+50h] [rbp+8h] BYREF

  v3 = (char *)this + 152;
  if ( *((_QWORD *)v3 + 26) )
  {
    if ( ++*((_DWORD *)v3 + 54) <= 8u )
    {
      if ( !a2 )
        goto LABEL_2;
    }
    else
    {
      ++*((_DWORD *)v3 + 56);
    }
    CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)v3);
  }
LABEL_2:
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 88); i = (unsigned int)(i + 1) )
  {
    v12 = *((_QWORD *)this + 41);
    hEvent = 0LL;
    if ( (int)OpenDxBltEvent(*(_QWORD *)(v12 + 8 * i), &hEvent) >= 0 )
    {
      SetEvent(hEvent);
      CloseHandle(hEvent);
    }
  }
  *((_DWORD *)this + 88) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 328, 8u);
  v5 = 0;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 80); j = (unsigned int)(j + 1) )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 37) + 8 * j);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x17Eu, 0LL);
    if ( !v5 || v5 >= 0 && v11 < 0 )
      v5 = v11;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  *((_DWORD *)this + 80) = 0;
  return (unsigned int)v5;
}

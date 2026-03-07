__int64 __fastcall NtDCompositionEnableMMCSS(int a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  DirectComposition::CConnection *DefaultConnection; // rsi
  struct DirectComposition::CProcessData *v6; // rdi
  int v7; // eax
  bool v8; // cl
  int v9; // eax
  unsigned int v10; // edx

  v2 = 0;
  KeEnterCriticalRegion();
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v3);
  if ( !DefaultConnection )
  {
    v2 = -1073741790;
    goto LABEL_14;
  }
  v6 = DirectComposition::CProcessData::Current(v4);
  ExAcquirePushLockExclusiveEx((char *)v6 + 40, 0LL);
  *((_BYTE *)v6 + 48) = 1;
  v7 = *((_DWORD *)v6 + 16);
  if ( a1 )
  {
    if ( v7 != -1 )
    {
      v8 = v7 == 0;
      v9 = v7 + 1;
LABEL_7:
      *((_DWORD *)v6 + 16) = v9;
      if ( v8 )
      {
        v2 = DirectComposition::CConnection::EnableMMCSS(DefaultConnection, a1);
        if ( v2 < 0 )
        {
          if ( a1 )
            --*((_DWORD *)v6 + 16);
        }
      }
      goto LABEL_12;
    }
  }
  else if ( v7 )
  {
    v9 = v7 - 1;
    v8 = v9 == 0;
    goto LABEL_7;
  }
  v2 = -1073741823;
LABEL_12:
  DirectComposition::CPushLockCriticalSection::Release((struct DirectComposition::CProcessData *)((char *)v6 + 40));
  DirectComposition::CConnection::Release(DefaultConnection, v10);
LABEL_14:
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}

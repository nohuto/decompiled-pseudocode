__int64 __fastcall DirectComposition::CConnection::Create(void *a1, struct HDCOMPOSITIONCONNECTION__ **a2)
{
  struct DirectComposition::CProcessData *v4; // rax
  struct DirectComposition::CProcessData *v5; // rdi
  struct _ERESOURCE *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // edx
  DirectComposition::CConnection *v13; // rsi
  int v14; // ebx
  struct HDCOMPOSITIONCONNECTION__ *v15; // rax
  struct DirectComposition::CConnection *v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = 0LL;
  v4 = DirectComposition::CProcessData::Current((__int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = (struct _ERESOURCE *)*((_QWORD *)v4 + 4);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v6, 1u);
    if ( *((_QWORD *)v5 + 3) || !UserIsCurrentProcessDwm(v8, v7, v9, v10) )
    {
      v14 = -1073741790;
    }
    else
    {
      v11 = DirectComposition::CConnection::ReclaimSessionGlobalConnection(&v17);
      v13 = v17;
      v14 = v11;
      if ( v11 < 0 || (v14 = DirectComposition::CConnection::Connect(v17, a1), v14 < 0) )
      {
        if ( v13 )
          DirectComposition::CConnection::Release(v13, v12);
      }
      else
      {
        *((_QWORD *)v5 + 2) += 4LL;
        v15 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)v5 + 2);
        *((_QWORD *)v5 + 3) = v13;
        *a2 = v15;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)v5 + 4));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v14;
}

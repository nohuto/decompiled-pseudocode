void __fastcall HANDLELOCK::vUnlock(HANDLELOCK *this)
{
  GdiHandleManager *v2; // rsi
  __int64 v3; // rcx
  GdiHandleManager *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  __int64 v9; // r10
  _DWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // r9d
  GdiHandleEntryTable *v15; // rcx

  v2 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 8008LL);
  v4 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v3) + 24) + 8008LL);
  v5 = GdiHandleManager::DecodeIndex(v4, **(_DWORD **)this & 0xFFFFFF);
  v6 = *((_QWORD *)v4 + 2);
  v7 = v5;
  v8 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v8 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16)
    || (v5 >= v8
      ? (v9 = *(_QWORD *)(v6 + 8LL * (((v5 - v8) >> 16) + 1) + 8), v7 = -65536 * ((v5 - v8) >> 16) - v8 + v5)
      : (v9 = *(_QWORD *)(v6 + 8)),
        v7 >= *(_DWORD *)(v9 + 20)) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                     + 16LL * (unsigned __int8)v7
                     + 8);
  }
  v11 = GdiHandleManager::DecodeIndex(v2, (unsigned __int16)*v10 | (*v10 >> 8) & 0xFF0000);
  v12 = *((_QWORD *)v2 + 2);
  v13 = v11;
  v14 = *(_DWORD *)(v12 + 2056);
  if ( v11 < v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
  {
    if ( v11 >= v14 )
    {
      v15 = *(GdiHandleEntryTable **)(v12 + 8LL * (((v11 - v14) >> 16) + 1) + 8);
      v13 = -65536 * ((v11 - v14) >> 16) - v14 + v11;
    }
    else
    {
      v15 = *(GdiHandleEntryTable **)(v12 + 8);
    }
    GdiHandleEntryTable::ReleaseEntryLock(v15, v13);
  }
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}

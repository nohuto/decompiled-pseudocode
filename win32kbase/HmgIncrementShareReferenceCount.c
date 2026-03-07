void __fastcall HmgIncrementShareReferenceCount(int *a1)
{
  unsigned int v1; // eax
  struct OBJECT *EntryObject; // rbx
  unsigned int v3; // edx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v5; // rcx
  _DWORD *v6; // rsi
  char v7; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v8; // rbp
  __int64 v9; // rcx
  GdiHandleManager *v10; // rbp
  GdiHandleManager *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r9d
  GdiHandleEntryTable *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // r9d
  GdiHandleEntryTable *v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-28h] BYREF
  int v23; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  EntryObject = 0LL;
  v3 = *a1;
  v22 = 0LL;
  v23 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v22, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v23 )
  {
    v6 = (_DWORD *)v22;
    v7 = *(_BYTE *)(v22 + 14);
    if ( v7 == 5 )
    {
      v8 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 85);
      v5 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(SGDGetSessionState(v5) + 24);
      if ( v8 )
      {
        v5 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)*((_QWORD *)v5 + 1005);
        if ( v5 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v5, v8, 1);
      }
    }
    else if ( v7 == 16 )
    {
      TrackObjectReferenceIncrement(2LL, *((_QWORD *)a1 + 17));
    }
    ++a1[2];
    v9 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
    v10 = *(GdiHandleManager **)(v9 + 8008);
    v11 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v9) + 24) + 8008LL);
    v12 = GdiHandleManager::DecodeIndex(v11, *v6 & 0xFFFFFF);
    v13 = *((_QWORD *)v11 + 2);
    v14 = v12;
    v15 = *(_DWORD *)(v13 + 2056);
    if ( v12 < v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
    {
      if ( v12 >= v15 )
      {
        v16 = *(GdiHandleEntryTable **)(v13 + 8LL * (((v12 - v15) >> 16) + 1) + 8);
        v14 = -65536 * ((v12 - v15) >> 16) - v15 + v12;
      }
      else
      {
        v16 = *(GdiHandleEntryTable **)(v13 + 8);
      }
      EntryObject = GdiHandleEntryTable::GetEntryObject(v16, v14);
    }
    v17 = GdiHandleManager::DecodeIndex(
            v10,
            (unsigned __int16)*(_DWORD *)EntryObject | (*(_DWORD *)EntryObject >> 8) & 0xFF0000);
    v18 = *((_QWORD *)v10 + 2);
    v19 = v17;
    v20 = *(_DWORD *)(v18 + 2056);
    if ( v17 < v20 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
    {
      if ( v17 >= v20 )
      {
        v21 = *(GdiHandleEntryTable **)(v18 + 8LL * (((v17 - v20) >> 16) + 1) + 8);
        v19 = -65536 * ((v17 - v20) >> 16) - v20 + v17;
      }
      else
      {
        v21 = *(GdiHandleEntryTable **)(v18 + 8);
      }
      GdiHandleEntryTable::ReleaseEntryLock(v21, v19);
    }
    KeLeaveCriticalRegion();
  }
}

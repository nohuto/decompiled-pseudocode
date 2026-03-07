void __fastcall XDCOBJ::vAltUnlockFast(XDCOBJ *this)
{
  __int64 v1; // rbx
  HDC v2; // rbp
  __int64 v3; // rcx
  _DWORD *v4; // r14
  char v5; // al
  char v6; // si
  __int64 v7; // rcx
  GdiHandleManager *v8; // r15
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // rdx
  unsigned int v17; // eax
  GdiHandleEntryDirectory *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+38h] [rbp-40h]
  unsigned int v23; // [rsp+80h] [rbp+8h] BYREF
  GdiHandleEntryTable *v24; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)this;
  v21 = 0LL;
  v22 = 0;
  v2 = *(HDC *)v1;
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v21,
    (unsigned __int16)*(_QWORD *)v1 | ((unsigned int)*(_QWORD *)v1 >> 8) & 0xFF0000,
    0,
    0,
    1);
  if ( !v22 )
    return;
  v4 = (_DWORD *)v21;
  v5 = *(_BYTE *)(v21 + 14);
  v6 = *(_BYTE *)(v21 + 15) & 8;
  if ( v5 == 5 )
  {
    v19 = *(_QWORD *)(v1 + 680);
    v20 = 0LL;
  }
  else
  {
    if ( v5 != 16 )
      goto LABEL_4;
    v19 = *(_QWORD *)(v1 + 136);
    v20 = 2LL;
  }
  TrackObjectReferenceDecrement(v20, v19);
LABEL_4:
  --*(_DWORD *)(v1 + 8);
  v7 = *(_QWORD *)(SGDGetSessionState(v3) + 24);
  v8 = *(GdiHandleManager **)(v7 + 8008);
  v9 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 8008LL);
  v10 = GdiHandleManager::DecodeIndex(v9, *v4 & 0xFFFFFF);
  v11 = *((_QWORD *)v9 + 2);
  v12 = v10;
  v13 = *(_DWORD *)(v11 + 2056);
  if ( v10 >= v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
    goto LABEL_15;
  if ( v10 >= v13 )
    v14 = ((v10 - v13) >> 16) + 1;
  else
    v14 = 0LL;
  v15 = *(_QWORD *)(v11 + 8 * v14 + 8);
  if ( (_DWORD)v14 )
    v12 = ((1 - (_DWORD)v14) << 16) - v13 + (unsigned int)v12;
  if ( (unsigned int)v12 >= *(_DWORD *)(v15 + 20) )
LABEL_15:
    v16 = 0LL;
  else
    v16 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
  v17 = GdiHandleManager::DecodeIndex(v8, (unsigned __int16)*v16 | (*v16 >> 8) & 0xFF0000);
  v18 = (GdiHandleEntryDirectory *)*((_QWORD *)v8 + 2);
  v24 = 0LL;
  v23 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v18, v17, &v24, &v23) )
    GdiHandleEntryTable::ReleaseEntryLock(v24, v23);
  KeLeaveCriticalRegion();
  if ( v6 )
    GrepDeleteDC(v2, 0x2000000u);
}

__int64 __fastcall HmgDecrementShareReferenceCountEx(int *a1, _DWORD *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp
  unsigned int v6; // edx
  _BOOL8 v7; // rcx
  int v8; // esi
  unsigned __int16 *v10; // rsi
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned int v18; // r9d
  __int64 v19; // r8
  _DWORD *v20; // rdx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // r10
  unsigned __int16 *v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+38h] [rbp-30h]

  if ( a2 )
    *a2 = 0;
  v4 = *a1;
  v5 = 0;
  v6 = *a1;
  v25 = 0LL;
  v26 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, (unsigned __int16)v4 | (v6 >> 8) & 0xFF0000, 0, 0, 1);
  v8 = v26;
  if ( v26 )
  {
    v10 = v25;
    if ( a2 )
    {
      v7 = (*((_BYTE *)v25 + 15) & 8) != 0;
      *a2 = v7;
    }
    v11 = *((_BYTE *)v10 + 14);
    v5 = a1[2];
    if ( v11 == 5 )
    {
      TrackObjectReferenceDecrement(
        0LL,
        *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a1 + 85));
    }
    else if ( v11 == 16 )
    {
      TrackObjectReferenceDecrement(
        2LL,
        *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a1 + 17));
    }
    --a1[2];
    v12 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
    v13 = *(_QWORD *)(v12 + 8008);
    v14 = SGDGetSessionState(v12);
    v15 = *(_DWORD *)v10 & 0xFFFFFF;
    v16 = *(_QWORD *)(*(_QWORD *)(v14 + 24) + 8008LL);
    if ( v15 >= 0x10000 )
    {
      if ( *(_DWORD *)v16 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*(GdiHandleEntryDirectory **)(v16 + 16), *v10, 1)
             + 13) == HIWORD(v15) )
          v15 = (unsigned __int16)v15;
      }
      else
      {
        v15 = *v10;
      }
    }
    v17 = *(_QWORD *)(v16 + 16);
    v18 = *(_DWORD *)(v17 + 2056);
    if ( v15 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16)
      || (v15 >= v18
        ? (v19 = *(_QWORD *)(v17 + 8LL * (((v15 - v18) >> 16) + 1) + 8), v15 += -65536 * ((v15 - v18) >> 16) - v18)
        : (v19 = *(_QWORD *)(v17 + 8)),
          v15 >= *(_DWORD *)(v19 + 20)) )
    {
      v20 = 0LL;
    }
    else
    {
      v20 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                       + 16LL * (unsigned __int8)v15
                       + 8);
    }
    v21 = (unsigned __int16)*v20 | (*v20 >> 8) & 0xFF0000;
    if ( v21 >= 0x10000 )
    {
      if ( *(_DWORD *)v13 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v13 + 16),
                                    (unsigned __int16)*v20,
                                    1)
             + 13) == HIWORD(v21) )
          v21 = (unsigned __int16)v21;
      }
      else
      {
        v21 = (unsigned __int16)*v20;
      }
    }
    v22 = *(_QWORD *)(v13 + 16);
    v23 = *(_DWORD *)(v22 + 2056);
    if ( v21 < v23 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
    {
      if ( v21 >= v23 )
      {
        v24 = *(_QWORD *)(v22 + 8LL * (((v21 - v23) >> 16) + 1) + 8);
        v21 += -65536 * ((v21 - v23) >> 16) - v23;
      }
      else
      {
        v24 = *(_QWORD *)(v22 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v24 + 24LL * v21 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * ((unsigned __int64)v21 >> 8)) + 16LL * (unsigned __int8)v21,
        0LL);
      KeLeaveCriticalRegion();
    }
    v8 = 0;
    v26 = 0;
    v25 = 0LL;
    KeLeaveCriticalRegion();
  }
  if ( v8 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v25);
  return v5;
}

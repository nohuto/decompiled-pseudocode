void __fastcall DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(struct HOBJ__ **a1)
{
  struct OBJECT *v2; // rsi
  struct HOBJ__ *v3; // r14
  int v4; // ebp
  int v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  bool v8; // zf
  _DWORD *v9; // rdi
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned int v17; // r9d
  __int64 v18; // r8
  _DWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  unsigned int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // bl
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // [rsp+30h] [rbp-38h] BYREF
  int v38; // [rsp+38h] [rbp-30h]

  if ( !a1 )
    return;
  v2 = 0LL;
  v3 = *a1;
  LOWORD(v4) = 0;
  v5 = (unsigned __int16)*a1;
  v6 = (unsigned int)*a1 >> 8;
  v37 = 0LL;
  v38 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v37, v5 | v6 & 0xFF0000, 0, 0, 1);
  v8 = v38 == 0;
  if ( v38 )
  {
    v9 = (_DWORD *)v37;
    v4 = *((_DWORD *)a1 + 2);
    v10 = *(_BYTE *)(v37 + 14);
    if ( v10 == 5 )
    {
      v35 = a1[85];
      v36 = 0LL;
    }
    else
    {
      if ( v10 != 16 )
        goto LABEL_5;
      v35 = a1[17];
      v36 = 2LL;
    }
    TrackObjectReferenceDecrement(v36, v35);
LABEL_5:
    --*((_DWORD *)a1 + 2);
    v11 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
    v12 = *(_QWORD *)(v11 + 8008);
    v13 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v11) + 24) + 8008LL);
    v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v13, *v9 & 0xFFFFFF);
    v15 = *(_QWORD *)(v13 + 16);
    v16 = v14;
    v17 = *(_DWORD *)(v15 + 2056);
    if ( v14 >= v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16)
      || (v14 >= v17
        ? (v18 = *(_QWORD *)(v15 + 8LL * (((v14 - v17) >> 16) + 1) + 8), v16 = -65536 * ((v14 - v17) >> 16) - v17 + v14)
        : (v18 = *(_QWORD *)(v15 + 8)),
          (unsigned int)v16 >= *(_DWORD *)(v18 + 20)) )
    {
      v19 = 0LL;
    }
    else
    {
      v19 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
    }
    v20 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v12,
            (unsigned __int16)*v19 | (*v19 >> 8) & 0xFF0000u);
    v21 = *(_QWORD *)(v12 + 16);
    v22 = v20;
    v23 = *(_DWORD *)(v21 + 2056);
    if ( v20 < v23 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
    {
      if ( v20 >= v23 )
      {
        v24 = *(_QWORD *)(v21 + 8LL * (((v20 - v23) >> 16) + 1) + 8);
        v22 = -65536 * ((v20 - v23) >> 16) - v23 + v20;
      }
      else
      {
        v24 = *(_QWORD *)(v21 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v24 + 24 * v22 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * (v22 >> 8)) + 16LL * (unsigned __int8)v22,
        0LL);
      KeLeaveCriticalRegion();
    }
    v38 = 0;
    v37 = 0LL;
    KeLeaveCriticalRegion();
    v8 = 1;
  }
  if ( !v8 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v37);
  if ( (unsigned __int16)v4 == 1 )
  {
    v37 = 0LL;
    v38 = 0;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v37, v3, 10);
    if ( v38 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v25) + 24) + 8008LL);
      v27 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v26, *(_DWORD *)v37 & 0xFFFFFF);
      v28 = *(_QWORD *)(v26 + 16);
      v29 = v27;
      v30 = *(_DWORD *)(v28 + 2056);
      v31 = v30 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16);
      if ( v27 < (unsigned int)v31 )
      {
        if ( v27 >= v30 )
        {
          v31 = ((v27 - v30) >> 16) + 1;
          v32 = *(_QWORD *)(v28 + 8 * v31 + 8);
          v29 = -65536 * (((unsigned int)v29 - v30) >> 16) - v30 + (unsigned int)v29;
        }
        else
        {
          v32 = *(_QWORD *)(v28 + 8);
        }
        if ( (unsigned int)v29 < *(_DWORD *)(v32 + 20) )
        {
          v31 = 2LL * (unsigned __int8)v29;
          v2 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * (v29 >> 8))
                                 + 16LL * (unsigned __int8)v29
                                 + 8);
        }
      }
      v33 = SGDGetSessionState(v31);
      v34 = *((_BYTE *)GdiHandleManager::GetEntryFromObject(
                         *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v33 + 24) + 8008LL),
                         v2)
            + 15);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v37);
      if ( (v34 & 2) != 0 && qword_1C02D57E0 )
        qword_1C02D57E0(v3, 0LL);
    }
    if ( v38 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v37);
  }
}

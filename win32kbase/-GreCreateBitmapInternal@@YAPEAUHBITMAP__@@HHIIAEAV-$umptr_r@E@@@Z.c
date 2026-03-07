__int64 __fastcall GreCreateBitmapInternal(__int64 a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v6; // eax
  int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // edx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v13; // rcx
  _DWORD *v14; // r15
  char v15; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  __int64 v25; // r9
  _DWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // r9
  unsigned int v29; // edx
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  GdiHandleEntryTable *v32; // r9
  __int64 v34; // [rsp+68h] [rbp-11h] BYREF
  char v35; // [rsp+70h] [rbp-9h]
  int v36; // [rsp+74h] [rbp-5h]
  __int64 v37; // [rsp+78h] [rbp-1h] BYREF
  int v38; // [rsp+80h] [rbp+7h]
  _DWORD v39[4]; // [rsp+90h] [rbp+17h] BYREF
  __int64 v40; // [rsp+A0h] [rbp+27h]
  __int64 v41; // [rsp+A8h] [rbp+2Fh]
  int v42; // [rsp+D8h] [rbp+5Fh] BYREF

  v5 = 0LL;
  v6 = a4 * a3;
  if ( (int)a1 <= 0 || (unsigned int)a1 > 0x7FFFFFF || a2 <= 0 || a3 > 0x20 || a4 > 0x20 || v6 > 0x20 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v39[3] = 0;
    v41 = 1LL;
    v39[1] = a1;
    v39[2] = a2;
    v40 = 0LL;
    if ( v6 > 1 )
    {
      v7 = 4;
      if ( v6 <= 4 )
      {
        v7 = 2;
      }
      else if ( v6 <= 8 )
      {
        v7 = 3;
      }
      else if ( v6 > 0x10 )
      {
        v7 = (v6 > 0x18) + 5;
      }
    }
    else
    {
      v7 = 1;
      v40 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6024LL);
    }
    v39[0] = v7;
    v34 = 0LL;
    v35 = 0;
    v36 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v34, (struct _DEVBITMAPINFO *)v39, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( v34 )
    {
      v8 = a5;
      *(_DWORD *)(v34 + 112) |= 0x4000000u;
      if ( *(_QWORD *)v8 )
      {
        v42 = 0;
        if ( qword_1C02D5E48 )
        {
          if ( (int)qword_1C02D5E48() >= 0 && qword_1C02D5E50 )
            qword_1C02D5E50(
              *(_QWORD *)(v34 + 32),
              (unsigned int)(*(_DWORD *)(v8 + 8) - *(_DWORD *)(v8 + 16)),
              *(_QWORD *)v8 + *(_QWORD *)(v8 + 16),
              &v42);
        }
      }
      if ( v7 != 1 )
      {
        *(_DWORD *)(v34 + 112) |= 0x800000u;
        *(_DWORD *)(v34 + 112) |= 0x200u;
      }
      v35 |= 1u;
      v9 = *(_QWORD *)(v34 + 32);
      v10 = HmgShareLockCheck(v9, 5);
      if ( v10 )
      {
        if ( (v9 & 0x800000) == 0 )
          HmgSetOwner(v9, -2147483646, 5);
        v11 = *(_DWORD *)v10;
        v12 = *(_DWORD *)v10;
        v37 = 0LL;
        v38 = 0;
        HANDLELOCK::vLockHandle((HANDLELOCK *)&v37, (unsigned __int16)v11 | (v12 >> 8) & 0xFF0000, 0, 0, 1);
        if ( v38 )
        {
          v14 = (_DWORD *)v37;
          v15 = *(_BYTE *)(v37 + 14);
          if ( v15 == 5 )
          {
            v16 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v10 + 680);
            v13 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(SGDGetSessionState(v13) + 24);
            if ( v16 )
            {
              v13 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)*((_QWORD *)v13 + 1005);
              if ( v13 )
                NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v13, v16, 0);
            }
          }
          else if ( v15 == 16 )
          {
            TrackObjectReferenceDecrement(
              2LL,
              *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v10 + 136));
          }
          --*(_DWORD *)(v10 + 8);
          v17 = *(_QWORD *)(SGDGetSessionState(v13) + 24);
          v18 = *(_QWORD *)(v17 + 8008);
          v19 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v17) + 24) + 8008LL);
          v20 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v19, *v14 & 0xFFFFFF);
          v21 = *(_QWORD *)(v19 + 16);
          v22 = v20;
          v23 = *(_DWORD *)(v21 + 2056);
          if ( v20 >= v23 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
            goto LABEL_50;
          if ( v20 >= v23 )
            v24 = ((v20 - v23) >> 16) + 1;
          else
            v24 = 0;
          v25 = *(_QWORD *)(v21 + 8LL * v24 + 8);
          if ( v24 )
            v22 = ((1 - v24) << 16) - v23 + v20;
          if ( (unsigned int)v22 >= *(_DWORD *)(v25 + 20) )
LABEL_50:
            v26 = 0LL;
          else
            v26 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * (v22 >> 8)) + 16LL * (unsigned __int8)v22 + 8);
          v27 = GdiHandleManager::DecodeIndex(
                  (GdiHandleEntryDirectory **)v18,
                  (unsigned __int16)*v26 | (*v26 >> 8) & 0xFF0000u);
          v28 = *(_QWORD *)(v18 + 16);
          v29 = v27;
          v30 = *(_DWORD *)(v28 + 2056);
          if ( v27 < v30 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16) )
          {
            if ( v27 >= v30 )
              v31 = ((v27 - v30) >> 16) + 1;
            else
              v31 = 0;
            v32 = *(GdiHandleEntryTable **)(v28 + 8LL * v31 + 8);
            if ( v31 )
              v29 = ((1 - v31) << 16) - v30 + v27;
            GdiHandleEntryTable::ReleaseEntryLock(v32, v29);
          }
          KeLeaveCriticalRegion();
        }
      }
      v5 = *(_QWORD *)(v34 + 32);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v34);
    return v5;
  }
}

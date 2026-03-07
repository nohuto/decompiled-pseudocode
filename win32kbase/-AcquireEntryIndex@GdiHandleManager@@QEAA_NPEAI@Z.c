char __fastcall GdiHandleManager::AcquireEntryIndex(GdiHandleManager *this, unsigned int *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rcx
  char v8; // r10
  unsigned int v9; // esi
  __int64 v10; // rsi
  __int64 v11; // r11
  unsigned int v12; // edx
  GdiHandleEntryTable *v13; // rsi
  __int64 v14; // r9
  __int64 v16; // rax
  __int64 *v17; // r13
  unsigned __int64 v18; // r12
  _QWORD *v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // edi
  GdiHandleEntryTable *v22; // rbp
  GdiHandleEntryTable *v23; // rcx
  void *v24; // rax
  signed __int32 v25[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+50h] [rbp+8h] BYREF

  while ( *((_DWORD *)this + 1) < *((_DWORD *)this + 2) )
  {
    v4 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)v4 )
      return 0;
    v5 = *(_QWORD *)(v4 + 8);
    v26 = 0;
    if ( *(_DWORD *)(v5 + 16) < *(_DWORD *)(v5 + 8) )
    {
      v6 = *(unsigned int *)(v5 + 12);
      if ( (_DWORD)v6 != -1 )
      {
        v7 = *(unsigned int *)(*(_QWORD *)v5 + 24 * v6);
        *(_DWORD *)(v5 + 12) = v7;
LABEL_6:
        ++*(_DWORD *)(v5 + 16);
        goto LABEL_7;
      }
      LODWORD(v6) = *(_DWORD *)(v5 + 20);
      v17 = *(__int64 **)(v5 + 24);
      v7 = *v17;
      v18 = 8 * ((unsigned __int64)(unsigned int)v6 >> 8);
      if ( *(_QWORD *)(*v17 + v18)
        || (*(_QWORD *)(v18 + *v17) = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                        gpLeakTrackingAllocator,
                                        0x104uLL,
                                        0x1000uLL,
                                        0x636C6547u),
            v7 = *v17,
            *(_QWORD *)(*v17 + v18)) )
      {
        v19 = (_QWORD *)(*(_QWORD *)(v18 + v7) + 16LL * (unsigned __int8)v6);
        *v19 = 0LL;
        v19[1] = 0LL;
        _InterlockedOr(v25, 0);
        ++*(_DWORD *)(v5 + 20);
        goto LABEL_6;
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)(v4 + 8) + 16LL) != *(_DWORD *)(*(_QWORD *)(v4 + 8) + 8LL) )
      return 0;
    LOWORD(v20) = *(_WORD *)(v4 + 2);
    v21 = 1;
    if ( (unsigned __int16)v20 <= 1u )
    {
LABEL_28:
      if ( (_WORD)v20 == 256 )
      {
        *(_BYTE *)v4 = 1;
        return 0;
      }
      *(_QWORD *)(v4 + 8LL * *(unsigned __int16 *)(v4 + 2) + 8) = GdiHandleEntryTable::_Create(0x10000u, 1);
      v23 = *(GdiHandleEntryTable **)(v4 + 8LL * *(unsigned __int16 *)(v4 + 2) + 8);
      if ( !v23 )
        return 0;
      GdiHandleEntryTable::AcquireEntryIndex(v23, &v26);
      v21 = *(unsigned __int16 *)(v4 + 2);
      *(_WORD *)(v4 + 2) = v21 + 1;
    }
    else
    {
      while ( 1 )
      {
        v22 = *(GdiHandleEntryTable **)(v4 + 8LL * v21 + 8);
        if ( GdiHandleEntryTable::AcquireEntryIndex(v22, &v26) )
          break;
        if ( *((_DWORD *)v22 + 4) != *((_DWORD *)v22 + 2) )
          return 0;
        v20 = *(unsigned __int16 *)(v4 + 2);
        if ( ++v21 >= v20 )
          goto LABEL_28;
      }
    }
    LODWORD(v6) = v26 + *(_DWORD *)(v4 + 2056) + ((v21 + 0xFFFF) << 16);
LABEL_7:
    v8 = 0;
    v9 = *((_DWORD *)this + 1) + 1;
    *((_DWORD *)this + 1) = v9;
    if ( v9 > *(_DWORD *)this )
    {
      *(_DWORD *)this = v9;
      v16 = SGDGetSessionState(v7);
      v8 = 1;
      *(_DWORD *)(*(_QWORD *)(v16 + 24) + 1948LL) = v9;
    }
    v10 = *((_QWORD *)this + 2);
    v11 = (unsigned __int16)v6;
    v12 = *(_DWORD *)(v10 + 2056);
    if ( (unsigned __int16)v6 >= v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
    {
      v14 = 0LL;
    }
    else
    {
      if ( (unsigned __int16)v6 >= v12 )
      {
        v13 = *(GdiHandleEntryTable **)(v10 + 8LL * ((((unsigned __int16)v6 - v12) >> 16) + 1) + 8);
        v11 = -65536 * (((unsigned __int16)v6 - v12) >> 16) - v12 + (unsigned __int16)v6;
      }
      else
      {
        v13 = *(GdiHandleEntryTable **)(v10 + 8);
      }
      if ( (unsigned int)v11 < *((_DWORD *)v13 + 5) || GdiHandleEntryTable::GetEntryObject(v13, v11) )
        v14 = *(_QWORD *)v13 + 24 * v11;
    }
    if ( (unsigned int)v6 < 0x10000 )
    {
      if ( v8 || *(_DWORD *)this > 0x10000u )
        *(_BYTE *)(v14 + 13) = 0;
      else
        LODWORD(v6) = ((unsigned __int8)++*(_BYTE *)(v14 + 13) << 16) + v6;
LABEL_18:
      *a2 = v6;
      return 1;
    }
    if ( *(unsigned __int8 *)(v14 + 13) != WORD1(v6) )
      goto LABEL_18;
    if ( *((_QWORD *)this + 3) )
      goto LABEL_40;
    v24 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
            gpLeakTrackingAllocator,
            0x104uLL,
            0x40000uLL,
            0x636D6847u);
    *((_QWORD *)this + 3) = v24;
    if ( v24 )
    {
      memset(v24, 0, 0x40000uLL);
LABEL_40:
      *(_DWORD *)(*((_QWORD *)this + 3) + 4LL * (unsigned __int16)v6) = v6;
    }
  }
  return 0;
}

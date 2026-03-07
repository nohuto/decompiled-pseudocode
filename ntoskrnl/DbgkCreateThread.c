__int64 __fastcall DbgkCreateThread(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  char v4; // r12
  __int64 v5; // rax
  int i; // esi
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rax
  void *v11; // rax
  __int16 v12; // ax
  char v13; // al
  __int64 v14; // rax
  char v15; // [rsp+20h] [rbp-1A8h]
  PVOID Object; // [rsp+28h] [rbp-1A0h] BYREF
  int v17; // [rsp+30h] [rbp-198h]
  __int64 v18; // [rsp+38h] [rbp-190h]
  __int64 v19; // [rsp+40h] [rbp-188h]
  __int128 v20; // [rsp+48h] [rbp-180h] BYREF
  __int128 v21; // [rsp+58h] [rbp-170h]
  __int128 v22; // [rsp+68h] [rbp-160h]
  __int64 v23; // [rsp+78h] [rbp-150h]
  _QWORD *v24; // [rsp+80h] [rbp-148h]
  __int64 v25; // [rsp+88h] [rbp-140h]
  _QWORD v26[34]; // [rsp+90h] [rbp-138h] BYREF

  v19 = a1;
  memset(v26, 0, sizeof(v26));
  v2 = *(_QWORD *)(a1 + 184);
  v18 = v2;
  v24 = (_QWORD *)(v2 + 1408);
  if ( !*(_QWORD *)(v2 + 1408)
    || ((v12 = *(_WORD *)(v2 + 2412), v12 == 332) || v12 == 452 ? (v13 = 1) : (v13 = 0), v15 = 1, !v13) )
  {
    v15 = 0;
  }
  _m_prefetchw((const void *)(v2 + 1124));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v2 + 1124), 0x400001u);
  v4 = result;
  v17 = result;
  if ( (result & 0x400000) == 0 && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask[0] & 4) != 0) )
  {
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    Object = 0LL;
    BYTE8(v20) = 3;
    *(_QWORD *)&v21 = *(_QWORD *)(v2 + 1312);
    *(_QWORD *)&v22 = 0LL;
    v5 = RtlImageNtHeader(v21);
    if ( v5 )
      *(_QWORD *)&v22 = *(unsigned int *)(v5 + 80);
    DWORD2(v21) = 0;
    DWORD2(v22) = 0;
    PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)v2, (unsigned __int64 *)&Object);
    PsCallImageNotifyRoutines(*(__int128 **)(v2 + 1472), v2, &v20, (__int64)Object);
    result = ObfDereferenceObject(Object);
    for ( i = 0; ; ++i )
    {
      LODWORD(Object) = i;
      if ( i >= 7 )
        break;
      result = (__int64)PsQuerySystemDllInfo(i);
      v7 = result;
      v25 = result;
      if ( result )
      {
        if ( i <= 0
          || (*(_DWORD *)result & 8) != 0 && *v24 && (result = PsWow64GetProcessNtdllType(v2), i == (_DWORD)result) )
        {
          DWORD2(v20) = 3;
          *(_QWORD *)&v21 = *(_QWORD *)(v7 + 24);
          *(_QWORD *)&v22 = 0LL;
          v8 = RtlImageNtHeader(*(_QWORD *)(v7 + 24));
          if ( v8 )
            *(_QWORD *)&v22 = *(unsigned int *)(v8 + 80);
          DWORD2(v21) = 0;
          DWORD2(v22) = 0;
          v9 = PspReferenceSystemDll(*(signed __int64 **)(v7 - 8));
          v10 = MiSectionControlArea(v9);
          v11 = (void *)MiReferenceControlAreaFileWithTag(v10, 0x746C6644u);
          Object = v11;
          if ( v9 )
          {
            ObFastDereferenceObject(*(signed __int64 **)(v7 - 8), v9, 0x64537350u);
            v11 = Object;
          }
          PsCallImageNotifyRoutines((__int128 *)(v7 + 8), v2, &v20, (__int64)v11);
          result = ObfDereferenceObject(Object);
        }
      }
    }
  }
  if ( *(_QWORD *)(v2 + 1400) )
  {
    if ( (v4 & 1) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 1376) & 4) == 0 )
      {
        memset(v26, 0, 0x40uLL);
        v26[7] = *(_QWORD *)(a1 + 1312);
        v26[0] = 0x800400018LL;
        LODWORD(v26[5]) = 1;
        DbgkpSendApiMessage((PVOID)v2);
      }
    }
    else
    {
      memset(v26, 0, 0x60uLL);
      v26[7] = DbgkpSectionToFileHandle(*(_QWORD *)(v2 + 1304));
      v26[8] = *(_QWORD *)(v2 + 1312);
      v26[11] = 0LL;
      v26[9] = 0LL;
      v14 = RtlImageNtHeader(*(_QWORD *)(v2 + 1312));
      if ( v14 )
      {
        if ( v15 )
          v26[11] = (unsigned int)(*(_DWORD *)(v14 + 40) + *(_DWORD *)(v14 + 52));
        else
          v26[11] = *(_QWORD *)(v14 + 48) + *(unsigned int *)(v14 + 40);
        v26[9] = *(_QWORD *)(v14 + 12);
      }
      v26[0] = 0x800600038LL;
      LODWORD(v26[5]) = 2;
      DbgkpSendApiMessage((PVOID)v2);
      if ( v26[7] )
        ObCloseHandle((HANDLE)v26[7], 0);
      DbgkSendSystemDllMessages(0LL);
    }
    result = *(unsigned int *)(a1 + 1380);
    if ( (result & 0x10) != 0 )
      return DbgkpPostModuleMessages(v2, a1, 0LL);
  }
  return result;
}

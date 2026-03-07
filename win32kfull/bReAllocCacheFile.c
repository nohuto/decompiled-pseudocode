__int64 __fastcall bReAllocCacheFile(__int64 a1)
{
  int v1; // esi
  unsigned int v2; // edi
  __int64 v3; // rbx
  int *v4; // r9
  _DWORD *v5; // r8
  __int64 v7; // rcx
  int v8; // ebp
  int v9; // esi
  unsigned int v10; // r14d
  int v11; // r15d
  unsigned int v12; // eax
  const unsigned __int16 *v13; // rcx
  int *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // rcx

  v1 = a1;
  v2 = 0;
  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v5 = *(_DWORD **)(v3 + 19392);
  if ( (v5[4] & 4) != 0 )
    return 0LL;
  v7 = (unsigned int)(v5[8] - v5[10]);
  v8 = *(_DWORD *)(*(_QWORD *)v5 + 24LL);
  v9 = ((v7 + v1 + 7) & 0xFFFFFFF8) + 0x2000;
  v10 = v5[6] - *(_QWORD *)v5;
  v11 = v9 + v8;
  if ( *(_QWORD *)v5 )
    vUnmapFontCacheFile(v7);
  v12 = (unsigned int)bMapFileRetainHandle(
                        (const unsigned __int16 *)v7,
                        (struct _FILEVIEW *)(*(_QWORD *)(v3 + 19392) + 48LL),
                        v11,
                        v4);
  v15 = *(_QWORD *)(v3 + 19392);
  if ( v12 )
  {
    v2 = 1;
    *(_QWORD *)v15 = *(_QWORD *)(v15 + 56);
    *(_DWORD *)(**(_QWORD **)(v3 + 19392) + 24LL) = v11;
    *(_DWORD *)(**(_QWORD **)(v3 + 19392) + 32LL) += v9;
    v16 = *(_QWORD *)(v3 + 19392);
    v17 = *(_DWORD *)(v16 + 32) - *(_DWORD *)(v16 + 24);
    *(_QWORD *)(v16 + 24) = *(_QWORD *)v16 + v10;
    *(_QWORD *)(*(_QWORD *)(v3 + 19392) + 32LL) = *(_QWORD *)(*(_QWORD *)(v3 + 19392) + 24LL) + v17;
    *(_QWORD *)(*(_QWORD *)(v3 + 19392) + 40LL) = *(_QWORD *)(*(_QWORD *)(v3 + 19392) + 24LL)
                                                + *(unsigned int *)(**(_QWORD **)(v3 + 19392) + 28LL)
                                                + (unsigned __int64)*(unsigned int *)(**(_QWORD **)(v3 + 19392) + 32LL);
  }
  else
  {
    v18 = (unsigned int)bMapFileRetainHandle(v13, (struct _FILEVIEW *)(v15 + 48), v8, v14);
    v19 = *(_QWORD *)(v3 + 19392);
    if ( v18 )
    {
      *(_QWORD *)v19 = *(_QWORD *)(v19 + 56);
      *(_DWORD *)(*(_QWORD *)(v3 + 19392) + 20LL) = 1;
      *(_DWORD *)(*(_QWORD *)(v3 + 19392) + 16LL) |= 6u;
    }
    else
    {
      *(_DWORD *)(v19 + 16) |= 1u;
    }
  }
  return v2;
}

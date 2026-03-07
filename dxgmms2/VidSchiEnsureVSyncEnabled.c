void __fastcall VidSchiEnsureVSyncEnabled(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  char v5; // r12
  unsigned int v6; // r15d
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r10
  unsigned int v15; // r9d
  bool v16; // zf
  int v17; // eax
  char v18; // cl
  int v19; // eax
  __int64 v20; // r13
  unsigned int v21; // r8d
  void (__fastcall *v22)(_QWORD, _QWORD); // rax
  void (__fastcall *v23)(_QWORD); // rax

  if ( *(_QWORD *)(a1 + 96) )
  {
    v5 = 1;
    v20 = *(_QWORD *)(a2 + 32);
    v4 = v20;
    v6 = *(_DWORD *)(a1 + 160);
    if ( *(_DWORD *)(a1 + 48) == 3 )
    {
      v21 = *(_DWORD *)(*(_QWORD *)(v20 + 8LL * *(unsigned int *)(a1 + 160) + 3200) + 44328LL);
      if ( v21 != -1 )
      {
        v22 = *(void (__fastcall **)(_QWORD, _QWORD))(v20 + 3056);
        if ( v22 )
          v22(*(_QWORD *)(v20 + 3120), v21);
      }
    }
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = 0;
    v6 = *(_DWORD *)(a1 + 160);
  }
  if ( (*(_DWORD *)(a1 + 272) & 0x1000000) != 0
    && *(_DWORD *)(*(_QWORD *)(v4 + 8LL * *(unsigned int *)(a1 + 388) + 3200) + 44328LL) != -1 )
  {
    v23 = *(void (__fastcall **)(_QWORD))(v4 + 3056);
    if ( v23 )
      v23(*(_QWORD *)(v4 + 3120));
  }
  if ( *(_DWORD *)(a1 + 48) == 3 && *(_DWORD *)(a1 + 160) != -1 )
  {
    v12 = *(_QWORD *)(a1 + 88);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 104);
    else
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 40LL) + 8LL);
    v14 = *(_QWORD *)(v13 + 32);
    if ( (*(_DWORD *)(a1 + 72) & 0x800000) != 0 )
      v15 = ((unsigned __int16)*(_DWORD *)(a1 + 872) | (unsigned __int16)(*(_DWORD *)(a1 + 872) >> 10)) & 0x3FF;
    else
      v15 = (1 << *(_DWORD *)(v14 + 152)) - 1;
    v16 = !_BitScanForward((unsigned int *)&v17, v15);
    v18 = -1;
    if ( !v16 )
      v18 = v17;
    while ( v15 )
    {
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(*(_QWORD *)(v14 + 8LL * *(unsigned int *)(a1 + 160) + 3200) + 288LL * v18 + 192),
        1u);
      v19 = 1 << v18;
      v18 = -1;
      v15 &= ~v19;
      v16 = !_BitScanForward((unsigned int *)&v19, v15);
      if ( !v16 )
        v18 = v19;
    }
  }
  v7 = *(_DWORD *)(a1 + 72);
  if ( (v7 & 0x1000) == 0 || (v7 & 0x400) != 0 && (v7 & 0x800) == 0 || v6 == -1 )
    return;
  if ( (v7 & 0x40000) != 0 )
  {
    if ( (v7 & 0x1000000) == 0 )
      return;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 736));
    IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)v4, v6);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 1572));
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 4LL * v6 + 1508));
    goto LABEL_40;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 4LL * v6 + 1444));
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 32LL)
                             + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 32) + 4LL))
                 + 8LL * v6
                 + 88);
  if ( (*(_DWORD *)(a1 + 72) & 0x80u) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 8LL * v6 + 6480) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  v9 = *(_DWORD *)(a1 + 72);
  if ( (v9 & 4) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 736));
    IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)v4, v6);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 1572));
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v11 + 1508));
    if ( !v5 )
      return;
LABEL_40:
    if ( (*(_DWORD *)(a2 + 48) & 2) != 0 || *(int *)(a1 + 392) >= 4 || *(_BYTE *)(v4 + 156) )
      goto LABEL_49;
    return;
  }
  if ( v5 && !*(_DWORD *)(a1 + 48) && (v9 & 0x4000) != 0 && (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    v10 = v6;
LABEL_49:
    VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v4, v10);
  }
}

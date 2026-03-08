/*
 * XREFs of bDeleteAllFlEntry @ 0x1C0116094
 * Callers:
 *     GreEnableEUDC @ 0x1C00B77A8 (GreEnableEUDC.c)
 * Callees:
 *     ?IsConcurrentEUDCOperationInProgress@@YA_NAEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C00B918C (-IsConcurrentEUDCOperationInProgress@@YA_NAEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C00DEFF0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     vLinkEudcPFEs @ 0x1C011177C (vLinkEudcPFEs.c)
 *     bUnloadEudcFont @ 0x1C01162DC (bUnloadEudcFont.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1C0125504 (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 */

__int64 __fastcall bDeleteAllFlEntry(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rdi
  int v3; // r14d
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 *v6; // r11
  int v7; // r9d
  _QWORD *v8; // r8
  _QWORD *v9; // rdx
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  int v14; // eax
  _QWORD *v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rcx
  __int128 v20; // xmm0
  _QWORD *v21; // [rsp+20h] [rbp-20h] BYREF
  _QWORD **v22; // [rsp+28h] [rbp-18h]
  __int128 v23; // [rsp+30h] [rbp-10h] BYREF

  v22 = &v21;
  v21 = &v21;
  v23 = 0LL;
  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  GreAcquireSemaphore(*(_QWORD *)(v1 + 13272));
  if ( IsConcurrentEUDCOperationInProgress((struct Gre::Full::SESSION_GLOBALS *)v1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
    GreReleaseSemaphoreInternal(*(_QWORD *)(v1 + 13272));
    return 0LL;
  }
  vUnlinkAllEudcRFONTsAndPFEs((Gre::Base *)1);
  vUnlinkAllEudcFromRFONTList();
  if ( *(_QWORD *)(v1 + 13320) || *(_QWORD *)(v1 + 13328) )
  {
    v20 = *(_OWORD *)(v1 + 13320);
    *(_OWORD *)(v1 + 13320) = 0LL;
    ++*(_DWORD *)(v1 + 13896);
    v23 = v20;
    *(_WORD *)(v1 + 13336) = 0;
  }
  v2 = *(_QWORD **)(v1 + 13912);
  if ( v2 == (_QWORD *)(v1 + 13912) )
    goto LABEL_23;
  v3 = *(_DWORD *)(v1 + 13904);
  do
  {
    v4 = *v2;
    v5 = v2;
    v6 = v2;
    v7 = 0;
    v2 = (_QWORD *)*v2;
    v8 = (_QWORD *)v5[2];
    if ( v8 == v5 + 2 )
    {
LABEL_15:
      if ( *(_QWORD **)(v4 + 8) != v5 || (v13 = (_QWORD *)v5[1], (_QWORD *)*v13 != v5) )
LABEL_31:
        __fastfail(3u);
      *v13 = v4;
      *(_QWORD *)(v4 + 8) = v13;
      Win32FreePool(v5);
      --*(_DWORD *)(v1 + 13904);
      continue;
    }
    do
    {
      v9 = v8;
      v8 = (_QWORD *)*v8;
      v10 = *((_DWORD *)v9 + 4);
      if ( v10 )
      {
        if ( v10 != 1 || (*(_DWORD *)(v1 + 13312) & 8) == 0 )
        {
LABEL_36:
          ++v7;
          continue;
        }
      }
      else if ( (*(_DWORD *)(v1 + 13312) & 2) == 0 )
      {
        goto LABEL_36;
      }
      if ( (_QWORD *)v8[1] != v9 )
        goto LABEL_31;
      v11 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v11 != v9 )
        goto LABEL_31;
      *v11 = v8;
      v8[1] = v11;
      v12 = v22;
      if ( *v22 != &v21 )
        goto LABEL_31;
      v9[1] = v22;
      *v9 = &v21;
      *v12 = v9;
      v22 = (_QWORD **)v9;
    }
    while ( v8 != v5 + 2 );
    v4 = *v6;
    if ( !v7 )
      goto LABEL_15;
    if ( *((_DWORD *)v5 + 25) != v7 )
    {
      ++*((_DWORD *)v5 + 26);
      *((_DWORD *)v5 + 25) = v7;
    }
  }
  while ( v2 != (_QWORD *)(v1 + 13912) );
  v14 = *(_DWORD *)(v1 + 13904);
  if ( v3 != v14 )
    ++*(_DWORD *)(v1 + 13900);
  if ( v14 )
    vLinkEudcPFEs(0LL);
LABEL_23:
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v1 + 13272));
  if ( v23 != 0 )
    bUnloadEudcFont(&v23);
  v15 = v21;
  while ( v15 != &v21 )
  {
    v16 = *v15;
    v17 = v15;
    v15 = (_QWORD *)v16;
    if ( *(_QWORD **)(v16 + 8) != v17 )
      goto LABEL_31;
    v18 = (_QWORD *)v17[1];
    if ( (_QWORD *)*v18 != v17 )
      goto LABEL_31;
    *v18 = v16;
    *(_QWORD *)(v16 + 8) = v18;
    bUnloadEudcFont(v17 + 4);
    Win32FreePool(v17);
  }
  return 1LL;
}

/*
 * XREFs of ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C0108808
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C01084CC (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0109E10 (xxxUpdateSystemIconsFromRegistry.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0041464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C0108B80 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 */

void __fastcall zzzSetSystemImage(struct tagCURSOR *a1, struct tagCURSOR *a2)
{
  char v4; // r12
  struct tagCURSOR *v5; // rdi
  int v6; // ecx
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int128 v9; // xmm4
  __int128 v10; // xmm5
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 i; // rax
  struct tagCURSOR *v16; // rdi
  int v17; // r15d
  __int64 v18; // r14
  __int64 v19; // rbx
  int v20; // r14d
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax

  if ( *((_QWORD *)a1 + 3) )
  {
    v4 = 1;
    v5 = a1;
    do
    {
      if ( (*((_DWORD *)v5 + 20) & 8) != 0 )
      {
        v17 = 0;
        if ( *((int *)v5 + 22) > 0 )
        {
          v18 = 0LL;
          do
          {
            v19 = *(_QWORD *)(v18 + *((_QWORD *)v5 + 12));
            HMChangeOwnerProcess(v19, gptiRit);
            *(_QWORD *)(v19 + 24) = 0LL;
            v18 += 8LL;
            ++v17;
          }
          while ( v17 < *((_DWORD *)v5 + 22) );
        }
      }
      if ( v5 == a1 )
      {
        if ( (*((_DWORD *)a1 + 20) & 8) == 0 )
        {
          if ( *((_QWORD *)v5 + 11) )
          {
            GreDecQuotaCount(*((_QWORD *)v5 + 3));
            GreIncQuotaCount(*(_QWORD *)(gptiRit + 424LL));
          }
          if ( *((_QWORD *)v5 + 12) )
          {
            GreDecQuotaCount(*((_QWORD *)v5 + 3));
            GreIncQuotaCount(*(_QWORD *)(gptiRit + 424LL));
          }
          if ( *((_QWORD *)v5 + 16) )
          {
            GreDecQuotaCount(*((_QWORD *)v5 + 3));
            GreIncQuotaCount(*(_QWORD *)(gptiRit + 424LL));
          }
        }
      }
      else
      {
        HMChangeOwnerProcess(v5, gptiRit);
        *((_QWORD *)v5 + 3) = 0LL;
      }
      v5 = (struct tagCURSOR *)*((_QWORD *)v5 + 5);
    }
    while ( v5 );
  }
  else
  {
    v4 = 0;
  }
  v6 = *((_DWORD *)a1 + 37);
  v7 = *(_OWORD *)((char *)a1 + 84);
  v8 = *(_OWORD *)((char *)a1 + 100);
  v9 = *(_OWORD *)((char *)a1 + 116);
  v10 = *(_OWORD *)((char *)a1 + 132);
  *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)((char *)a2 + 84);
  *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)((char *)a2 + 100);
  *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)((char *)a2 + 116);
  *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)((char *)a2 + 132);
  *((_DWORD *)a1 + 37) = *((_DWORD *)a2 + 37);
  *(_OWORD *)((char *)a2 + 84) = v7;
  *(_OWORD *)((char *)a2 + 100) = v8;
  *(_OWORD *)((char *)a2 + 116) = v9;
  *(_OWORD *)((char *)a2 + 132) = v10;
  *((_DWORD *)a2 + 37) = v6;
  v11 = *((_DWORD *)a1 + 20);
  *((_DWORD *)a1 + 20) = v11 ^ (*((_DWORD *)a2 + 20) ^ v11) & 8;
  *((_DWORD *)a2 + 20) ^= (*((_DWORD *)a2 + 20) ^ v11) & 8;
  v12 = *((_DWORD *)a2 + 19);
  *((_DWORD *)a2 + 19) = *((_DWORD *)a1 + 19);
  *((_DWORD *)a1 + 19) = v12;
  v13 = *((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = *((_QWORD *)a2 + 5);
  v14 = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 5) = v13;
  while ( v14 )
  {
    *(_QWORD *)(v14 + 48) = a2;
    v14 = *(_QWORD *)(v14 + 40);
  }
  for ( i = *((_QWORD *)a1 + 6); i; i = *(_QWORD *)(i + 40) )
    *(_QWORD *)(i + 48) = a1;
  if ( v4 )
  {
    v16 = a1;
    do
    {
      if ( v16 == a1 )
      {
        if ( (*((_DWORD *)a1 + 20) & 8) == 0 )
        {
          if ( *((_QWORD *)v16 + 11) )
          {
            GreDecQuotaCount(*(_QWORD *)(gptiRit + 424LL));
            GreIncQuotaCount(*((_QWORD *)v16 + 3));
          }
          if ( *((_QWORD *)v16 + 12) )
          {
            GreDecQuotaCount(*(_QWORD *)(gptiRit + 424LL));
            GreIncQuotaCount(*((_QWORD *)v16 + 3));
          }
          if ( *((_QWORD *)v16 + 16) )
          {
            GreDecQuotaCount(*(_QWORD *)(gptiRit + 424LL));
            GreIncQuotaCount(*((_QWORD *)v16 + 3));
          }
        }
      }
      else
      {
        HMChangeOwnerProcess(v16, gptiCurrent);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
        if ( CurrentProcessWin32Process )
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        *((_QWORD *)v16 + 3) = CurrentProcessWin32Process;
      }
      if ( (*((_DWORD *)v16 + 20) & 8) != 0 )
      {
        v20 = 0;
        if ( *((int *)v16 + 22) > 0 )
        {
          v21 = 0LL;
          do
          {
            v22 = *(_QWORD *)(v21 + *((_QWORD *)v16 + 12));
            HMChangeOwnerProcess(v22, gptiCurrent);
            v21 += 8LL;
            ++v20;
            *(_QWORD *)(v22 + 24) = *((_QWORD *)v16 + 3);
          }
          while ( v20 < *((_DWORD *)v16 + 22) );
        }
      }
      v16 = (struct tagCURSOR *)*((_QWORD *)v16 + 5);
    }
    while ( v16 );
    zzzFixupGlobalCursorWhenChanged(a1);
    _DestroyCursor(a1, 2u);
  }
  zzzFixupGlobalCursorWhenChanged(a2);
}

/*
 * XREFs of ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0108704
 * Callers:
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C01086B4 (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C0109FBC (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 * Callees:
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C003AB4C (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0041464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00DBE14 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     xxxClientCopyImage @ 0x1C0107FC0 (xxxClientCopyImage.c)
 *     xxxClientLoadImage @ 0x1C01080C0 (xxxClientLoadImage.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C0108B80 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z @ 0x1C01A99C0 (-EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x1C01A9B34 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 */

void __fastcall xxxEnsureDpiCursors(struct tagCURSOR *a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  _DWORD *v3; // r14
  struct tagCURSOR *v4; // rdi
  INT v5; // r12d
  int v6; // r13d
  __int64 v7; // rbp
  CCursorSizes *v8; // rsi
  CPushLock *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // esi
  char v13; // r15
  INT v14; // edx
  INT v15; // ebx
  INT v16; // eax
  __int64 v17; // rdx
  __int64 Image; // rax
  struct tagCURSOR *v19; // rbx
  int v20; // edx
  struct tagCURSOR *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+A8h] [rbp+20h]

  v3 = (_DWORD *)((char *)a1 + 80);
  v4 = a1;
  if ( a2 || (*v3 & 8) == 0 )
  {
    if ( a1 )
    {
      if ( (*v3 & 8) != 0 )
        a1 = (struct tagCURSOR *)**((_QWORD **)a1 + 12);
      v5 = *((_DWORD *)a1 + 35);
      v6 = *((_DWORD *)a1 + 36);
    }
    else
    {
      v6 = 0;
      v5 = 0;
    }
    v7 = 0LL;
    v26 = 5LL;
    while ( 1 )
    {
      v8 = gpCursorSizes;
      v9 = (CCursorSizes *)((char *)gpCursorSizes + 64);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v9, 0LL);
      if ( !*(_DWORD *)((char *)v8 + v7 + 24) )
        break;
      v12 = *(_DWORD *)((char *)v8 + v7 + 28);
      if ( !v12 )
        goto LABEL_9;
      v13 = 1;
LABEL_10:
      CPushLock::ReleaseLock(v9, v10, v11);
      if ( v13 )
      {
        if ( !FindDPICursor(v4, v12) )
        {
          v23 = *((_QWORD *)v4 + 11);
          v15 = EngMulDiv(v5, v14, *((_DWORD *)v4 + 19));
          v16 = EngMulDiv(v6 / 2, v12, *((_DWORD *)v4 + 19));
          v17 = a3;
          if ( a2 )
          {
            LODWORD(v17) = a3 | 0x40000;
            Image = (__int64)xxxClientLoadImage((char **)a2, v17, 2u, v15, v16, a3 | 0x40000);
          }
          else
          {
            Image = xxxClientCopyImage(*(_QWORD *)v4, 2, v15, v16, a3 | 0x40000);
          }
          v19 = (struct tagCURSOR *)Image;
          if ( Image )
          {
            if ( *(_QWORD *)(Image + 40)
              || *(_QWORD *)(Image + 48) != Image
              || (*(_DWORD *)(Image + 80) & 0x2000) != 0
              || FindDPICursor(v4, v12)
              || *((_QWORD *)v4 + 11) != v23
              || FindDPICursor(v21, v20) )
            {
              _DestroyCursor(v19, 0);
            }
            else
            {
              v22 = *((_QWORD *)v4 + 3);
              if ( v22 )
              {
                if ( (*v3 & 0x200) == 0 )
                  HMChangeOwnerProcess(v19, *(_QWORD *)(v22 + 320));
              }
              LinkDpiCursor(v4, v19, v12);
              InputTraceLogging::Cursor::EnsureDpiCursor(v19);
              zzzFixupGlobalCursorWhenChanged(v4);
            }
          }
        }
      }
      v7 += 8LL;
      if ( !--v26 )
        return;
    }
    v12 = 0;
LABEL_9:
    v13 = 0;
    goto LABEL_10;
  }
}

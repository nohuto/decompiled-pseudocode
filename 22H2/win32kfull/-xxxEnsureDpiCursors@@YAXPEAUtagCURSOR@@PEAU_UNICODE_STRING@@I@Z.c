/*
 * XREFs of ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0026260
 * Callers:
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C0026210 (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C008C694 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 * Callees:
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C0021768 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     xxxClientCopyImage @ 0x1C0021E40 (xxxClientCopyImage.c)
 *     xxxClientLoadImage @ 0x1C0022330 (xxxClientLoadImage.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C0027440 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002B6EC (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00A4BA4 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z @ 0x1C01A87BC (-EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x1C01A8930 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
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
  unsigned int v10; // esi
  char v11; // r15
  INT v12; // edx
  INT v13; // ebx
  INT v14; // eax
  __int64 v15; // rdx
  __int64 Image; // rax
  struct tagCURSOR *v17; // rbx
  unsigned int v18; // edx
  struct tagCURSOR *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // [rsp+40h] [rbp-48h]
  __int64 v24; // [rsp+A8h] [rbp+20h]

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
    v24 = 5LL;
    while ( 1 )
    {
      v8 = gpCursorSizes;
      v9 = (CCursorSizes *)((char *)gpCursorSizes + 64);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v9, 0LL);
      if ( !*(_DWORD *)((char *)v8 + v7 + 24) )
        break;
      v10 = *(_DWORD *)((char *)v8 + v7 + 28);
      if ( !v10 )
        goto LABEL_9;
      v11 = 1;
LABEL_10:
      CPushLock::ReleaseLock(v9);
      if ( v11 )
      {
        if ( !FindDPICursor(v4, v10) )
        {
          v21 = *((_QWORD *)v4 + 11);
          v13 = EngMulDiv(v5, v12, *((_DWORD *)v4 + 19));
          v14 = EngMulDiv(v6 / 2, v10, *((_DWORD *)v4 + 19));
          v15 = a3;
          if ( a2 )
          {
            LODWORD(v15) = a3 | 0x40000;
            Image = (__int64)xxxClientLoadImage((void **)a2, v15, 2u, v13, v14, a3 | 0x40000);
          }
          else
          {
            Image = xxxClientCopyImage(*(_QWORD *)v4, 2, v13, v14, a3 | 0x40000);
          }
          v17 = (struct tagCURSOR *)Image;
          if ( Image )
          {
            if ( *(_QWORD *)(Image + 40)
              || *(_QWORD *)(Image + 48) != Image
              || (*(_DWORD *)(Image + 80) & 0x2000) != 0
              || FindDPICursor(v4, v10)
              || *((_QWORD *)v4 + 11) != v21
              || FindDPICursor(v19, v18) )
            {
              _DestroyCursor(v17, 0);
            }
            else
            {
              v20 = *((_QWORD *)v4 + 3);
              if ( v20 )
              {
                if ( (*v3 & 0x200) == 0 )
                  HMChangeOwnerProcess(v17, *(_QWORD *)(v20 + 320));
              }
              LinkDpiCursor(v4, v17, v10);
              InputTraceLogging::Cursor::EnsureDpiCursor(v17);
              zzzFixupGlobalCursorWhenChanged((struct tagCURSOR **)v4);
            }
          }
        }
      }
      v7 += 8LL;
      if ( !--v24 )
        return;
    }
    v10 = 0;
LABEL_9:
    v11 = 0;
    goto LABEL_10;
  }
}

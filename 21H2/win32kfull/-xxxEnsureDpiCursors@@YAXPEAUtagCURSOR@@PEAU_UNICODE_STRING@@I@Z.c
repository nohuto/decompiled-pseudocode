/*
 * XREFs of ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00A1E2C
 * Callers:
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C00A1DDC (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C00FDD1C (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00233C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C00A1F0C (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C00A22A4 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     xxxClientLoadImage @ 0x1C00A2F18 (xxxClientLoadImage.c)
 *     xxxClientCopyImage @ 0x1C00A387C (xxxClientCopyImage.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00F4E24 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0104BEC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z @ 0x1C01CF79C (-EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x1C01CF910 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 */

void __fastcall xxxEnsureDpiCursors(struct tagCURSOR *a1, struct _UNICODE_STRING *a2, int a3)
{
  struct tagCURSOR *v3; // rdi
  INT v4; // r15d
  int v5; // r12d
  __int64 v6; // rbp
  __int64 v7; // r13
  CCursorSizes *v8; // rsi
  CPushLock *v9; // rbx
  unsigned int v10; // esi
  char v11; // r14
  INT v12; // edx
  INT v13; // ebx
  INT v14; // eax
  __int64 v15; // rax
  struct tagCURSOR *v16; // rbx
  unsigned int v17; // edx
  struct tagCURSOR *v18; // rcx
  __int64 v19; // rdx
  __int64 v22; // [rsp+98h] [rbp+20h]

  v3 = a1;
  if ( a2 || (*((_DWORD *)a1 + 20) & 8) == 0 )
  {
    if ( a1 )
    {
      if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
        a1 = (struct tagCURSOR *)**((_QWORD **)a1 + 12);
      v4 = *((_DWORD *)a1 + 35);
      v5 = *((_DWORD *)a1 + 36);
    }
    else
    {
      v5 = 0;
      v4 = 0;
    }
    v6 = 0LL;
    v7 = 5LL;
    while ( 1 )
    {
      v8 = gpCursorSizes;
      v9 = (CCursorSizes *)((char *)gpCursorSizes + 64);
      CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
      if ( !*(_DWORD *)((char *)v8 + v6 + 24) )
        break;
      v10 = *(_DWORD *)((char *)v8 + v6 + 28);
      if ( !v10 )
        goto LABEL_9;
      v11 = 1;
LABEL_10:
      CPushLock::ReleaseLock(v9);
      if ( v11 )
      {
        if ( !FindDPICursor(v3, v10) )
        {
          v22 = *((_QWORD *)v3 + 11);
          v13 = EngMulDiv(v4, v12, *((_DWORD *)v3 + 19));
          v14 = EngMulDiv(v5 / 2, v10, *((_DWORD *)v3 + 19));
          v15 = a2
              ? xxxClientLoadImage((_DWORD)a2, a3 | 0x40000u, 2, v13, v14, a3 | 0x40000u)
              : xxxClientCopyImage(*(_QWORD *)v3, 2, v13, v14, a3 | 0x40000u);
          v16 = (struct tagCURSOR *)v15;
          if ( v15 )
          {
            if ( *(_QWORD *)(v15 + 40)
              || *(_QWORD *)(v15 + 48) != v15
              || (*(_DWORD *)(v15 + 80) & 0x2000) != 0
              || FindDPICursor(v3, v10)
              || *((_QWORD *)v3 + 11) != v22
              || FindDPICursor(v18, v17) )
            {
              _DestroyCursor(v16, 0);
            }
            else
            {
              v19 = *((_QWORD *)v3 + 3);
              if ( v19 )
              {
                if ( (*((_DWORD *)v3 + 20) & 0x200) == 0 )
                  HMChangeOwnerProcess(v16, *(_QWORD *)(v19 + 320));
              }
              LinkDpiCursor(v3, v16, v10);
              InputTraceLogging::Cursor::EnsureDpiCursor(v16);
              zzzFixupGlobalCursorWhenChanged(v3);
            }
          }
        }
      }
      v6 += 8LL;
      if ( !--v7 )
        return;
    }
    v10 = 0;
LABEL_9:
    v11 = 0;
    goto LABEL_10;
  }
}

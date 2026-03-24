/*
 * XREFs of ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0024C7C
 * Callers:
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C0024C2C (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C0025B2C (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 * Callees:
 *     xxxClientLoadImage @ 0x1C0022900 (xxxClientLoadImage.c)
 *     xxxClientCopyImage @ 0x1C0023A6C (xxxClientCopyImage.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C0024D48 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C0025108 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C004879C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0103D60 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C010B1D8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z @ 0x1C01D3DFC (-EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x1C01D3F74 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 */

void __fastcall xxxEnsureDpiCursors(struct tagCURSOR *a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  struct tagCURSOR *v4; // rdi
  INT v5; // r14d
  int v6; // r15d
  __int64 v7; // rbp
  __int64 v8; // r12
  CCursorSizes *v9; // rsi
  CPushLock *v10; // rbx
  unsigned int v11; // esi
  INT v12; // edx
  INT v13; // ebx
  INT v14; // eax
  __int64 v15; // rdx
  __int64 Image; // rax
  struct tagCURSOR *v17; // rbx
  unsigned int v18; // edx
  struct tagCURSOR *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // [rsp+88h] [rbp+10h]

  v4 = a1;
  if ( a2 || (*((_DWORD *)a1 + 20) & 8) == 0 )
  {
    if ( a1 )
    {
      if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
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
    v8 = 5LL;
    do
    {
      v9 = gpCursorSizes;
      v10 = (CCursorSizes *)((char *)gpCursorSizes + 64);
      CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
      if ( *(_DWORD *)((char *)v9 + v7 + 24) )
        v11 = *(_DWORD *)((char *)v9 + v7 + 28);
      else
        v11 = 0;
      CPushLock::ReleaseLock(v10);
      if ( v11 )
      {
        if ( !FindDPICursor(v4, v11) )
        {
          v21 = *((_QWORD *)v4 + 11);
          v13 = EngMulDiv(v5, v12, *((_DWORD *)v4 + 19));
          v14 = EngMulDiv(v6 / 2, v11, *((_DWORD *)v4 + 19));
          v15 = a3;
          if ( a2 )
          {
            LODWORD(v15) = a3 | 0x40000;
            Image = (__int64)xxxClientLoadImage(&a2->Length, v15, 2u, v13, v14, a3 | 0x40000);
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
              || FindDPICursor(v4, v11)
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
                if ( (*((_DWORD *)v4 + 20) & 0x200) == 0 )
                  HMChangeOwnerProcess(v17, *(_QWORD *)(v20 + 320));
              }
              LinkDpiCursor(v4, v17, v11);
              InputTraceLogging::Cursor::EnsureDpiCursor(v17);
              zzzFixupGlobalCursorWhenChanged(v4);
            }
          }
        }
      }
      v7 += 8LL;
      --v8;
    }
    while ( v8 );
  }
}

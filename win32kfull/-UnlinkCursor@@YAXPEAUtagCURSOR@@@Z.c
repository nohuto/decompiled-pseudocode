void __fastcall UnlinkCursor(struct tagCURSOR *a1)
{
  int v2; // edx
  __int64 v3; // rcx
  int v4; // edi
  struct tagCURSOR **v5; // rcx
  struct tagCURSOR *v6; // rax
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r9
  _QWORD *v10; // rdx
  __int64 v11; // r8

  v2 = 0;
  v3 = *((_QWORD *)a1 + 3);
  if ( v3 )
  {
    v4 = 0;
    v5 = (struct tagCURSOR **)(v3 + 728);
  }
  else
  {
    v4 = 1;
    v5 = (struct tagCURSOR **)&gpcurFirst;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        if ( v6 == a1 )
        {
          *v5 = (struct tagCURSOR *)*((_QWORD *)a1 + 4);
LABEL_7:
          *((_QWORD *)a1 + 4) = 0LL;
          *((_DWORD *)a1 + 20) &= ~0x100u;
          return;
        }
        v5 = (struct tagCURSOR **)((char *)v6 + 32);
      }
      if ( v4 )
        break;
      v5 = (struct tagCURSOR **)&gpcurFirst;
      v4 = 1;
    }
    if ( v2 )
      break;
    CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
    v2 = 1;
    v5 = (struct tagCURSOR **)(*((_QWORD *)CurrentLogicalCursorThread + 53) + 728LL);
  }
  v8 = gSharedInfo[1];
  v9 = v8 + 32LL * giheLast;
  v10 = (_QWORD *)gpKernelHandleTable;
  while ( v8 <= v9 )
  {
    if ( *(_BYTE *)(v8 + 24) == 3 )
    {
      if ( *(struct tagCURSOR **)(*v10 + 32LL) == a1 )
      {
        *(_QWORD *)(*v10 + 32LL) = *((_QWORD *)a1 + 4);
        goto LABEL_7;
      }
      v11 = v10[1];
      if ( v11 && *(struct tagCURSOR **)(v11 + 728) == a1 )
      {
        *(_QWORD *)(v11 + 728) = *((_QWORD *)a1 + 4);
        goto LABEL_7;
      }
    }
    v8 += 32LL;
    v10 += 3;
  }
}

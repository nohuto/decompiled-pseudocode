__int64 __fastcall FindNextTopWindow::NextTopWindow(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rbx
  char v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  char *v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 DesktopWindow; // rax
  __int64 v14; // rdx
  bool v15; // zf
  __int64 NextTop; // rax
  char v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 TopScan; // [rsp+78h] [rbp+20h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
  v6 = 0LL;
  v7 = 0;
  TopScan = anonymous_namespace_::GNT_NextTopScan(gptiCurrent, 0LL, 0LL);
  if ( !a1 )
  {
    NextTop = anonymous_namespace_::NTW_GetNextTop(gptiCurrent, 0LL);
    v8 = anonymous_namespace_::CheckTopLevelOnly(NextTop);
    v9 = v8;
    v15 = v8 == 0;
    goto LABEL_12;
  }
  v8 = anonymous_namespace_::CheckTopLevelOnly(a1);
  v9 = v8;
  if ( v8 )
  {
    a2 = anonymous_namespace_::CheckTopLevelOnly(a2);
    while ( 1 )
    {
      v11 = v9;
      v12 = (a3 & 1) != 0
          ? anonymous_namespace_::NTW_GetPrevTop(gptiCurrent, v9)
          : anonymous_namespace_::NTW_GetNextTop(gptiCurrent, v9);
      v9 = v12;
      if ( v12 == v8 )
        break;
      if ( v12 == TopScan )
      {
        if ( v7 )
          break;
        v7 = 1;
      }
      if ( !v12 )
        break;
      DesktopWindow = GetDesktopWindow(v8);
      if ( DesktopWindow != v14 )
        break;
      v15 = v11 == v9;
LABEL_12:
      if ( v15 )
        break;
      if ( v9 != a2 )
      {
        v10 = *(char **)(v9 + 40);
        if ( (v10[31] & 0x18) == 0x10
          && ((unsigned __int8)~((unsigned __int8)v10[31] >> 5) & (unsigned __int8)~((unsigned __int8)v10[27] >> 3) & 1) != 0
          && ((a3 & 2) == 0 || v10[24] >= 0)
          && !(unsigned int)GetWindowCloakState((struct tagTHREADINFO **)v9)
          && ((a3 & 4) == 0 || !(unsigned int)SkipWindowOnMonitor(v9)) )
        {
          v6 = v9;
          break;
        }
      }
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18);
  return v6;
}

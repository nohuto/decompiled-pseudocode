__int64 __fastcall UpdateMonitorForWindowAndChildren(struct tagWND **a1, __int64 a2, struct tagBWL **a3, int a4)
{
  __int64 result; // rax
  struct tagBWL *v8; // rdi
  __int64 v9; // rdx
  struct tagWLDBI *v10; // rsi
  _QWORD *i; // r14
  struct tagWND *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx

  result = (__int64)BuildHwndList((ShellWindowManagement *)a1, 1, 0LL, 1);
  v8 = (struct tagBWL *)result;
  if ( result )
  {
    v10 = BuildWindowListWithDpiBoundaryInfo((struct tagWND *)a1, a1[13], (struct tagBWL *)result, 0LL);
    for ( i = (_QWORD *)((char *)v8 + 32); *i != 1LL; ++i )
    {
      LOBYTE(v9) = 1;
      v12 = (struct tagWND *)HMValidateHandleNoSecure(*i, v9);
      v13 = (__int64)v12;
      if ( v12 )
      {
        UpdateWindowMonitor(v12);
        if ( a4 )
        {
          if ( !IsTopLevelWindow(v13)
            || (v14 = *(_QWORD *)(v13 + 40), (*(_DWORD *)(v14 + 232) & 0x400) != 0) && (*(_BYTE *)(v14 + 16) & 0xF) != 0 )
          {
            *(_DWORD *)(v13 + 320) |= 0x40000u;
          }
        }
      }
    }
    if ( v10 )
    {
      UpdateWindowPositionsForDpiBoundaryChange(v10);
      FreeListFree(v10);
    }
    if ( a3 )
      *a3 = v8;
    else
      FreeHwndList(v8);
    return 1LL;
  }
  return result;
}

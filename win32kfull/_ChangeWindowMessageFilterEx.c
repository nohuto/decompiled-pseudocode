__int64 __fastcall ChangeWindowMessageFilterEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  void **v12; // r12
  __int64 v13; // r9
  struct tagVWPL **v14; // rcx
  void **v16[7]; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v17 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v11 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  *(_DWORD *)(a4 + 4) = 0;
  if ( (unsigned __int8)Enforced(v10) )
  {
    if ( !(unsigned int)ValidateChangeMessageFilter((struct tagPROCESSINFO *)v11, a2) )
      return 0LL;
    if ( a3 )
    {
      v16[0] = GetWindowMessageFilter(a1);
      v12 = v16[0];
      if ( a3 == 1 )
      {
        v4 = AddMessageToFilter(v16, a2, &v17);
        if ( v4 && v17 )
          *(_DWORD *)(a4 + 4) = 1;
      }
      else
      {
        if ( a3 != 2 )
          return v4;
        v4 = RemoveMessageFromFilter(v16, a2, &v17);
        if ( v4 )
        {
          if ( (unsigned int)IsMessageAllowedByFilterEx(*(void *const **)(v11 + 840), a2, 0LL, 0LL)
            || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2) )
          {
            *(_DWORD *)(a4 + 4) = 3;
          }
          else if ( v17 )
          {
            *(_DWORD *)(a4 + 4) = 2;
          }
        }
      }
      if ( v12 != v16[0] )
      {
        v14 = (struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 848LL);
        if ( v16[0] )
          return (unsigned int)VWPLAddBase(v14, (__int64)v16[0], a1, 5u);
        else
          VWPLRemoveBase(v14, 0LL, a1, v13, 0LL);
      }
      return v4;
    }
    FreeWindowMessageFilter(a1);
  }
  return 1LL;
}

/*
 * XREFs of _ChangeWindowMessageFilterEx @ 0x1C003F428
 * Callers:
 *     NtUserChangeWindowMessageFilterEx @ 0x1C003F290 (NtUserChangeWindowMessageFilterEx.c)
 * Callees:
 *     UIPISQMChangeFilter @ 0x1C003F660 (UIPISQMChangeFilter.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C003F6F8 (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C003FA78 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C003FB8C (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C003FC24 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C004F1F4 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     FreeWindowMessageFilter @ 0x1C007C1F0 (FreeWindowMessageFilter.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C010C03C (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C010C174 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C011054C (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall ChangeWindowMessageFilterEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v10; // r13
  void **v11; // r15
  int v12; // r9d
  struct tagVWPL **v14; // rcx
  int v15; // [rsp+20h] [rbp-48h]
  void **v16[7]; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v17 = 0;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  *(_DWORD *)(a4 + 4) = 0;
  v10 = CurrentProcessWin32Process;
  UIPISQMChangeFilter(CurrentProcessWin32Process);
  if ( (unsigned __int8)Enforced() )
  {
    if ( !(unsigned int)ValidateChangeMessageFilter(v10, a2) )
      return 0LL;
    if ( a3 )
    {
      v16[0] = GetWindowMessageFilter(a1);
      v11 = v16[0];
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
          if ( (unsigned int)IsMessageAllowedByFilterEx(*((void *const **)v10 + 106), a2, 0LL, 0LL)
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
      if ( v11 != v16[0] )
      {
        v14 = (struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 856LL);
        if ( v16[0] )
          return (unsigned int)VWPLAddBase(v14, (unsigned __int64)v16[0], a1, 5u, v15);
        else
          VWPLRemoveBase(v14, 0LL, a1, v12, 0LL);
      }
      return v4;
    }
    FreeWindowMessageFilter(a1);
  }
  return 1LL;
}

/*
 * XREFs of ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00C8AFC
 * Callers:
 *     _lambda_9e1c073be7703093e3ca0af05debe537_::operator() @ 0x1C00C8A5C (_lambda_9e1c073be7703093e3ca0af05debe537_--operator().c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C02178E4 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0048F7C (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _anonymous_namespace_::NTW_GetNextTop @ 0x1C00C8C68 (_anonymous_namespace_--NTW_GetNextTop.c)
 *     _anonymous_namespace_::CheckTopLevelOnly @ 0x1C00C8D18 (_anonymous_namespace_--CheckTopLevelOnly.c)
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x1C00C8D48 (_anonymous_namespace_--GNT_NextTopScan.c)
 *     SkipWindowOnMonitor @ 0x1C00C8DE0 (SkipWindowOnMonitor.c)
 *     _anonymous_namespace_::NTW_GetPrevTop @ 0x1C022667C (_anonymous_namespace_--NTW_GetPrevTop.c)
 */

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

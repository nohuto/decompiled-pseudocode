/*
 * XREFs of ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00CDD98
 * Callers:
 *     _lambda_9e1c073be7703093e3ca0af05debe537_::operator() @ 0x1C00CDCFC (_lambda_9e1c073be7703093e3ca0af05debe537_--operator().c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C022E728 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _anonymous_namespace_::NTW_GetNextTop @ 0x1C00CDEEC (_anonymous_namespace_--NTW_GetNextTop.c)
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x1C00CDF40 (_anonymous_namespace_--GNT_NextTopScan.c)
 *     _anonymous_namespace_::CheckTopLevelOnly @ 0x1C00CDFB8 (_anonymous_namespace_--CheckTopLevelOnly.c)
 *     SkipWindowOnMonitor @ 0x1C00CDFE8 (SkipWindowOnMonitor.c)
 *     _anonymous_namespace_::NTW_GetPrevTop @ 0x1C023A860 (_anonymous_namespace_--NTW_GetPrevTop.c)
 */

const struct tagWND *__fastcall FindNextTopWindow::NextTopWindow(__int64 a1, __int64 a2, char a3)
{
  const struct tagWND *v6; // rdi
  char v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r8
  const struct tagWND *v11; // rbx
  char *v12; // rdx
  const struct tagWND *v13; // rbp
  __int64 v14; // rax
  __int64 DesktopWindow; // rax
  bool v16; // zf
  __int64 NextTop; // rax
  char v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 TopScan; // [rsp+78h] [rbp+20h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v19);
  v6 = 0LL;
  v7 = 0;
  TopScan = anonymous_namespace_::GNT_NextTopScan(gptiCurrent, 0LL, 0LL);
  if ( !a1 )
  {
    NextTop = anonymous_namespace_::NTW_GetNextTop(gptiCurrent, 0LL);
    v9 = anonymous_namespace_::CheckTopLevelOnly(NextTop);
    v11 = (const struct tagWND *)v9;
    v16 = v9 == 0;
    goto LABEL_12;
  }
  v9 = anonymous_namespace_::CheckTopLevelOnly(a1);
  v11 = (const struct tagWND *)v9;
  if ( v9 )
  {
    a2 = anonymous_namespace_::CheckTopLevelOnly(a2);
    while ( 1 )
    {
      v13 = v11;
      v14 = (a3 & 1) != 0
          ? anonymous_namespace_::NTW_GetPrevTop(gptiCurrent, v11)
          : anonymous_namespace_::NTW_GetNextTop(gptiCurrent, v11);
      v11 = (const struct tagWND *)v14;
      if ( v14 == v9 )
        break;
      if ( v14 == TopScan )
      {
        if ( v7 )
          break;
        v7 = 1;
      }
      if ( !v14 )
        break;
      GetDesktopWindow(v9);
      DesktopWindow = GetDesktopWindow((__int64)v11);
      if ( v8 != DesktopWindow )
        break;
      v16 = v13 == v11;
LABEL_12:
      if ( v16 )
        break;
      if ( v11 != (const struct tagWND *)a2 )
      {
        v12 = (char *)*((_QWORD *)v11 + 5);
        if ( (v12[31] & 0x18) == 0x10
          && ((unsigned __int8)~((unsigned __int8)v12[31] >> 5) & (unsigned __int8)~((unsigned __int8)v12[27] >> 3) & 1) != 0
          && ((a3 & 2) == 0 || v12[24] >= 0)
          && !(unsigned int)GetWindowCloakState(v11)
          && ((a3 & 4) == 0 || !(unsigned int)SkipWindowOnMonitor(v11)) )
        {
          v6 = v11;
          break;
        }
      }
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v19, v8, v10);
  return v6;
}

/*
 * XREFs of ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z @ 0x1C033ED08
 * Callers:
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x1C0041998 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C018C4B0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AddThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z @ 0x1C0050C3C (-AddThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C033F668 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall CEnsureCurrentDxgProcess::AttachToProcess(
        CEnsureCurrentDxgProcess *this,
        struct DXGPROCESS *a2,
        char a3)
{
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *DxgThread; // rax
  __int64 result; // rax
  KSPIN_LOCK *Global; // rax
  __int64 v10; // rcx

  Current = DXGTHREAD::GetCurrent();
  *((_QWORD *)this + 1) = Current;
  if ( !Current )
  {
    do
    {
      DxgThread = DxgkThreadObjectCreateDxgThread(0);
      *((_QWORD *)this + 1) = DxgThread;
    }
    while ( a3 && !DxgThread );
    if ( !DxgThread )
    {
      WdLogSingleEntry1(2LL, 6706LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkThreadObjectCreateDxgThread failed",
        6706LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
    *((_QWORD *)this + 5) = a2;
    *((_QWORD *)this + 4) = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::AddThreadToDxgThreadList(Global, (CEnsureCurrentDxgProcess *)((char *)this + 16));
  }
  v10 = *((_QWORD *)this + 1);
  *(_QWORD *)this = *(_QWORD *)(v10 + 24);
  result = 0LL;
  *(_QWORD *)(v10 + 24) = a2;
  return result;
}

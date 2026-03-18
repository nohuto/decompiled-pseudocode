/*
 * XREFs of GreLockVisRgnSharedOrExclusive @ 0x1C016A640
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0041790 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004B718 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C004B77C (--1DCOBJA@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C0051080 (GreLockVisRgn.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0089ED0 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreLockVisRgnSharedOrExclusive(HDC a1, HDC a2)
{
  HDC v2; // rbx
  bool v4; // di
  __int64 v5; // rcx
  bool v6; // zf
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  HDC *v11[7]; // [rsp+20h] [rbp-38h] BYREF
  HDC v12; // [rsp+68h] [rbp+10h] BYREF

  v2 = a1;
  if ( a2 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v11, a2);
    if ( !v11[0] )
    {
      DCOBJA::~DCOBJA(v11);
      return 0LL;
    }
    v2 = v11[0][6];
    v12 = v2;
    v4 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v12)
      && ((*((_DWORD *)v11[0] + 9) & 0x200) == 0
       || (**((_BYTE **)v11[0] + 122) & 1) != 0
       || (*((_DWORD *)v11[0] + 9) & 0x8000) != 0);
    DCOBJA::~DCOBJA(v11);
    v6 = !v4;
  }
  else
  {
    v12 = a1;
    v6 = !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v12);
  }
  if ( v6 )
  {
    GreLockVisRgn((__int64)v2);
  }
  else
  {
    v7 = *(_QWORD **)(SGDGetSessionState(v5) + 24);
    v8 = v7[10];
    if ( v8 )
      ExEnterPriorityRegionAndAcquireResourceShared(v8);
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"GreBaseGlobals.hsemDynamicModeChange", v7[10]);
    v9 = v7[15];
    if ( v9 )
      ExEnterPriorityRegionAndAcquireResourceShared(v9);
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"GreBaseGlobals.hsemGreLock", v7[15]);
    v10 = v7[11];
    if ( v10 )
      ExEnterPriorityRegionAndAcquireResourceShared(v10);
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"GreBaseGlobals.hsemDCVisRgn", v7[11]);
  }
  return 1LL;
}

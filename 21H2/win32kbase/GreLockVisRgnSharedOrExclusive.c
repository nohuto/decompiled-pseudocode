/*
 * XREFs of GreLockVisRgnSharedOrExclusive @ 0x1C00302D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C002BEFC (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002BF28 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0030540 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0089800 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreLockVisRgnSharedOrExclusive(HDC a1, HDC a2)
{
  HDC v2; // rdi
  HDC *v3; // rbx
  int v4; // edx
  bool v5; // bl
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  HDC *v11[7]; // [rsp+20h] [rbp-38h] BYREF
  HDC v12; // [rsp+68h] [rbp+10h] BYREF

  v2 = a1;
  if ( a2 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v11, a2);
    v3 = v11[0];
    if ( !v11[0] )
    {
      DCOBJA::~DCOBJA(v11);
      return 0LL;
    }
    v2 = v11[0][6];
    v12 = v2;
    v5 = 0;
    if ( (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v12) )
    {
      v4 = *((_DWORD *)v3 + 9);
      if ( (v4 & 0x200) == 0 || (*(_DWORD *)v3[122] & 1) != 0 || (v4 & 0x8000) != 0 )
        v5 = 1;
    }
    DCOBJA::~DCOBJA(v11);
  }
  else
  {
    v12 = a1;
    v5 = (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v12) != 0;
  }
  if ( v5 )
  {
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange, v6);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemGreLock )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock, v8);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
    if ( ghsemDCVisRgn )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn, v9);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  }
  else
  {
    GreLockVisRgn((__int64)v2, v6, v7);
  }
  return 1LL;
}

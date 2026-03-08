/*
 * XREFs of GreGetBrushColor @ 0x1C017E540
 * Callers:
 *     <none>
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C001BD04 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C001BD48 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreGetBrushColor(HBRUSH a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = -1;
  GreAcquireHmgrSemaphore((__int64)a1);
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v5, a1);
  if ( v5[0] && (unsigned int)(*(_DWORD *)(v5[0] + 80LL) - 6) <= 1 )
    v2 = *(_DWORD *)(v5[0] + 76LL);
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v5);
  GreReleaseHmgrSemaphore(v3);
  return v2;
}

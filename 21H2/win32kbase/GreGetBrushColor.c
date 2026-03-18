/*
 * XREFs of GreGetBrushColor @ 0x1C01691F0
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00633F4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0063428 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 */

__int64 __fastcall GreGetBrushColor(HBRUSH a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1;
  GreAcquireHmgrSemaphore((__int64)a1, a2, a3);
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v9, a1);
  if ( v9[0] && (unsigned int)(*(_DWORD *)(v9[0] + 80LL) - 6) <= 1 )
    v4 = *(_DWORD *)(v9[0] + 76LL);
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v9);
  GreReleaseHmgrSemaphore(v6, v5, v7);
  return v4;
}

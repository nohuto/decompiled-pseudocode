/*
 * XREFs of GreGetBrushColor @ 0x1C013C090
 * Callers:
 *     <none>
 * Callees:
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C001E1B4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C001E1E8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A090 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003A1E0 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreGetBrushColor(HBRUSH a1, int a2, int a3)
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

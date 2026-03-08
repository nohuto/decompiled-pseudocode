/*
 * XREFs of ?EndOperation@VIDMM_WORKER_THREAD@@AEAAX_N0@Z @ 0x1C00ECFA8
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AddData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAX_KI00I0I0I0I0I0I@Z @ 0x1C00F3E04 (-AddData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAX_KI00I0I0I0I0I0I@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::EndOperation(VIDMM_WORKER_THREAD *this, char a2, unsigned __int8 a3)
{
  int v4; // esi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // rdi
  unsigned int v7; // eax
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // r9d

  if ( a2 )
  {
    v4 = a3;
    if ( *((_QWORD *)this + 33) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v6 = *(_QWORD *)(*((_QWORD *)this + 33) + 16LL);
      VIDMM_TELEMETRY_PAGING_COSTS::AddData(
        (VIDMM_WORKER_THREAD *)((char *)this + 416),
        *((_QWORD *)this + 36),
        *((_DWORD *)this + 88),
        PerformanceCounter.QuadPart - *((_QWORD *)this + 37),
        *((_QWORD *)this + 40),
        *((_DWORD *)this + 91),
        *((_QWORD *)this + 41),
        *((_DWORD *)this + 92),
        *((_QWORD *)this + 42),
        *((_DWORD *)this + 93),
        *((_QWORD *)this + 43),
        *((_DWORD *)this + 94),
        *((_QWORD *)this + 38),
        *((_DWORD *)this + 89),
        *((_QWORD *)this + 39),
        *((_DWORD *)this + 90));
      if ( v6 )
      {
        v7 = *((_DWORD *)this + 95);
        v8 = *((_DWORD *)this + 94);
        v9 = *((_DWORD *)this + 97);
        v10 = *((_DWORD *)this + 96);
        *(_DWORD *)(v6 + 1752) += v7;
        *(_DWORD *)(v6 + 1756) += v10;
        *(_DWORD *)(v6 + 1760) += v9;
        *(_DWORD *)(v6 + 1764) += v8;
        *(_DWORD *)(v6 + 1768) += v4;
        if ( __PAIR64__(v10, v7) || v9 || v8 || (_BYTE)v4 )
          *(_BYTE *)(v6 + 1772) = 1;
      }
      *((_QWORD *)this + 33) = 0LL;
    }
  }
}

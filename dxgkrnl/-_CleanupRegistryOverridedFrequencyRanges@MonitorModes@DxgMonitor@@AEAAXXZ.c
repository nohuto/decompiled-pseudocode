/*
 * XREFs of ?_CleanupRegistryOverridedFrequencyRanges@MonitorModes@DxgMonitor@@AEAAXXZ @ 0x1C03C85BC
 * Callers:
 *     ??1MonitorModes@DxgMonitor@@QEAA@XZ @ 0x1C03C7CA8 (--1MonitorModes@DxgMonitor@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

void __fastcall DxgMonitor::MonitorModes::_CleanupRegistryOverridedFrequencyRanges(DxgMonitor::MonitorModes *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // r8

  if ( *((_DWORD *)this + 42) )
  {
    v2 = (_QWORD *)((char *)this + 176);
    if ( (_QWORD *)*v2 == v2 )
      WdLogSingleEntry0(1LL);
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 != v2 )
    {
      v4 = v3 - 6;
      if ( !v3 )
        v4 = 0LL;
      if ( v4 )
      {
        do
        {
          v5 = v4 + 6;
          v6 = (_QWORD *)v4[6];
          if ( v6 == v2 )
          {
            v7 = 0LL;
          }
          else
          {
            v7 = v6 - 6;
            if ( !v6 )
              v7 = 0LL;
          }
          if ( *(_DWORD *)v4 == 4 )
          {
            if ( (_QWORD *)v6[1] != v5 || (v8 = (_QWORD *)v4[7], (_QWORD *)*v8 != v5) )
              __fastfail(3u);
            *v8 = v6;
            v6[1] = v8;
            operator delete(v4);
            --*((_DWORD *)this + 42);
            --*((_DWORD *)this + 43);
          }
          v4 = v7;
        }
        while ( v7 );
      }
    }
  }
}

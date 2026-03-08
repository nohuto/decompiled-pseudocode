/*
 * XREFs of ?UpdateLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1C0302AE8
 * Callers:
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0302920 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 * Callees:
 *     <none>
 */

void __fastcall DripsBlockerTrackingHelper::UpdateLastActiveEntry(
        DripsBlockerTrackingHelper *this,
        unsigned int a2,
        int a3)
{
  bool v3; // zf
  __int64 v5; // rsi
  int v7; // r10d
  char *v8; // r9
  unsigned int v9; // r11d
  unsigned int v10; // edi
  int *v11; // r8
  int v12; // ecx
  int v13; // eax

  v3 = *((_BYTE *)this + 302129) == 0;
  v5 = a2;
  *((_BYTE *)this + 302152) = 0;
  if ( v3 )
  {
    v7 = 1;
    v8 = (char *)this + 44;
    v9 = 0;
    while ( v7 )
    {
      if ( v8[60] )
      {
        v10 = 0;
        if ( *(_DWORD *)v8 )
        {
          v11 = (int *)(v8 + 100);
          do
          {
            if ( !v7 )
              break;
            v12 = *v11;
            v13 = 0;
            v11 += 18;
            ++v10;
            if ( !v12 )
              v13 = v7;
            v7 = v13;
          }
          while ( v10 < *(_DWORD *)v8 );
        }
      }
      ++v9;
      v8 += 4720;
      if ( v9 >= 0x40 )
      {
        if ( v7 )
        {
          *((LARGE_INTEGER *)this + 37767) = KeQueryPerformanceCounter(0LL);
          *((_DWORD *)this + 75536) = v5;
          *((_DWORD *)this + 75537) = a3;
          *((_BYTE *)this + 302152) = 1;
          *((_BYTE *)this + 302153) = *((_DWORD *)this + 1180 * v5 + 27) > 0;
        }
        return;
      }
    }
  }
}

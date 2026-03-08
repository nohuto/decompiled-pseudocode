/*
 * XREFs of ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x1C00E1D58
 * Callers:
 *     SortMonitorsInSpatialOrder @ 0x1C00E1D30 (SortMonitorsInSpatialOrder.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GetMonitorWorkRectForDpi @ 0x1C00E1F04 (GetMonitorWorkRectForDpi.c)
 */

void UpdateDesktopMonitorNavigationOrder(void)
{
  __int64 v0; // rbx
  unsigned int v1; // edi
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rsi
  _QWORD *i; // r8
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rdx
  _QWORD *v8; // r14
  __m128i *MonitorWorkRectForDpi; // rax
  unsigned __int64 v10; // xmm0_8
  signed int v11; // r8d
  unsigned int v12; // r8d
  _QWORD *v13; // rdx
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0LL;
  v1 = 255;
  v2 = 8LL * *(unsigned int *)*gpDispInfo;
  if ( v2 <= 0xFFFFFFFF )
  {
    v3 = (_QWORD *)Win32AllocPoolZInit((unsigned int)v2, 1835101525LL);
    if ( v3 )
    {
      for ( i = *(_QWORD **)(gpDispInfo + 104LL); i; i = (_QWORD *)i[7] )
      {
        if ( (*(_DWORD *)(i[5] + 24LL) & 1) != 0 && (unsigned int)v0 < *(_DWORD *)*gpDispInfo )
        {
          v3[v0] = i;
          i[12] = 0LL;
          i[13] = 0LL;
          v0 = (unsigned int)(v0 + 1);
        }
      }
      qsort(v3, (unsigned int)v0, 8uLL, MonitorCoordComp);
      v5 = gpDispInfo;
      v6 = 0LL;
      *(_QWORD *)(gpDispInfo + 152LL) = gpDispInfo + 144LL;
      *(_QWORD *)(gpDispInfo + 144LL) = gpDispInfo + 144LL;
      if ( !(_DWORD)v0 )
        goto LABEL_17;
      do
      {
        v7 = v3[v6];
        v8 = (_QWORD *)(v7 + 96);
        MonitorWorkRectForDpi = (__m128i *)GetMonitorWorkRectForDpi(v14, v7, 96LL);
        v10 = _mm_srli_si128(*MonitorWorkRectForDpi, 8).m128i_u64[0];
        v5 = gpDispInfo;
        v11 = HIDWORD(v10) - HIDWORD(MonitorWorkRectForDpi->m128i_i64[0]);
        if ( (int)(v10 - MonitorWorkRectForDpi->m128i_i64[0]) < v11 )
          v11 = v10 - MonitorWorkRectForDpi->m128i_i64[0];
        v12 = (unsigned int)v11 >> 1;
        if ( v1 < v12 )
          v12 = v1;
        v1 = v12;
        v13 = *(_QWORD **)(gpDispInfo + 152LL);
        if ( *v13 != gpDispInfo + 144LL )
          __fastfail(3u);
        *v8 = gpDispInfo + 144LL;
        v6 = (unsigned int)(v6 + 1);
        v8[1] = v13;
        *v13 = v8;
        *(_QWORD *)(gpDispInfo + 152LL) = v8;
      }
      while ( (unsigned int)v6 < (unsigned int)v0 );
      if ( v12 == -1 )
        *(_DWORD *)(gpDispInfo + 136LL) = 0;
      else
LABEL_17:
        *(_DWORD *)(*(_QWORD *)v5 + 136LL) = v1;
      Win32FreePool(v3);
    }
  }
}

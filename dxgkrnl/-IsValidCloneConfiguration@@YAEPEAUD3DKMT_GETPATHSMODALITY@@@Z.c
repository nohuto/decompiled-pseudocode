/*
 * XREFs of ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02F7714
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F5F2C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?IsValidCloneGroup@@YAEPEAUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C02F77A8 (-IsValidCloneGroup@@YAEPEAUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 */

unsigned __int8 __fastcall IsValidCloneConfiguration(struct D3DKMT_GETPATHSMODALITY *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  __int64 v4; // rax
  unsigned int v5; // edi

  if ( a1 )
  {
    LOWORD(v2) = *((_WORD *)a1 + 10);
    v3 = 0;
    if ( (_WORD)v2 )
    {
      do
      {
        v4 = v3++;
        *((_QWORD *)a1 + 37 * v4 + 7) &= ~0x2000000000uLL;
        v2 = *((unsigned __int16 *)a1 + 10);
      }
      while ( v3 < v2 );
    }
    v5 = 0;
    if ( !(_WORD)v2 )
      return 1;
    while ( _bittest64((const signed __int64 *)a1 + 37 * v5 + 7, 0x25u) || IsValidCloneGroup(a1, v5) )
    {
      if ( ++v5 >= *((unsigned __int16 *)a1 + 10) )
        return 1;
    }
  }
  return 0;
}

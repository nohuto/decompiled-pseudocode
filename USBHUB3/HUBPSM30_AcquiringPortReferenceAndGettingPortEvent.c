/*
 * XREFs of HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x1C0013AB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C000569C (HUBHTX_Get30PortChangeEvent.c)
 *     HUBMUX_AcquirePortPowerReference @ 0x1C0010B48 (HUBMUX_AcquirePortPowerReference.c)
 */

__int64 __fastcall HUBPSM30_AcquiringPortReferenceAndGettingPortEvent(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_AcquirePortPowerReference((volatile signed __int32 *)v1);
  if ( *(int *)(*(_QWORD *)v1 + 40LL) < 0
    && (*(_WORD *)(v1 + 184) & 0x1E0) == 0xE0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v1 + 1432), 2u, 4u, 0x6Eu, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
  }
  return HUBHTX_Get30PortChangeEvent(v1, v2, v3);
}

/*
 * XREFs of HUBMISC_IsD3ColdSupported @ 0x1C0033D00
 * Callers:
 *     HUBPSM30_CheckingIsD3ColdIsEnabled @ 0x1C0012D30 (HUBPSM30_CheckingIsD3ColdIsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C002E0D0 (WPP_RECORDER_SF_dddd.c)
 */

__int64 __fastcall HUBMISC_IsD3ColdSupported(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rsi
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  unsigned __int16 v9; // r9
  int v11; // [rsp+20h] [rbp-38h]

  v5 = a1 + 166;
  v6 = (_DWORD *)a1 + 51;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dddd(a1[179], (*(_DWORD *)(*v5 + 1636) >> 12) & 1, *v6 & 1, a4, v11);
  v7 = *v5;
  if ( (*(_DWORD *)(*v5 + 1632) & 0x8000) != 0
    && (*(_DWORD *)(v7 + 1636) & 0x1000) != 0
    && (*v6 & 1) == 0
    && *(_DWORD *)(v7 + 2708) == 4 )
  {
    v8 = 3089;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 117;
LABEL_15:
      WPP_RECORDER_SF_(a1[179], 4u, 5u, v9, (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
    }
  }
  else
  {
    if ( (*(_DWORD *)(*a1 + 44) & 2) == 0
      || (*v6 & 1) != 0
      || *(_DWORD *)(v7 + 2708) != 3
      || (*(_DWORD *)(v7 + 1644) & 0x8000000) == 0 )
    {
      v8 = 3005;
      _InterlockedAnd((volatile signed __int32 *)(v7 + 1636), 0xFFEFFFFF);
      return v8;
    }
    v8 = 3089;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 118;
      goto LABEL_15;
    }
  }
  return v8;
}

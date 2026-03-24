/*
 * XREFs of ?bInEngCall@UMPDOBJ@@QEAA_NXZ @ 0x1C016A0F0
 * Callers:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00A19A4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     XLATEOBJ_iXlate @ 0x1C00C8500 (XLATEOBJ_iXlate.c)
 *     EngBitBlt @ 0x1C00CB5E0 (EngBitBlt.c)
 *     EngTextOut @ 0x1C00CBA80 (EngTextOut.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CFBA8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 * Callees:
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 */

bool __fastcall UMPDOBJ::bInEngCall(UMPDOBJ *this)
{
  bool v2; // zf

  if ( (unsigned int)Feature_1508323640__private_IsEnabledDeviceUsage(this) )
    v2 = (_InterlockedCompareExchange((volatile signed __int32 *)this + 105, 0, 0) & 0x7FFFFFFF) == 0;
  else
    v2 = *((_DWORD *)this + 105) == 0;
  return !v2;
}

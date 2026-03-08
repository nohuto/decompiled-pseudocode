/*
 * XREFs of HUBDSM_CheckingIfMSOSDescriptorShouldBeQueried @ 0x1C0021760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_CheckingIfMSOSDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  if ( (*(_DWORD *)(v1 + 2464) & 1) != 0 )
    return 4061LL;
  if ( *(_DWORD *)(v2 + 8) == 1 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v1 + 1632), 0xFFFFFF7F);
  }
  else
  {
    if ( *(_DWORD *)(v2 + 8) == 2 )
    {
      _InterlockedOr((volatile signed __int32 *)(v1 + 1632), 0x80u);
      return 4061LL;
    }
    if ( (unsigned __int16)(*(_WORD *)(v1 + 1990) - 256) <= 0xFFu
      || (*(_DWORD *)(v1 + 1632) & 0x80u) != 0
      || *(_BYTE *)(v1 + 2052) )
    {
      return (*(_BYTE *)(v1 + 1644) & 2) != 0 ? 4089 : 4061;
    }
  }
  return 4089LL;
}

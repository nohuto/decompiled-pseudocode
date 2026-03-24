/*
 * XREFs of _call_matherr @ 0x1C00CF0F0
 * Callers:
 *     _handle_error @ 0x1C00CF224 (_handle_error.c)
 * Callees:
 *     ?GetType@ServerPortInfo@CoreMessagingK@@SA?AW4ObjectType@2@XZ @ 0x1C00BBEE0 (-GetType@ServerPortInfo@CoreMessagingK@@SA-AW4ObjectType@2@XZ.c)
 *     _set_errno_from_matherr @ 0x1C00CF6E0 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x1C00CF730 (_ctrlfp.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)CoreMessagingK::ServerPortInfo::GetType() )
    set_errno_from_matherr(a1);
  return a6;
}

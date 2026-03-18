/*
 * XREFs of _call_matherr @ 0x1C00DDEC8
 * Callers:
 *     _handle_error @ 0x1C00DE008 (_handle_error.c)
 * Callees:
 *     ?MarkInvalid@CIgnoreInputQueue@@EEAAXXZ @ 0x1C0019C10 (-MarkInvalid@CIgnoreInputQueue@@EEAAXXZ.c)
 *     ?GetType@ServerPortInfo@CoreMessagingK@@SA?AW4ObjectType@2@XZ @ 0x1C00CAB00 (-GetType@ServerPortInfo@CoreMessagingK@@SA-AW4ObjectType@2@XZ.c)
 *     _ctrlfp @ 0x1C00DE4F4 (_ctrlfp.c)
 */

double __fastcall call_matherr(
        CIgnoreInputQueue *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // ebx

  v7 = (unsigned int)this;
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)CoreMessagingK::ServerPortInfo::GetType() )
    CIgnoreInputQueue::MarkInvalid((CIgnoreInputQueue *)v7);
  return *(double *)&a6;
}

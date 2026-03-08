/*
 * XREFs of WheaSelLogEvent @ 0x14060DD48
 * Callers:
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 * Callees:
 *     WheaSelLogErrorPkt @ 0x14060DC5C (WheaSelLogErrorPkt.c)
 *     WheapLogIpmiSELEvent @ 0x140610F90 (WheapLogIpmiSELEvent.c)
 */

__int64 __fastcall WheaSelLogEvent(char *Src)
{
  int v1; // edx
  size_t v3; // rdx
  char *v4; // rcx
  int v5; // ecx

  v1 = *((_DWORD *)Src + 6);
  if ( (v1 & 0x10) != 0 )
  {
    v3 = *((unsigned int *)Src + 7);
    *((_DWORD *)Src + 4) = 1280201291;
    v4 = Src + 32;
    return WheapLogIpmiSELEvent(v4, v3);
  }
  v5 = *((_DWORD *)Src + 5);
  if ( v5 != -2147483643 )
  {
    v3 = *((unsigned int *)Src + 7);
    if ( v5 == -2147483606 )
    {
      v4 = Src + 32;
    }
    else
    {
      v3 = (unsigned int)(v3 + 32);
      v4 = Src;
    }
    return WheapLogIpmiSELEvent(v4, v3);
  }
  return WheaSelLogErrorPkt((__int64)Src);
}

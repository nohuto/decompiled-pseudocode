/*
 * XREFs of WheaSelLogEvent @ 0x1405BE3B8
 * Callers:
 *     WheaLogInternalEvent @ 0x1403BAEC0 (WheaLogInternalEvent.c)
 * Callees:
 *     WheapLogIpmiSELEvent @ 0x1405BD768 (WheapLogIpmiSELEvent.c)
 *     WheaSelLogErrorPkt @ 0x1405BE2CC (WheaSelLogErrorPkt.c)
 */

__int64 __fastcall WheaSelLogEvent(char *Src)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r8d
  size_t v5; // rdx
  char *v6; // rcx
  int v7; // ecx
  bool v8; // zf

  v2 = *((_DWORD *)Src + 6);
  if ( (v2 & 0x10) != 0 )
  {
    if ( (v2 & 0x20) != 0 )
    {
      v3 = 6;
    }
    else
    {
      v4 = *((_DWORD *)Src + 4) << 16;
      if ( (v2 & 0x40) != 0 )
        v3 = v4 | 7;
      else
        v3 = v4 | 1;
    }
    v5 = *((unsigned int *)Src + 7);
    v6 = Src + 32;
    *((_DWORD *)Src + 4) = 1280201291;
    return WheapLogIpmiSELEvent(v6, v5, v3);
  }
  v7 = *((_DWORD *)Src + 5);
  if ( v7 != -2147483643 )
  {
    v5 = *((unsigned int *)Src + 7);
    if ( v7 == -2147483606 )
    {
      v6 = Src + 32;
      v3 = (*((_DWORD *)Src + 4) << 16) | 8;
    }
    else
    {
      v5 = (unsigned int)(v5 + 32);
      v8 = v7 == -2147483601;
      v6 = Src;
      if ( v8 )
        v3 = 9;
      else
        v3 = 0;
    }
    return WheapLogIpmiSELEvent(v6, v5, v3);
  }
  return WheaSelLogErrorPkt((__int64)Src);
}

/*
 * XREFs of HvlSendSyntheticClusterIpi @ 0x1403C6D90
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestampSilo @ 0x140250570 (EtwGetKernelTraceTimestampSilo.c)
 *     HvcallpNoHypervisorPresent @ 0x1402C0AC0 (HvcallpNoHypervisorPresent.c)
 *     EtwTraceTimedEvent @ 0x1402CD670 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x140543E08 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1405440CC (HvlpSlowSendSyntheticClusterIpiEx.c)
 */

__int64 __fastcall HvlSendSyntheticClusterIpi(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // edi
  char v4; // si
  __int16 v5; // bx
  __int64 v7; // rcx
  _BYTE *i; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v11[2]; // [rsp+38h] [rbp-40h] BYREF

  if ( (HvlpFlags & 0x80u) != 0 && (unsigned __int16)KiActiveGroups > 1u )
  {
    if ( ((HvlpFlags >> 8) & 0xF) + 4 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowSendSyntheticClusterIpiEx(a1, a2);
    else
      return HvlpFastSendSyntheticClusterIpiEx(a1, a2);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = 0;
    v10 = 11LL;
    if ( !HvlpVirtualProcessorsIdentityMapped )
    {
      v7 = 0LL;
      for ( i = &unk_140D24FA3; ; i += 4 )
      {
        if ( (v2 & 1) != 0 )
          v7 |= 1LL << *(i - 2);
        v9 = v2 >> 1;
        if ( !v9 )
          break;
        if ( (v9 & 1) != 0 )
          v7 |= 1LL << *i;
        v2 = v9 >> 1;
        if ( !v2 )
          break;
      }
    }
    LODWORD(v10) = 65547;
    memset(v11, 0, sizeof(v11));
    if ( (BYTE4(xmmword_140D1EAD0) & 0x10) != 0 )
    {
      v4 = 1;
      EtwGetKernelTraceTimestampSilo((LARGE_INTEGER *)v11, 0xA0000010, 0LL);
    }
    else
    {
      v4 = 0;
    }
    v5 = HvcallCodeVa();
    if ( v4 )
    {
      v10 = 0x10000000BLL;
      EtwTraceTimedEvent(3954, 0xA0000010, (__int64)&v10, 8, 4200962, (__int64)v11);
    }
    if ( v5 )
      return (unsigned int)-1073741823;
    return v3;
  }
}

/*
 * XREFs of NtDCompositionCreateDwmChannel @ 0x1C000A980
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C000AA1C (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C00B0B08 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 */

__int64 __fastcall NtDCompositionCreateDwmChannel(unsigned int *a1)
{
  _DWORD *v2; // rdx
  int v3; // ebx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( a1 )
  {
    v2 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v2 = (_DWORD *)MmUserProbeAddress;
    *v2 = *v2;
    v3 = 0;
    if ( !(unsigned int)UserIsCurrentProcessDwm(MmUserProbeAddress) )
      v3 = -1073741790;
    if ( v3 >= 0 )
    {
      v3 = DirectComposition::CDwmChannel::Create(&v5);
      if ( v3 >= 0 )
        *a1 = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}

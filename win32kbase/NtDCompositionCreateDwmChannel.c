/*
 * XREFs of NtDCompositionCreateDwmChannel @ 0x1C00C9F90
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00191C0 (UserIsCurrentProcessDwm.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0098528 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00CA030 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 */

__int64 __fastcall NtDCompositionCreateDwmChannel(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v5; // ebx
  unsigned int v6; // esi
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v5 = a1 == 0LL ? 0xC000000D : 0;
  if ( a1 && !UserIsCurrentProcessDwm((__int64)a1, a2, a3, a4) )
    v5 = -1073741790;
  if ( v5 >= 0 )
  {
    v5 = DirectComposition::CDwmChannel::Create(&v8);
    v6 = v8;
    if ( v5 >= 0 )
    {
      if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a1 = v6;
    }
  }
  return (unsigned int)v5;
}

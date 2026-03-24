/*
 * XREFs of UnpackPenSettings @ 0x1C01AFA20
 * Callers:
 *     ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8E90 (-ivHandleSettingsPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMIsDefaultUILanguageRTL @ 0x1C00B7E00 (RIMIsDefaultUILanguageRTL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_s @ 0x1C01525FC (WPP_RECORDER_SF_s.c)
 */

void *__fastcall UnpackPenSettings(__int64 a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  void *result; // rax
  const char *v6; // rax
  int v7; // ebx
  const char *v8; // rax

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 12);
  if ( qword_1C0257060 )
    result = (void *)qword_1C0257060();
  else
    result = 0LL;
  if ( v3 != (_DWORD)result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = "Left";
      if ( v3 )
        v6 = "Right";
      WPP_RECORDER_SF_s(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        12,
        13,
        (__int64)&WPP_e18a3e3623fd345076d33ab3e1bf5af6_Traceguids,
        (__int64)v6);
    }
    if ( RIMIsDefaultUILanguageRTL() )
      LOBYTE(v2) = v3 == 0;
    else
      LOBYTE(v2) = v3 != 0;
    result = gpsi;
    *((_DWORD *)gpsi + 514) = v2;
  }
  v7 = *(_DWORD *)(a1 + 16);
  if ( v7 != dword_1C024B2D0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = "show";
      if ( (v7 & 0x20) == 0 )
        v8 = "not show";
      result = (void *)WPP_RECORDER_SF_s(
                         WPP_MAIN_CB.Queue.ListEntry.Flink,
                         a2,
                         12,
                         14,
                         (__int64)&WPP_e18a3e3623fd345076d33ab3e1bf5af6_Traceguids,
                         (__int64)v8);
    }
    dword_1C024B2D0 = v7;
  }
  return result;
}

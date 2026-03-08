/*
 * XREFs of ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x1801B04C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x1801B03B0 (--_GCInternalMilCmdConnection@@UEAAPEAXI@Z.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1801B28AC (-Disconnect@CConnection@@QEAAXXZ.c)
 */

__int64 __fastcall MilCompositionEngine_Uninitialize(struct HMIL_CONNECTION__ *a1)
{
  CInternalMilCmdConnection *v1; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 && g_pConnection == a1 )
  {
    CConnection::Disconnect(g_pConnection);
    v1 = g_pConnection;
    g_pConnection = 0LL;
    if ( v1 )
      CInternalMilCmdConnection::`scalar deleting destructor'(v1, 1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}

/*
 * XREFs of ?MilCompositionEngine_GetComposedEventId@@YAJPEAI@Z @ 0x1800ADB30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z @ 0x1800ADB80 (-GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall MilCompositionEngine_GetComposedEventId(unsigned int *a1)
{
  int ComposedEventId; // ebx
  __int64 v2; // rdx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !g_pConnection )
  {
    ComposedEventId = -2147483634;
    v2 = 42LL;
    goto LABEL_4;
  }
  ComposedEventId = CInternalMilCmdConnection::GetComposedEventId(g_pConnection, a1);
  if ( ComposedEventId < 0 )
  {
    v2 = 43LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)(unsigned int)ComposedEventId,
      v4);
    return (unsigned int)ComposedEventId;
  }
  return 0LL;
}

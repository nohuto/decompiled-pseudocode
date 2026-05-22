/*
 * XREFs of ?CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18001F0BC
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18001EEF8 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18001F190 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18003CDFC (IsGetMPCInputPostProcessorPresent.c)
 *     ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x180138130 (-Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 */

__int64 __fastcall CreateSystemInputRouter(void *a1, struct IInputFocusListener *a2, struct ISystemInputRouter **a3)
{
  int v6; // ebp
  int v7; // ebx
  __int64 v8; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  v6 = QueryTransientObjectSecurityDescriptor(8LL, L"MPCManager", &v12);
  if ( v12 )
    FreeTransientObjectSecurityDescriptor();
  if ( v6 >= 0 && (unsigned __int8)IsGetMPCInputPostProcessorPresent() )
  {
    v7 = MPCInputRouter::Create(a1, a2, a3);
    if ( v7 < 0 )
    {
      v8 = 47LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\factory\\lib\\inputrouterfactory.cpp",
        (const char *)(unsigned int)v7,
        v10);
      return (unsigned int)v7;
    }
  }
  else
  {
    v7 = DWMInputRouter::Create((struct IDWMInputProxy *)a1, a2, a3);
    if ( v7 < 0 )
    {
      v8 = 51LL;
      goto LABEL_7;
    }
  }
  return 0LL;
}

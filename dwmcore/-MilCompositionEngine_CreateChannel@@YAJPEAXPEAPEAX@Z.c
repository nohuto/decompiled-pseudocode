__int64 __fastcall MilCompositionEngine_CreateChannel(struct IDwmChannelProvider *a1, struct CChannel **a2)
{
  int v3; // eax
  unsigned int v4; // edi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CChannel *v10; // [rsp+40h] [rbp+18h] BYREF

  if ( !g_pConnection )
  {
    v6 = -2003303402;
    v7 = 23LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)v6,
      v8);
    return v6;
  }
  if ( !a2 )
  {
    v6 = -2147024809;
    v7 = 24LL;
    goto LABEL_7;
  }
  v3 = CInternalMilCmdConnection::CreateChannel(g_pConnection, a1, &v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)(unsigned int)v3,
      v8);
    return v4;
  }
  else
  {
    *a2 = v10;
    return 0LL;
  }
}

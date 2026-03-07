__int64 __fastcall CComposition::Channel_SetConnectionId(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SETCONNECTIONID *a4)
{
  __int64 v4; // rsi
  unsigned int v6; // ebp
  int v8; // eax
  int v10; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CResourceTable *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  v4 = *((_QWORD *)this + 155);
  v6 = *((_DWORD *)a4 + 5);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct CResourceTable **))(**(_QWORD **)(v4 + 32) + 32LL))(
         *(_QWORD *)(v4 + 32),
         *((_QWORD *)a4 + 1),
         v6,
         &v13);
  if ( v8 == -2018375658 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v4 + 16) + 224LL))(
            *(_QWORD *)(v4 + 16),
            v6,
            0LL);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x138,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\messageconversationhost.cpp",
        (const char *)(unsigned int)v10,
        v11);
  }
  else if ( !v8 )
  {
    if ( *((_BYTE *)a4 + 16) )
      *((_DWORD *)a2 + 20) = (_DWORD)v13;
    else
      *((_DWORD *)a2 + 19) = (_DWORD)v13;
  }
  return 0LL;
}

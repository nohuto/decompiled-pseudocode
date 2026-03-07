__int64 __fastcall CMessageConversationHost::Initialize(CMessageConversationHost *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int ConversationHost; // eax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v2 = CMessageConversationHost::InitializeServer(this, &v10);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x60u, 0LL);
  }
  else
  {
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 3))(
           *((_QWORD *)this + 3),
           &GUID_5e648581_8bf0_4f2a_9f51_28d09a2202d6,
           (char *)this + 32);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x69u, 0LL);
    }
    else
    {
      ConversationHost = CoreUICallCreateConversationHost(
                           *((_QWORD *)this + 2),
                           *((_QWORD *)this + 3),
                           (char *)this + 40,
                           0LL);
      v4 = ConversationHost;
      if ( ConversationHost < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ConversationHost, 0x75u, 0LL);
      else
        return 0;
    }
  }
  return v4;
}

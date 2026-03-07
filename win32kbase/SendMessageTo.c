__int64 __fastcall SendMessageTo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // esi
  __int64 v7; // rax

  v4 = a3;
  v6 = a1;
  v7 = SGDGetUserSessionState(a1, a2, a3, a4);
  return InputExtensibilityCallout::CoreMsgSendMessage(*(_QWORD *)(v7 + 16048), v6, a2, v4);
}

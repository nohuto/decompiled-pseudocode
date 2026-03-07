void __fastcall FreeThreadPointerHookData(struct tagTHREADPOINTERDATA *a1)
{
  __int64 v2; // rax

  v2 = SGDGetUserSessionState(a1);
  CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(v2 + 3424), *((_QWORD *)a1 + 3), 5LL, a1);
  Win32FreePool(a1);
}

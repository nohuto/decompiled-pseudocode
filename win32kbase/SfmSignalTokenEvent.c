__int64 __fastcall SfmSignalTokenEvent(__int64 a1)
{
  __int64 v1; // rax
  LONG PreviousState; // [rsp+30h] [rbp+8h] BYREF

  PreviousState = 0;
  v1 = SGDGetSessionState(a1);
  ZwSetEvent(*(HANDLE *)(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 6472LL) + 24LL), &PreviousState);
  return (unsigned int)PreviousState;
}

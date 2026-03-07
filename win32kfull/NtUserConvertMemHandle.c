__int64 __fastcall NtUserConvertMemHandle(void *Src, size_t Size)
{
  unsigned int v2; // ebx
  __int64 v4; // rbx
  __int64 v5; // rcx

  v2 = Size;
  EnterCrit(0LL, 0LL);
  ProbeForRead(Src, v2, 1u);
  v4 = ConvertMemHandle(Src, v2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}

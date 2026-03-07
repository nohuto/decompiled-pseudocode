__int64 __fastcall ZwNotifyChangeDirectoryFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

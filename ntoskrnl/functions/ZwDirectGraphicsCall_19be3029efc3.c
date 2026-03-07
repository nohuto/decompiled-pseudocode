__int64 __fastcall ZwDirectGraphicsCall(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

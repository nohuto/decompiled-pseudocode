DXGGLOBAL::COUNT_TICKS_IN_SCOPE *__fastcall DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
        DXGGLOBAL::COUNT_TICKS_IN_SCOPE *this,
        union _LARGE_INTEGER *a2)
{
  ULONG UserTime; // [rsp+30h] [rbp+8h] BYREF

  UserTime = 0;
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = KeQueryRuntimeThread(KeGetCurrentThread(), &UserTime);
  return this;
}

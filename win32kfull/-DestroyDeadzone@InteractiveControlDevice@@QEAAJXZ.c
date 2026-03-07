__int64 __fastcall InteractiveControlDevice::DestroyDeadzone(InteractiveControlDevice *this)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *((_QWORD *)this + 30);
  if ( !v2 || *((_QWORD *)this + 43) == -1LL )
    return 3221225485LL;
  result = RIMDestroyPointerDeviceDeadzone(v2 + 72);
  *((_QWORD *)this + 43) = -1LL;
  *((_DWORD *)this + 84) = 1;
  return result;
}

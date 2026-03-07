void __fastcall InteractiveControlDevice::SetBackgroundAccessor(
        InteractiveControlDevice *this,
        struct tagWND *a2,
        int a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((struct tagWND **)this + 6) == a2 )
  {
    *((_DWORD *)this + 14) |= a3;
  }
  else
  {
    v5[1] = a2;
    v5[0] = (char *)this + 48;
    HMAssignmentLock(v5, 0LL);
    *((_DWORD *)this + 14) = a3;
  }
}

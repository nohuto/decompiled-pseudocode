__int64 __fastcall InteractiveControlManager::RemoveDevice(InteractiveControlManager *this, void **a2)
{
  int Device; // esi
  __int64 v4; // rbx
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  Device = InteractiveControlManager::FindDevice(this, 0, *a2, 0LL, &v6);
  if ( Device >= 0 )
  {
    v4 = v6;
    InteractiveControlDevice::Deinitialize(*((InteractiveControlDevice **)this + v6 + 5));
    Win32FreePool(*((void **)this + v4 + 5));
    *((_QWORD *)this + v4 + 5) = 0LL;
    --*((_DWORD *)this + 20);
  }
  return (unsigned int)Device;
}

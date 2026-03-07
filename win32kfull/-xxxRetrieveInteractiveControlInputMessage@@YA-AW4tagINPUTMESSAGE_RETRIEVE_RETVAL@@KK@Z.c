__int64 __fastcall xxxRetrieveInteractiveControlInputMessage(__int64 a1, unsigned __int16 a2)
{
  unsigned int v3; // ebx
  InteractiveControlManager *v4; // rax
  unsigned int v5; // ecx
  struct InteractiveControlDevice *v7; // [rsp+50h] [rbp+18h] BYREF
  struct InteractiveControlInput *v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v4 = InteractiveControlManager::Instance(a1);
  v7 = 0LL;
  v8 = 0LL;
  if ( (int)InteractiveControlManager::FindDevice(v4, v3, 0LL, &v7, 0LL) >= 0
    && v7
    && (unsigned int)InteractiveControlDevice::GetInputReport(v7, a2, &v8) )
  {
    v5 = 1;
    *((_DWORD *)v8 + 6) = 1;
  }
  else
  {
    return 2;
  }
  return v5;
}

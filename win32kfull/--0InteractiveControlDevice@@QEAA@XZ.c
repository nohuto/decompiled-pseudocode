InteractiveControlDevice *__fastcall InteractiveControlDevice::InteractiveControlDevice(InteractiveControlDevice *this)
{
  InteractiveControlDevice *result; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)((char *)this + 60) = 1LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  *((union _LARGE_INTEGER *)this + 33) = PerformanceFrequency;
  *((_QWORD *)this + 43) = -1LL;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  *((_DWORD *)this + 84) = 1;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 98) = 196613;
  memset_0((char *)this + 72, 0, 0xB8uLL);
  result = this;
  *((_DWORD *)this + 8) = 0;
  return result;
}

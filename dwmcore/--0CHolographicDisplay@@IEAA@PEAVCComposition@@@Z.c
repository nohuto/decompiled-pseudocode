CHolographicDisplay *__fastcall CHolographicDisplay::CHolographicDisplay(
        CHolographicDisplay *this,
        struct CComposition *a2)
{
  CHolographicDisplay *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CHolographicDisplay::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 9) = &CHolographicDisplay::`vftable'{for `IHolographicDisplayInfo'};
  *((_DWORD *)this + 22) = 0;
  *(_OWORD *)((char *)this + 92) = 0LL;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *((_BYTE *)this + 124) = 0;
  InitializeSRWLock((PSRWLOCK)this + 16);
  *((_DWORD *)this + 22) = _InterlockedIncrement(&CHolographicDisplay::s_displayIdCounter);
  result = this;
  *((_QWORD *)this + 10) = *(_QWORD *)(*((_QWORD *)this + 2) + 264LL);
  return result;
}

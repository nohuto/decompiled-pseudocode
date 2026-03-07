__int64 __fastcall PanAssertMode(struct DHPDEV__ *a1, unsigned int a2)
{
  unsigned int v4; // ebx
  HSEMAPHORE v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  EngAcquireSemaphore(v6);
  v4 = (*((__int64 (__fastcall **)(_QWORD, _QWORD))a1 + 104))(*((_QWORD *)a1 + 4), a2);
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v6);
  return v4;
}

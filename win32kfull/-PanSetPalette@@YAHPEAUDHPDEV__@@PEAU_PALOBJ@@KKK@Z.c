__int64 __fastcall PanSetPalette(
        struct DHPDEV__ *a1,
        struct _PALOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v9; // ebx
  HSEMAPHORE v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  EngAcquireSemaphore(v11);
  v9 = (*((__int64 (__fastcall **)(_QWORD, struct _PALOBJ *, _QWORD, _QWORD, unsigned int))a1 + 121))(
         *((_QWORD *)a1 + 4),
         a2,
         a3,
         a4,
         a5);
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v11);
  return v9;
}

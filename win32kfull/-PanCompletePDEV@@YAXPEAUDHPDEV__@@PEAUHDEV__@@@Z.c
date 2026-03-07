void __fastcall PanCompletePDEV(struct DHPDEV__ *a1, HDEV a2)
{
  HSEMAPHORE v4; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)a1 + 6) = a2;
  v4 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  EngAcquireSemaphore(v4);
  (*((void (__fastcall **)(_QWORD, HDEV))a1 + 100))(*((_QWORD *)a1 + 4), a2);
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v4);
}

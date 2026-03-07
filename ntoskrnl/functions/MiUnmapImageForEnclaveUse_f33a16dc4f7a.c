__int64 __fastcall MiUnmapImageForEnclaveUse(unsigned __int64 a1)
{
  $115DCDF994C6370D29323EAB0E0C9502 v3; // [rsp+20h] [rbp-48h] BYREF

  memset(&v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)&v3);
  MiUnmapViewOfSection((PRKPROCESS)PsSecureSystemProcess, a1, 0, 0);
  return KiUnstackDetachProcess(&v3);
}

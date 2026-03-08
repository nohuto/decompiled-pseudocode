/*
 * XREFs of MiUnmapImageForEnclaveUse @ 0x140A3BD1C
 * Callers:
 *     MiInitializeVsmEnclave @ 0x140A3B328 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3B820 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MiUnmapImageForEnclaveUse(unsigned __int64 a1)
{
  $115DCDF994C6370D29323EAB0E0C9502 v3; // [rsp+20h] [rbp-48h] BYREF

  memset(&v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)&v3);
  MiUnmapViewOfSection((PRKPROCESS)PsSecureSystemProcess, a1, 0, 0);
  return KiUnstackDetachProcess(&v3);
}

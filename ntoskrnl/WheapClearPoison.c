/*
 * XREFs of WheapClearPoison @ 0x140A05870
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x140A0555C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MmAddPhysicalMemory @ 0x140A2A460 (MmAddPhysicalMemory.c)
 *     MmRemovePhysicalMemory @ 0x140A2A520 (MmRemovePhysicalMemory.c)
 */

__int64 __fastcall WheapClearPoison(PPHYSICAL_ADDRESS StartAddress)
{
  int v2; // ebx
  void *v3; // rax
  LARGE_INTEGER StartAddressa; // [rsp+20h] [rbp-40h] BYREF
  LARGE_INTEGER NumberOfBytes; // [rsp+28h] [rbp-38h] BYREF
  _DWORD Src[8]; // [rsp+30h] [rbp-30h] BYREF
  LONGLONG QuadPart; // [rsp+50h] [rbp-10h]

  StartAddressa = *StartAddress;
  StartAddressa.LowPart |= 1u;
  NumberOfBytes.QuadPart = 4096LL;
  if ( MmRemovePhysicalMemory(&StartAddressa, &NumberOfBytes) >= 0 )
  {
    v3 = (void *)MmMapIoSpaceEx(StartAddress->QuadPart, 64LL, 4u);
    if ( v3 )
    {
      __asm { clzero }
      _mm_mfence();
      MmUnmapIoSpace(v3, 0x40uLL);
      v2 = 0;
    }
    else
    {
      v2 = -1073741823;
    }
    MmAddPhysicalMemory(StartAddress, &NumberOfBytes);
    if ( v2 >= 0 && KeGetCurrentIrql() <= 2u )
    {
      QuadPart = StartAddress->QuadPart;
      Src[0] = 1733060695;
      Src[1] = 1;
      Src[2] = 40;
      Src[3] = 1;
      Src[5] = -2147483630;
      Src[4] = 541868360;
      Src[6] = 2;
      Src[7] = 8;
      WheaLogInternalEvent(Src);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v2;
}

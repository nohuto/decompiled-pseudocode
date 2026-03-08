/*
 * XREFs of EmpCacheBiosDate @ 0x140B4EDC8
 * Callers:
 *     EmInitSystem @ 0x140B4CBA8 (EmInitSystem.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     strtoul @ 0x1403D32B8 (strtoul.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x140412850 (ZwUnmapViewOfSection.c)
 *     EmpMapPhysicalAddress @ 0x140B8FC4C (EmpMapPhysicalAddress.c)
 */

char __fastcall EmpCacheBiosDate(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rax
  _WORD *v5; // rbx
  unsigned int v6; // eax
  HANDLE v7; // rbx
  char Str[2]; // [rsp+30h] [rbp-58h] BYREF
  char v9; // [rsp+32h] [rbp-56h]
  char v10; // [rsp+34h] [rbp-54h]
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v13; // [rsp+48h] [rbp-40h] BYREF

  memset(&v13, 0, sizeof(v13));
  v2 = 0;
  BaseAddress = 0LL;
  Handle = 0LL;
  EmpCachedBiosDate = 0;
  v9 = 0;
  if ( dword_140C316F0 == 1 )
  {
    v4 = EmpMapPhysicalAddress(a1, a2, &Handle, &BaseAddress, &v13);
    v5 = (_WORD *)v4;
    if ( v4 )
    {
      *(_WORD *)Str = *(_WORD *)(v4 + 6);
      v6 = strtoul(Str, 0LL, 16);
      EmpCachedBiosDate = (v6 < 0x80 ? 0x20000000 : 419430400) + (v6 << 16);
      *(_WORD *)Str = *v5;
      EmpCachedBiosDate |= strtoul(Str, 0LL, 16) << 8;
      *(_WORD *)Str = *(_WORD *)((char *)v5 + 3);
      EmpCachedBiosDate |= strtoul(Str, 0LL, 16);
      v2 = 1;
      v10 = 1;
      v7 = Handle;
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      KiUnstackDetachProcess(&v13);
      ZwClose(v7);
    }
  }
  return v2;
}

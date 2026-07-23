/*
 * XREFs of sub_1406670B0 @ 0x1406670B0
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D772C (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405D7994 @ 0x1405D7994 (sub_1405D7994.c)
 *     sub_1405D7C64 @ 0x1405D7C64 (sub_1405D7C64.c)
 *     sub_140666A00 @ 0x140666A00 (sub_140666A00.c)
 *     sub_140963D98 @ 0x140963D98 (sub_140963D98.c)
 *     sub_140963F88 @ 0x140963F88 (sub_140963F88.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1403F9E80 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1406670B0(PVOID BaseAddress, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  NTSTATUS v7; // r8d
  __int64 v8; // rcx
  ULONG_PTR v10; // [rsp+30h] [rbp-50h] BYREF
  __int128 MemoryInformation; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+48h] [rbp-38h]
  __int128 v13; // [rsp+50h] [rbp-30h] BYREF
  __int128 v14; // [rsp+60h] [rbp-20h]
  __int128 v15; // [rsp+70h] [rbp-10h]
  ULONG_PTR ReturnLength; // [rsp+A8h] [rbp+28h] BYREF

  v3 = a2;
  v10 = 0LL;
  ReturnLength = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  MemoryInformation = 0LL;
  v7 = ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         &MemoryInformation,
         0x18uLL,
         &ReturnLength);
  if ( v7 >= 0 )
  {
    v8 = (unsigned int)v12 >> 2;
    LOBYTE(v8) = v8 & 0xF;
    if ( qword_140C1DB20 && (LOBYTE(v6) = 12, (unsigned int)qword_140C1DB20(v8, v6)) )
    {
      v7 = 0;
      if ( a3 )
      {
        v7 = ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               BaseAddress,
               MemoryBasicInformation,
               &v13,
               0x30uLL,
               &v10);
        if ( v7 >= 0
          && ((unsigned __int64)BaseAddress < (unsigned __int64)v13
           || (unsigned __int64)BaseAddress + v3 > *((_QWORD *)&v14 + 1) + (_QWORD)v13
           || DWORD1(v15) != 32) )
        {
          return (unsigned int)-1073741811;
        }
      }
    }
    else
    {
      return (unsigned int)-1073740760;
    }
  }
  return (unsigned int)v7;
}

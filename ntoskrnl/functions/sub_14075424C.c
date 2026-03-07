__int64 __fastcall sub_14075424C(PVOID BaseAddress, unsigned int a2, int a3)
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
         (MEMORY_INFORMATION_CLASS)6,
         &MemoryInformation,
         0x18uLL,
         &ReturnLength);
  if ( v7 >= 0 )
  {
    v8 = (unsigned int)v12 >> 2;
    LOBYTE(v8) = v8 & 0xF;
    if ( qword_140C37600 && (LOBYTE(v6) = 12, (unsigned int)qword_140C37600(v8, v6)) )
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

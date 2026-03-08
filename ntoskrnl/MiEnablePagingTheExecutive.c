/*
 * XREFs of MiEnablePagingTheExecutive @ 0x140B5F508
 * Callers:
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     MiSetPagingOfDriver @ 0x1402AFF28 (MiSetPagingOfDriver.c)
 *     MiSnapDriverRange @ 0x14072A118 (MiSnapDriverRange.c)
 *     MiImagePagable @ 0x14072A7E0 (MiImagePagable.c)
 *     MiLockPagableSections @ 0x140B5F628 (MiLockPagableSections.c)
 */

void MiEnablePagingTheExecutive()
{
  PVOID *i; // rbx
  unsigned int v1; // edi
  unsigned __int64 v2; // rdx
  volatile signed __int32 *v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    *((_DWORD *)i + 26) |= 0x400000u;
    v2 = (unsigned __int64)i[6];
    if ( PsNtosImageBase && (v2 < PsNtosImageEnd && v2 >= PsNtosImageBase || v2 < PsHalImageEnd && v2 >= PsHalImageBase) )
      v3 = (volatile signed __int32 *)&xmmword_140C655D0;
    else
      v3 = (volatile signed __int32 *)&xmmword_140C655D0 + 1;
    _InterlockedExchangeAdd(v3, (((_DWORD)i[8] & 0xFFF) != 0) + (*((_DWORD *)i + 16) >> 12));
    v4 = (unsigned __int64)i[6];
    v6 = 0LL;
    v5 = 0LL;
    if ( MiImagePagable(i, v4) )
    {
      v1 = 0;
      do
      {
        v1 = MiSnapDriverRange((__int64)i, v1, 1, 0LL, &v5, &v6);
        if ( v5 )
          MiSetPagingOfDriver((__int64)i, v5, v6);
      }
      while ( v1 );
    }
    MiLockPagableSections(i, 1LL);
  }
}

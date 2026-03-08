/*
 * XREFs of HalpIommuProcessMemoryErrata @ 0x14039A298
 * Callers:
 *     HalpIommuProcessReservationsInternal @ 0x14039A0E8 (HalpIommuProcessReservationsInternal.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpIommuProcessMemoryErrata(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 i; // r10
  __int64 v6; // rbx
  __int64 j; // r11
  ULONG_PTR v8; // r8
  ULONG_PTR k; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  bool v14; // zf

  for ( i = 0LL; (unsigned int)i < a1; i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(a2 + 8 * i);
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v6 + 24); j = (unsigned int)(j + 1) )
    {
      v8 = v6 + 8 * (j + 2 * (j + 2));
      if ( !*(_BYTE *)(v8 + 16) )
      {
        for ( k = *(_QWORD *)(a3 + 32); k != a3 + 32; k = *(_QWORD *)k )
        {
          v10 = *(int *)(k + 24);
          if ( (unsigned int)v10 <= 0x25 )
          {
            v11 = 0x25C0C00048LL;
            if ( _bittest64(&v11, v10) )
              continue;
          }
          v12 = *(_QWORD *)(k + 32) << 12;
          if ( *(_QWORD *)v8 <= v12 + (*(_QWORD *)(k + 40) << 12) - 1LL && *(_QWORD *)(v8 + 8) >= v12 )
          {
            v14 = HalpIommuDmaGuardTableOptIn == 0;
            *(_BYTE *)(v8 + 16) = 1;
            if ( !v14 )
              KeBugCheckEx(0x5Cu, 0x501uLL, v8, k, 0LL);
          }
        }
      }
    }
  }
  return 1LL;
}

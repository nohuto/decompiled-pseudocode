/*
 * XREFs of IopRemovePageDumpRange @ 0x1405511AC
 * Callers:
 *     IopDumpCallRemovePagesCallbacks @ 0x1405502F0 (IopDumpCallRemovePagesCallbacks.c)
 *     IopRemoveLargeAllocsFromPartialDump @ 0x14055B490 (IopRemoveLargeAllocsFromPartialDump.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 *     IoFreeDumpRange @ 0x14054E080 (IoFreeDumpRange.c)
 *     IopAddAddressRangeToRemovePagesArray @ 0x14055A2A4 (IopAddAddressRangeToRemovePagesArray.c)
 */

__int64 __fastcall IopRemovePageDumpRange(__int64 a1, char *a2)
{
  int v4; // ebx
  char v6; // r15
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  int v9; // ebx
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // r12d
  unsigned __int64 v13; // rsi
  PHYSICAL_ADDRESS v14; // rax
  _QWORD v15[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h]
  __int128 v18; // [rsp+50h] [rbp-10h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( a2 )
    *a2 = 0;
  v4 = *(_DWORD *)(a1 + 8);
  if ( (v4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  if ( v4 >= 0 )
  {
    v6 = 0;
  }
  else
  {
    v4 &= ~0x80000000;
    v6 = 1;
    *(_DWORD *)(a1 + 8) = v4;
  }
  if ( ((v4 - 1) & v4) != 0 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 24);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v4 & 1;
  if ( !v9 )
    v8 >>= 12;
  DWORD2(v18) |= 1u;
  v10 = 2 * (v9 ^ 1);
  v11 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v15[0] = *(_QWORD *)(v11 + 48);
  v15[1] = v11 + 56;
  *(_QWORD *)&v17 = v15;
  v12 = IoFreeDumpRange((__int64)&v16, (char *)v8, v7, v10);
  if ( v12 >= 0 && a2 )
    *a2 = v6;
  if ( IopRemovePagesArray )
  {
    v13 = *(_QWORD *)(a1 + 24);
    if ( v10 == 2 )
    {
      if ( v13 && v8 < v15[0] && v8 + v13 - 1 >= v15[0] )
        v13 = v15[0] - v8;
      IopAddAddressRangeToRemovePagesArray(v8, v13);
    }
    else if ( !v10 && v13 )
    {
      do
      {
        if ( MmIsAddressValidEx(v8) )
        {
          v14.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)v8).QuadPart >> 12;
          if ( v14.QuadPart < v15[0] )
            ((void (__fastcall *)(_QWORD, _QWORD))IopAddAddressRangeToRemovePagesArray)(
              (PHYSICAL_ADDRESS)v14.QuadPart,
              1LL);
        }
        v8 += 4096LL;
        --v13;
      }
      while ( v13 );
    }
  }
  return (unsigned int)v12;
}

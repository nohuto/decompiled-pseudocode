/*
 * XREFs of sub_1405E73D4 @ 0x1405E73D4
 * Callers:
 *     sub_1405E7374 @ 0x1405E7374 (sub_1405E7374.c)
 * Callees:
 *     RtlULongAdd @ 0x140200578 (RtlULongAdd.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ?RtlULongMult@@YAJKKPEAK@Z @ 0x1405C0A54 (-RtlULongMult@@YAJKKPEAK@Z.c)
 *     WbReAlloc @ 0x1405E74DC (WbReAlloc.c)
 */

__int64 __fastcall sub_1405E73D4(__int64 a1, __int64 a2, ULONG a3, unsigned int a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // r10d
  NTSTATUS v9; // edi
  ULONG v10; // r10d
  unsigned int v11; // r11d
  unsigned int v12; // r10d
  unsigned int v13; // edx
  unsigned int v14; // ecx
  size_t Size[5]; // [rsp+20h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp+8h] BYREF
  ULONG pulResult; // [rsp+60h] [rbp+18h] BYREF

  pulResult = a3;
  v4 = *(_DWORD *)a1;
  v5 = *(_DWORD *)(a1 + 8);
  LODWORD(Size[0]) = 0;
  LODWORD(NumberOfBytes) = 0;
  pulResult = 0;
  v9 = RtlULongMult(v5, v4, (unsigned int *)Size);
  if ( v9 >= 0 )
  {
    v9 = RtlULongAdd(v10, *(_DWORD *)(a1 + 24), &pulResult);
    if ( v9 >= 0 )
    {
      v9 = RtlULongMult(pulResult, v11, (unsigned int *)&NumberOfBytes);
      if ( v9 >= 0 )
      {
        v13 = *(_DWORD *)(a1 + 4);
        if ( v13 + 1 >= v12 )
        {
          v9 = WbReAlloc(*(PVOID *)(a1 + 16), LODWORD(Size[0]), (unsigned int)NumberOfBytes);
          if ( v9 < 0 )
            return (unsigned int)v9;
          *(_DWORD *)(a1 + 8) += *(_DWORD *)(a1 + 24);
          v12 = *(_DWORD *)(a1 + 8);
          v13 = *(_DWORD *)(a1 + 4);
        }
        if ( a4 <= v13 && v12 )
        {
          memmove(
            (void *)(*(_QWORD *)(a1 + 16) + (a4 + 1) * *(_DWORD *)a1),
            (const void *)(*(_QWORD *)(a1 + 16) + a4 * *(_DWORD *)a1),
            *(_DWORD *)a1 * (v13 - a4));
          v14 = *(_DWORD *)a1;
          ++*(_DWORD *)(a1 + 4);
          *(_QWORD *)(a4 * v14 + *(_QWORD *)(a1 + 16)) = a2;
        }
        else
        {
          return (unsigned int)-1073741811;
        }
      }
    }
  }
  return (unsigned int)v9;
}

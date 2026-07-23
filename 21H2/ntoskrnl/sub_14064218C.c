/*
 * XREFs of sub_14064218C @ 0x14064218C
 * Callers:
 *     WbHeapExecuteCall @ 0x140642458 (WbHeapExecuteCall.c)
 * Callees:
 *     RtlULongAdd @ 0x140200578 (RtlULongAdd.c)
 *     ?RtlULongMult@@YAJKKPEAK@Z @ 0x1405C0A54 (-RtlULongMult@@YAJKKPEAK@Z.c)
 *     WbReAlloc @ 0x1405E74DC (WbReAlloc.c)
 *     sub_140642270 @ 0x140642270 (sub_140642270.c)
 */

int __fastcall sub_14064218C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // r10d
  int result; // eax
  ULONG v11; // r10d
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  SIZE_T NumberOfBytes[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONG pulResult; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 20);
  NumberOfBytes[0] = 0LL;
  pulResult = 0;
  result = RtlULongMult(v5, 0x20u, (unsigned int *)NumberOfBytes + 1);
  if ( result >= 0 )
  {
    result = RtlULongAdd(v11, *(_DWORD *)(a1 + 32), &pulResult);
    if ( result >= 0 )
    {
      result = RtlULongMult(pulResult, v12, (unsigned int *)NumberOfBytes);
      if ( result >= 0 )
      {
        v14 = *(unsigned int *)(a1 + 16);
        if ( (int)v14 + 1 >= v13 )
        {
          result = WbReAlloc(
                     *(PVOID *)(a1 + 24),
                     HIDWORD(NumberOfBytes[0]),
                     LODWORD(NumberOfBytes[0]),
                     (_QWORD *)(a1 + 24));
          if ( result < 0 )
            return result;
          *(_DWORD *)(a1 + 20) += *(_DWORD *)(a1 + 32);
          v14 = *(unsigned int *)(a1 + 16);
        }
        v15 = a5;
        v16 = *(_QWORD *)(a1 + 24) + 32 * v14;
        *(_QWORD *)v16 = a2;
        *(_QWORD *)(v16 + 8) = a3;
        *(_QWORD *)(v16 + 16) = a4;
        *(_DWORD *)(v16 + 24) = v15;
        ++*(_DWORD *)(a1 + 16);
        return sub_140642270(a2);
      }
    }
  }
  return result;
}

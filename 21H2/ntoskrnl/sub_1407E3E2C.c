/*
 * XREFs of sub_1407E3E2C @ 0x1407E3E2C
 * Callers:
 *     WbHeapExecuteCall @ 0x1407E3070 (WbHeapExecuteCall.c)
 * Callees:
 *     RtlUIntAdd @ 0x1402E1260 (RtlUIntAdd.c)
 *     ?RtlULongMult@@YAJKKPEAK@Z @ 0x140649558 (-RtlULongMult@@YAJKKPEAK@Z.c)
 *     WbReAlloc @ 0x1406DD6DC (WbReAlloc.c)
 *     sub_1407E3F10 @ 0x1407E3F10 (sub_1407E3F10.c)
 */

int __fastcall sub_1407E3E2C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // r10d
  int result; // eax
  UINT v11; // r10d
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-18h] BYREF
  size_t Size[2]; // [rsp+24h] [rbp-14h] BYREF
  UINT puResult; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 20);
  LODWORD(Size[0]) = 0;
  v17 = 0;
  puResult = 0;
  result = RtlULongMult(v5, 0x20u, (unsigned int *)Size);
  if ( result >= 0 )
  {
    result = RtlUIntAdd(v11, *(_DWORD *)(a1 + 32), &puResult);
    if ( result >= 0 )
    {
      result = RtlULongMult(puResult, v12, &v17);
      if ( result >= 0 )
      {
        v14 = *(unsigned int *)(a1 + 16);
        if ( (int)v14 + 1 >= v13 )
        {
          result = WbReAlloc(*(PVOID *)(a1 + 24), LODWORD(Size[0]), v17, (_QWORD *)(a1 + 24));
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
        return sub_1407E3F10(a2);
      }
    }
  }
  return result;
}

/*
 * XREFs of sub_140755020 @ 0x140755020
 * Callers:
 *     sub_140754FC0 @ 0x140754FC0 (sub_140754FC0.c)
 * Callees:
 *     RtlUIntAdd @ 0x14022A638 (RtlUIntAdd.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ?RtlULongMult@@YAJKKPEAK@Z @ 0x14066B6E8 (-RtlULongMult@@YAJKKPEAK@Z.c)
 *     WbReAlloc @ 0x14075521C (WbReAlloc.c)
 */

__int64 __fastcall sub_140755020(unsigned int *a1, __int64 a2, UINT a3, unsigned int a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // r10d
  NTSTATUS v9; // edi
  UINT v10; // r10d
  unsigned int v11; // r11d
  unsigned int v12; // r10d
  PVOID *v13; // rsi
  unsigned int v14; // eax
  size_t Size[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF
  UINT puResult; // [rsp+60h] [rbp+18h] BYREF

  puResult = a3;
  v4 = *a1;
  v5 = a1[2];
  LODWORD(Size[0]) = 0;
  v17 = 0;
  puResult = 0;
  v9 = RtlULongMult(v5, v4, (unsigned int *)Size);
  if ( v9 >= 0 )
  {
    v9 = RtlUIntAdd(v10, a1[6], &puResult);
    if ( v9 >= 0 )
    {
      v9 = RtlULongMult(puResult, v11, &v17);
      if ( v9 >= 0 )
      {
        v13 = (PVOID *)(a1 + 4);
        if ( a1[1] + 1 >= v12 )
        {
          v9 = WbReAlloc(*v13, LODWORD(Size[0]));
          if ( v9 < 0 )
            return (unsigned int)v9;
          a1[2] += a1[6];
          v12 = a1[2];
        }
        v14 = a1[1];
        if ( a4 <= v14 && v12 )
        {
          memmove((char *)*v13 + (a4 + 1) * *a1, (char *)*v13 + a4 * *a1, *a1 * (v14 - a4));
          ++a1[1];
          *(_QWORD *)((char *)*v13 + *a1 * a4) = a2;
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

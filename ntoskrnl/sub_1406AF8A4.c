/*
 * XREFs of sub_1406AF8A4 @ 0x1406AF8A4
 * Callers:
 *     WbHeapExecuteCall @ 0x1406AF56C (WbHeapExecuteCall.c)
 * Callees:
 *     RtlUIntAdd @ 0x14022A638 (RtlUIntAdd.c)
 *     ?RtlULongMult@@YAJKKPEAK@Z @ 0x14066B6E8 (-RtlULongMult@@YAJKKPEAK@Z.c)
 *     sub_1406AF984 @ 0x1406AF984 (sub_1406AF984.c)
 *     WbReAlloc @ 0x14075521C (WbReAlloc.c)
 */

NTSTATUS __fastcall sub_1406AF8A4(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // r10d
  NTSTATUS result; // eax
  UINT v11; // r10d
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  PVOID *v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-28h] BYREF
  size_t Size[4]; // [rsp+24h] [rbp-24h] BYREF
  UINT puResult; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1[5];
  LODWORD(Size[0]) = 0;
  v17 = 0;
  puResult = 0;
  result = RtlULongMult(v5, 0x20u, (unsigned int *)Size);
  if ( result >= 0 )
  {
    result = RtlUIntAdd(v11, a1[8], &puResult);
    if ( result >= 0 )
    {
      result = RtlULongMult(puResult, v12, &v17);
      if ( result >= 0 )
      {
        v14 = (PVOID *)(a1 + 6);
        if ( a1[4] + 1 >= v13 )
        {
          result = WbReAlloc(*v14, LODWORD(Size[0]));
          if ( result < 0 )
            return result;
          a1[5] += a1[8];
        }
        v15 = a5;
        v16 = (__int64)*v14 + 32 * (unsigned int)a1[4];
        *(_QWORD *)v16 = a2;
        *(_QWORD *)(v16 + 8) = a3;
        *(_QWORD *)(v16 + 16) = a4;
        *(_DWORD *)(v16 + 24) = v15;
        ++a1[4];
        return sub_1406AF984(a2);
      }
    }
  }
  return result;
}

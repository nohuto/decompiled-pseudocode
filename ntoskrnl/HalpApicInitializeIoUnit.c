/*
 * XREFs of HalpApicInitializeIoUnit @ 0x14039F3E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicDescribeLines @ 0x1403744DC (HalpApicDescribeLines.c)
 *     HalMapIoSpace @ 0x14037AD90 (HalMapIoSpace.c)
 *     HalFixInterruptLine @ 0x14051F320 (HalFixInterruptLine.c)
 *     HalpApicConvertFromRte @ 0x14052546C (HalpApicConvertFromRte.c)
 */

__int64 __fastcall HalpApicInitializeIoUnit(__int64 a1)
{
  int *v1; // rbx
  int *v3; // rax
  int v4; // ecx
  int v5; // eax
  __int64 result; // rax
  unsigned int v7; // ebp
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-18h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0LL;
  v1 = *(int **)(a1 + 16);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( !v1 )
  {
    v3 = (int *)HalMapIoSpace(*(LARGE_INTEGER *)a1, 0x1000uLL, MmNonCached);
    *(_QWORD *)(a1 + 16) = v3;
    v1 = v3;
    if ( !v3 )
      return 3221225626LL;
  }
  *v1 = 1;
  v1[4] = 0;
  *v1 = 1;
  v4 = v1[4];
  *v1 = 1;
  v1[4] = 0;
  *v1 = 1;
  v5 = v1[4];
  if ( (unsigned int)(v4 - 1) > 0xFFFFFFFD || (_BYTE)v4 != (_BYTE)v5 || BYTE2(v4) != BYTE2(v5) )
  {
    *(_BYTE *)(a1 + 40) = 1;
    return 0LL;
  }
  *(_BYTE *)(a1 + 24) = v4;
  *(_BYTE *)(a1 + 25) = BYTE2(v4) + 1;
  *v1 = 0;
  v1[4] |= *(_DWORD *)(a1 + 8) << 24;
  if ( *(_BYTE *)(a1 + 26) || (result = HalpApicDescribeLines(a1), (int)result >= 0) )
  {
    v7 = 0;
    if ( *(_BYTE *)(a1 + 25) )
    {
      v8 = 17;
      do
      {
        *v1 = v8 - 1;
        v9 = (unsigned int)v1[4];
        if ( *(_BYTE *)(a1 + 26)
          || (v1[4] & 0x700) != 0x200
          || (v9 & 0x10000) != 0
          || (*v1 = v8,
              v10 = (unsigned int)v1[4],
              LODWORD(v15) = *(_DWORD *)(a1 + 8),
              HIDWORD(v15) = v7,
              HalpApicConvertFromRte(v9, v10, &v11),
              DWORD2(v12) == 7) )
        {
          v1[4] = 65791;
          *v1 = v8;
          v1[4] = 0;
        }
        else
        {
          result = HalFixInterruptLine(&v15, &v11);
          if ( (int)result < 0 )
            return result;
        }
        ++v7;
        v8 += 2;
      }
      while ( v7 < *(unsigned __int8 *)(a1 + 25) );
    }
    *(_BYTE *)(a1 + 26) = 1;
    return 0LL;
  }
  return result;
}

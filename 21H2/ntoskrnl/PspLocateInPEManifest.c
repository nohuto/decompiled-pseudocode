/*
 * XREFs of PspLocateInPEManifest @ 0x1405EBEAC
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1406A122C (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     MmCheckImageMapping @ 0x1405EBE68 (MmCheckImageMapping.c)
 *     LdrResSearchResource @ 0x1405EBFB0 (LdrResSearchResource.c)
 */

__int64 __fastcall PspLocateInPEManifest(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r10
  __int64 result; // rax
  int v6; // eax
  __int16 v7; // ax
  int v8; // r10d
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 1408);
  v4 = *(_QWORD *)(a1 + 1312);
  if ( v2 )
  {
    v7 = *(_WORD *)(v2 + 8);
    if ( v7 == 332 || v7 == 452 )
    {
      result = MmCheckImageMapping(a1);
      if ( (int)result < 0 )
        return result;
      LODWORD(v4) = v8 | 1;
    }
  }
  v9[2] = 0LL;
  v10 = 0LL;
  v9[0] = 24LL;
  v9[1] = 1LL;
  result = LdrResSearchResource(v4, (unsigned int)v9, 3, 48, a2 + 304, (__int64)&v10, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v6 = v10;
    if ( v10 > 0xFFFFFFFF )
      return 3221225595LL;
    *(_BYTE *)(a2 + 8) |= 0x20u;
    *(_DWORD *)(a2 + 312) = v6;
    *(_DWORD *)(*(_QWORD *)(a2 + 208) + 8LL) |= 0x2000u;
    return 0LL;
  }
  if ( (unsigned int)(result + 1073741687) <= 2 || (_DWORD)result == -1073741308 )
    return 0LL;
  return result;
}

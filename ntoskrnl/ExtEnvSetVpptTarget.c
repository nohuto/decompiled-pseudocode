/*
 * XREFs of ExtEnvSetVpptTarget @ 0x1405066D8
 * Callers:
 *     HalpVpptUpdatePhysicalTimer @ 0x140507DB0 (HalpVpptUpdatePhysicalTimer.c)
 * Callees:
 *     HalpInterruptSetDestination @ 0x14028E950 (HalpInterruptSetDestination.c)
 *     HalpInterruptGsiToLine @ 0x14028EF10 (HalpInterruptGsiToLine.c)
 *     HalpInterruptApplyOverrides @ 0x140379748 (HalpInterruptApplyOverrides.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpInterruptLineToGsi @ 0x140503150 (HalpInterruptLineToGsi.c)
 */

__int64 __fastcall ExtEnvSetVpptTarget(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  _DWORD *v4; // rbx
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h] BYREF
  __int128 v13; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v14[12]; // [rsp+50h] [rbp-19h] BYREF

  v11 = 0;
  v12 = 0LL;
  v2 = a2;
  memset(v14, 0, 0x58uLL);
  v3 = KiProcessorIndexToNumberMappingTable[v2];
  v4 = (_DWORD *)HalpAlwaysOnTimer;
  *((_QWORD *)&v13 + 1) = (unsigned __int16)(v3 >> 6);
  *(_QWORD *)&v13 = 1LL << (v3 & 0x3F);
  if ( HalpAlwaysOnTimer && *(_DWORD *)(HalpAlwaysOnTimer + 228) == 11 )
  {
    HIDWORD(v14[0]) = 211;
    v5 = v14[5] & 0xC0000000 | 4;
  }
  else
  {
    v4 = (_DWORD *)HalpClockTimer;
    if ( *(_DWORD *)(HalpClockTimer + 228) != 11 )
      KeBugCheckEx(0x5Cu, 0x114uLL, 0LL, 0xFFFFFFFFC00000BBuLL, 0LL);
    v5 = v14[5] & 0xC0000000;
    HIDWORD(v14[0]) = 209;
  }
  LOBYTE(v14[1]) = 13;
  LODWORD(v14[5]) = v5 | 0x40000000;
  HIDWORD(v14[1]) = v4[23];
  LODWORD(v14[2]) = v4[24];
  v6 = v4[56];
  *(_OWORD *)&v14[3] = v13;
  if ( (v6 & 0x200) != 0 )
  {
    v7 = HalpInterruptGsiToLine((unsigned int)v4[22], &v12);
    if ( v7 < 0 )
      KeBugCheckEx(0x5Cu, 0x114uLL, (ULONG_PTR)v4, v7, 1uLL);
  }
  else
  {
    if ( (v6 & 0x100) == 0 )
      KeBugCheckEx(0x5Cu, 0x114uLL, (ULONG_PTR)v4, 0xFFFFFFFFC00000BBuLL, 2uLL);
    v8 = v4[21];
    if ( v8 >= 8 )
    {
      LODWORD(v12) = 45057;
      v8 -= 8;
    }
    else
    {
      LODWORD(v12) = 45056;
    }
    HIDWORD(v12) = v8;
  }
  HalpInterruptApplyOverrides(&v12, (_DWORD *)&v14[1] + 1, &v14[2]);
  v9 = HalpInterruptLineToGsi((unsigned int *)&v12, &v11);
  if ( v9 < 0 )
    KeBugCheckEx(0x5Cu, 0x114uLL, (ULONG_PTR)v4, v9, 3uLL);
  LODWORD(v14[0]) = 0;
  LODWORD(v14[7]) = v11;
  result = HalpInterruptSetDestination((unsigned int *)v14, (__int64)&v13, &v11);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x114uLL, (ULONG_PTR)v4, (int)result, 4uLL);
  return result;
}

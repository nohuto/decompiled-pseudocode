/*
 * XREFs of PspLocateInPEManifest @ 0x1407066D0
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14070733C (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     MmCheckImageMapping @ 0x1407955BC (MmCheckImageMapping.c)
 *     LdrResSearchResource @ 0x1407EACB0 (LdrResSearchResource.c)
 */

__int64 __fastcall PspLocateInPEManifest(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // r10
  __int64 result; // rax
  int v6; // eax
  __int16 v7; // ax
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF
  char v9; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 1408) == 0LL;
  v4 = *(_QWORD *)(a1 + 1312);
  v9 = 0;
  if ( !v2 )
  {
    v7 = *(_WORD *)(a1 + 2412);
    if ( v7 == 332 || v7 == 452 )
    {
      result = MmCheckImageMapping(a1, &v9);
      if ( (int)result < 0 )
        return result;
      if ( !v9 )
        v4 |= 1uLL;
    }
  }
  v8[2] = 0LL;
  v10 = 0LL;
  v8[0] = 24LL;
  v8[1] = 1LL;
  result = LdrResSearchResource(v4, v8, 3LL, 48LL, a2 + 304, &v10, 0LL, 0LL);
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

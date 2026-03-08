/*
 * XREFs of HsaProcessIvmd @ 0x14052E53C
 * Callers:
 *     HalpIommuProcessIvhdEntry @ 0x14052C244 (HalpIommuProcessIvhdEntry.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14037C828 (ExtEnvAllocateMemory.c)
 *     IvmdFindDeviceEntry @ 0x14052F1D8 (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x14052F278 (IvmdProcessRange.c)
 */

__int64 __fastcall HsaProcessIvmd(__int64 a1, unsigned __int64 a2, _BYTE *a3, __int64 *a4)
{
  __int64 v8; // r14
  int v9; // r8d
  unsigned __int64 i; // rbx
  char v11; // cl
  char v12; // al
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int16 v15; // di
  unsigned __int16 v16; // si
  __int64 DeviceEntry; // rax
  __int64 v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v19[0] = 0LL;
  if ( (int)ExtEnvAllocateMemory(a1, 0x18u, v19) < 0 )
    return 3221225626LL;
  v8 = v19[0];
  v9 = 0;
  *a4 = v19[0];
  *a3 = 0;
  *(_QWORD *)(v8 + 16) = v8 + 8;
  *(_QWORD *)(v8 + 8) = v8 + 8;
  *(_DWORD *)v8 = 0;
  for ( i = a1 + *(unsigned __int16 *)(a1 + 2); ; i += *(unsigned __int16 *)(i + 2) )
  {
    if ( i >= a2 )
      return (unsigned int)v9;
    v11 = *(_BYTE *)i;
    if ( *(_BYTE *)i == *(_BYTE *)a1 )
      break;
    if ( v11 == 32 )
    {
      *a3 = 1;
    }
    else if ( (unsigned __int8)(v11 - 33) <= 1u )
    {
      if ( *(_WORD *)(i + 2) != 32 )
        return 3221225485LL;
      v12 = *(_BYTE *)(i + 1);
      if ( (v12 & 8) != 0 || (v12 & 1) != 0 && (v12 & 6) != 0 )
      {
        v13 = *(_QWORD *)(i + 24);
        if ( !v13 )
          return 3221225485LL;
        v14 = *(_QWORD *)(i + 16);
        if ( v14 + v13 < v14 )
          return 3221225485LL;
        v15 = *(_WORD *)(i + 4);
        v19[0] = v14 + v13 - 1;
        v16 = v15;
        if ( v11 == 34 )
          v16 = *(_WORD *)(i + 6);
        while ( v15 <= v16 )
        {
          DeviceEntry = IvmdFindDeviceEntry(v8, v15);
          if ( !DeviceEntry )
            return 3221225626LL;
          v9 = IvmdProcessRange(DeviceEntry, v14, v19[0]);
          if ( v9 < 0 )
            return 3221225626LL;
          ++v15;
        }
      }
    }
  }
  return 0LL;
}

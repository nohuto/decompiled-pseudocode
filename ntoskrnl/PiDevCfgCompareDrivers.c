/*
 * XREFs of PiDevCfgCompareDrivers @ 0x14055F8CC
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x14087867C (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDevCfgCompareDrivers(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v3; // r9
  int v6; // ecx
  __int64 result; // rax
  int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = (_DWORD *)(a1 + 184);
  if ( (a3 & 4) == 0 )
  {
    v6 = *(_DWORD *)(a2 + 184) & 4;
    if ( (*v3 & 4) != 0 )
    {
      result = v6 == 0;
      if ( !v6 )
        return result;
    }
    else if ( v6 )
    {
      return 0xFFFFFFFFLL;
    }
  }
  if ( (a3 & 2) == 0 )
  {
    v8 = *(_DWORD *)(a2 + 184) & 2;
    if ( (*v3 & 2) != 0 )
    {
      result = (unsigned int)(v8 != 0) - 1;
      if ( !v8 )
        return result;
    }
    else if ( v8 )
    {
      return 1LL;
    }
  }
  v9 = *(_DWORD *)(a1 + 108);
  if ( v9 < *(_DWORD *)(a2 + 108) )
    return 0xFFFFFFFFLL;
  if ( v9 == *(_DWORD *)(a2 + 108) )
  {
    v10 = *(_QWORD *)(a1 + 112);
    if ( v10 > *(_QWORD *)(a2 + 112) )
      return 0xFFFFFFFFLL;
    if ( v10 == *(_QWORD *)(a2 + 112) )
    {
      v11 = *(_QWORD *)(a1 + 120);
      if ( v11 > *(_QWORD *)(a2 + 120) )
        return 0xFFFFFFFFLL;
      if ( v11 == *(_QWORD *)(a2 + 120) )
      {
        v12 = *(_QWORD *)(a2 + 136);
        if ( *(_QWORD *)(a1 + 136) )
        {
          if ( !v12 )
            return 0xFFFFFFFFLL;
          return 0LL;
        }
        if ( !v12 )
          return 0LL;
      }
    }
  }
  return 1LL;
}

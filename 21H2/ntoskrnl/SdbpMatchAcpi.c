/*
 * XREFs of SdbpMatchAcpi @ 0x1407D3288
 * Callers:
 *     SdbpCheckKObject @ 0x140754F1C (SdbpCheckKObject.c)
 * Callees:
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbpMatchDeviceDWORD @ 0x1409660D8 (SdbpMatchDeviceDWORD.c)
 *     SdbpMatchDeviceString @ 0x140966164 (SdbpMatchDeviceString.c)
 */

__int64 __fastcall SdbpMatchAcpi(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax
  unsigned int v7; // esi
  int v9; // r9d

  v5 = 0;
  FirstTag = SdbFindFirstTag(a1, a2, 28703);
  v7 = FirstTag;
  if ( FirstTag )
  {
    if ( (unsigned int)SdbpMatchDeviceString(a1, *(_QWORD *)a3, FirstTag, 24613LL)
      && (unsigned int)SdbpMatchDeviceString(a1, *(_QWORD *)(a3 + 8), v7, 24614LL)
      && (unsigned int)SdbpMatchDeviceDWORD(a1, *(_DWORD *)(a3 + 44), v7, 16436, 16437, 16438) )
    {
      LOWORD(v9) = 16448;
      return (unsigned int)SdbpMatchDeviceDWORD(a1, *(_DWORD *)(a3 + 48), v7, v9, 16449, 16450) != 0;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}

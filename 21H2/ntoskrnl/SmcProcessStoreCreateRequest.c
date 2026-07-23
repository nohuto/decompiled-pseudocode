/*
 * XREFs of SmcProcessStoreCreateRequest @ 0x14092AEDC
 * Callers:
 *     SmSetStoreInformation @ 0x14061D784 (SmSetStoreInformation.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SmcStoreCreate @ 0x14092DCB0 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x14092DF10 (SmcStoreDelete.c)
 */

__int64 __fastcall SmcProcessStoreCreateRequest(int a1, unsigned __int64 a2, int a3, char a4)
{
  int v6; // ebx
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+48h] [rbp-30h]

  v9 = -1;
  v10 = 0LL;
  v11 = 0LL;
  if ( a3 == 32 )
  {
    if ( a4 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v7 = a2;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + 31) = *(_BYTE *)(v7 + 31);
    }
    v10 = *(_OWORD *)a2;
    v11 = *(_OWORD *)(a2 + 16);
    if ( (_BYTE)v10 != 2 || (v10 & 0xFFFFFF00) != 0 )
      return (unsigned int)-1073741811;
    if ( SDWORD2(v11) >= 2 )
      return (unsigned int)-1073741822;
    if ( (DWORD1(v10) & 0xFFFEE000) != 0 )
      return (unsigned int)-1073741811;
    v6 = SmcStoreCreate(a1, DWORD2(v11), (unsigned int)&v10 + 4, DWORD1(v11), (__int64)&v9);
    if ( v6 >= 0 )
    {
      v6 = 0;
      *(_DWORD *)(a2 + 28) = v9;
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return (unsigned int)v6;
}

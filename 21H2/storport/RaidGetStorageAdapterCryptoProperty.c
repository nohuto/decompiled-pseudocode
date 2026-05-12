/*
 * XREFs of RaidGetStorageAdapterCryptoProperty @ 0x1C0031158
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C0072880 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetStorageAdapterCryptoProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r11
  _DWORD *v5; // r10
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r8

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 5736);
  v5 = *(_DWORD **)(a2 + 24);
  v6 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v4 )
  {
    v7 = *(unsigned __int16 *)(v4 + 10);
    *a3 = 0LL;
    v8 = 24 * v7 + 16;
    if ( v6 >= v8 )
    {
      *v5 = 1;
      v9 = 0;
      v5[1] = v8;
      *a3 = v8;
      v5[2] = *(unsigned __int16 *)(v4 + 8);
      for ( v5[3] = *(unsigned __int16 *)(v4 + 10);
            v9 < *(unsigned __int16 *)(v4 + 10);
            v5[2 * v11 + 9] = *(unsigned __int16 *)(v4 + 20 * v10 + 22) )
      {
        v10 = v9++;
        v11 = 3 * v10;
        v5[2 * v11 + 4] = 1;
        v5[2 * v11 + 5] = 24;
        v5[2 * v11 + 6] = *(unsigned __int16 *)(v4 + 20 * v10 + 20);
        v5[2 * v11 + 7] = *(_DWORD *)(v4 + 20 * v10 + 24);
        v5[2 * v11 + 8] = *(_DWORD *)(v4 + 20 * v10 + 28);
      }
    }
    else if ( v6 < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *a3 = 8LL;
      *v5 = 1;
      v5[1] = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return v3;
}

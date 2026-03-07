__int64 __fastcall bMapRoutine(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int ShouldMap; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx

  ShouldMap = bShouldMap((struct _FILEVIEW *)a2, (struct _FILEVIEW *)a1, a4);
  if ( ShouldMap )
  {
    if ( a3 == 1 )
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    else
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    v8 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
    v9 = *(_DWORD *)(a1 + 40) ^ (*(_DWORD *)(a2 + 40) ^ v8) & 4 | 1;
    *(_DWORD *)(a1 + 40) = v9;
    v10 = v9 ^ (*(_DWORD *)(a2 + 40) ^ v9) & 8;
    *(_DWORD *)(a1 + 40) = v10;
    v11 = v10 ^ (*(_DWORD *)(a2 + 40) ^ v10) & 0x10;
    *(_DWORD *)(a1 + 40) = v11;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  }
  else
  {
    if ( a3 == 1 )
    {
      --*(_DWORD *)(a1 + 100);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    else
    {
      --*(_DWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    v11 = *(_DWORD *)(a1 + 40) & 0xFFFFFFFE;
    *(_DWORD *)(a1 + 40) = v11;
  }
  *(_DWORD *)(a1 + 40) = v11 ^ (*(_DWORD *)(a2 + 40) ^ v11) & 2;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  return ShouldMap;
}

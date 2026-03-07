__int64 __fastcall WheapInitializeErrorSource(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edi
  int v4; // esi
  int v5; // eax
  unsigned int v6; // esi
  __int64 Pool2; // rax
  __int64 v8; // r11
  __int64 v9; // rbp
  unsigned int i; // r14d

  v1 = *(_DWORD *)(a1 + 104);
  if ( v1 > 0x12 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a1 + 40) = v1;
  *(_DWORD *)(a1 + 36) = 1634035799;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 120);
  v3 = 0;
  if ( (int)WheapCallErrorSourceCorrect(a1) >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 68) + 72;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 128);
    v5 = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(a1 + 28) = v5;
    v6 = (*(_DWORD *)(a1 + 120) * v4 + 175) & 0xFFFFFFF8;
    *(_DWORD *)(a1 + 32) = v6;
    if ( v5 )
    {
      Pool2 = ExAllocatePool2(64LL, v6 * v5, 1634035799LL);
      v8 = Pool2;
      if ( Pool2 )
      {
        v9 = Pool2;
        for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
        {
          WheapInitializeErrorRecordWrapper(v9, v6, a1);
          v9 += v6;
        }
        *(_QWORD *)(a1 + 48) = v8;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    return v3;
  }
  return 0LL;
}

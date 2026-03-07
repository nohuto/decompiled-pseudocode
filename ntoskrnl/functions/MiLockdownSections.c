int __fastcall MiLockdownSections(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rsi
  int v3; // ebx
  int result; // eax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // ebp
  RTL_BITMAP *v9; // r12
  _DWORD *v10; // rbx
  BOOL v11; // eax
  int v12; // edx
  unsigned int v13; // ecx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = a1 + 160;
  v3 = 0;
  if ( (MiFlags & 0x8000) != 0 && (!*(_QWORD *)(a1 + 112) || (*(_DWORD *)(a1 + 196) & 2) != 0) )
    v3 = 2;
  result = MiGetSystemRegionType(*(_QWORD *)(a1 + 48));
  v5 = v3 | 1;
  if ( result == 1 )
    v5 = v3;
  if ( v5 )
  {
    v6 = RtlImageNtHeader(v1);
    v7 = *(unsigned __int16 *)(v6 + 20) + 60LL;
    MiLockLoaderEntry(v2, 0);
    v8 = *(unsigned __int16 *)(v6 + 6);
    v9 = *(RTL_BITMAP **)(v2 + 112);
    if ( *(_WORD *)(v6 + 6) )
    {
      v10 = (_DWORD *)(v7 + v6);
      do
      {
        v11 = 0;
        if ( *(v10 - 9) == 1987011374 )
          v11 = *((_WORD *)v10 - 16) == 29285;
        v12 = v11 | 2;
        if ( (*v10 & 0x20000000) == 0 )
          v12 = v11;
        if ( (v12 & v5) != 0 )
        {
          v13 = *(v10 - 5);
          if ( v13 < *(v10 - 7) )
            v13 = *(v10 - 7);
          RtlSetBits(
            v9,
            *(v10 - 6) >> 12,
            (((v1 + (unsigned int)*(v10 - 6) + v13 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - (v1 + (unsigned int)*(v10 - 6))) >> 12);
        }
        --v8;
        v10 += 10;
      }
      while ( v8 > 0 );
    }
    return MiUnlockLoaderEntry(v2, 0);
  }
  return result;
}

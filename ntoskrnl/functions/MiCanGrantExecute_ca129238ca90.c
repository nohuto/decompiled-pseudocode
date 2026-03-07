__int64 __fastcall MiCanGrantExecute(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  char v4; // dl
  __int64 **Address; // rdi
  int v6; // ecx

  v2 = 0;
  if ( *(_QWORD *)(a1 + 1408) )
  {
    if ( *(_WORD *)(a1 + 2412) == 332 )
    {
      if ( (KeFeatureBits & 0x40000000) != 0
        || (v4 = *(_BYTE *)(a1 + 643), (v4 & 2) != 0)
        || (KeFeatureBits & 0x80000000) == 0 && (v4 & 1) == 0 )
      {
        if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (*(_DWORD *)(a1 + 2172) & 1) == 0 )
          return 1LL;
        MiLockVadTree(1);
        Address = MiLocateAddress(a2);
        MiUnlockVadTree(1, 0x11u);
        if ( Address )
        {
          v6 = *((_DWORD *)Address + 12);
          if ( (v6 & 0x70) != 0x30 )
          {
            if ( (v6 & 0x70) == 0x20 )
            {
              LOBYTE(v2) = (v6 & 0xF80) != 128;
              return v2;
            }
            return 1LL;
          }
        }
      }
    }
  }
  return 0LL;
}

char __fastcall MmInitSystem(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  int v4; // r9d
  __int64 v6; // rcx
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // al
  unsigned int NestedPageProtectionFlags; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  int v14; // eax
  unsigned __int16 *NumaGraph; // r10
  unsigned int v16; // r9d
  unsigned int i; // r8d
  unsigned int v18; // r11d
  __int64 v19; // rax

  v4 = a1;
  if ( !dword_140C65760 )
  {
    v7 = KeSupportedPhysicalAddressBits(a1, a2, a3, (unsigned int)a1);
    if ( v7 > 0x34u )
      v7 = 52;
    dword_140C65760 = v7;
    v8 = v7 - 12;
    if ( (unsigned __int8)(v7 - 12) > 0x26u )
      v8 = 38;
    dword_140C65764 = v8;
  }
  if ( v4 == -1 )
  {
    dword_140C12DA0 = 2048;
    qword_140C12DA8 = (__int64)&unk_140C12DB0;
    word_140C12F12 |= 1u;
    NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
    v12 = NestedPageProtectionFlags;
    if ( NestedPageProtectionFlags )
    {
      v11 = (unsigned int)MiFlags | 0x7000;
      if ( (NestedPageProtectionFlags & 4) == 0 )
        v11 = (unsigned int)MiFlags | 0x1000;
      if ( (NestedPageProtectionFlags & 1) != 0 )
      {
        v11 = (unsigned int)v11 | 0x28000;
      }
      else if ( (NestedPageProtectionFlags & 2) != 0 )
      {
        LODWORD(v11) = v11 | 0x8000;
      }
      v13 = v11 | 0x10000;
      if ( (NestedPageProtectionFlags & 0x10) != 0 )
        v13 = v11;
      LODWORD(MiFlags) = v13;
      v14 = v13 | 0x80000;
      v10 = v12 & 0x40;
      if ( (v12 & 0x40) != 0 )
        LODWORD(MiFlags) = v13 | 0x80000;
      if ( (v12 & 0x80u) != 0LL )
      {
        if ( (v12 & 0x40) == 0 )
          v14 = v13;
        LODWORD(MiFlags) = v14 | 0x40000;
      }
    }
    if ( KasaniEnabled )
      HIDWORD(MiFlags) |= 8u;
    MiInitializeSystemVa(a2, v10, v11, v12);
    return 1;
  }
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( (unsigned __int16)KeNumberNodes > 1u )
      {
        NumaGraph = (unsigned __int16 *)KeQueryNumaGraph();
        if ( NumaGraph )
        {
          v16 = (unsigned __int16)KeNumberNodes;
          for ( i = 0; i < v16; ++i )
          {
            v18 = 0;
            do
            {
              v19 = i * v16 + v18++;
              *(_DWORD *)(qword_140C65718 + 4LL * (unsigned int)v19) = NumaGraph[v19];
            }
            while ( v18 < v16 );
          }
          ExFreePoolWithTag(NumaGraph, 0);
        }
      }
      LODWORD(MiFlags) = MiFlags & 0xFFFFFFCF | 0x10;
      if ( (unsigned __int8)MiInitSystem(1LL, a2) )
      {
        byte_140C69564 = 1;
        return 1;
      }
      return 0;
    }
    if ( v4 == 2 )
    {
      v6 = 2LL;
      LODWORD(MiFlags) = MiFlags & 0xFFFFFFCF | 0x20;
      return MiInitSystem(v6, a2);
    }
  }
  else if ( MiInitNucleus(a2) )
  {
    v6 = 0LL;
    return MiInitSystem(v6, a2);
  }
  return 0;
}

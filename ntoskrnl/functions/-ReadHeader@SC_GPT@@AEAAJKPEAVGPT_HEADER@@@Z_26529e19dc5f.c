__int64 __fastcall SC_GPT::ReadHeader(SC_DISK **this, int a2, struct GPT_HEADER *a3)
{
  unsigned __int64 v5; // rbx
  int Sectors; // esi
  int v7; // ebp
  int v8; // ebx
  int v9; // eax

  if ( a2 )
    v5 = *((_QWORD *)*this + 31) - 1LL;
  else
    v5 = 1LL;
  Sectors = SC_DISK::ReadSectors(*this, 1u, v5, a3);
  if ( Sectors >= 0 )
  {
    Sectors = -1073741774;
    if ( *(_QWORD *)a3 == 0x5452415020494645LL
      && *((_DWORD *)a3 + 2) == 0x10000
      && *((_DWORD *)a3 + 3) == 92
      && *((_DWORD *)a3 + 21) == 128 )
    {
      v7 = *((_DWORD *)a3 + 20);
      if ( (unsigned int)(v7 - 1) <= 0x3FF && *((_QWORD *)a3 + 3) == v5 )
      {
        v8 = *((_DWORD *)a3 + 4);
        *((_DWORD *)a3 + 4) = 0;
        v9 = RtlComputeCrc32(0, (char *)a3, 92LL);
        *((_DWORD *)a3 + 4) = v8;
        if ( v9 == v8 )
          return *((_QWORD *)a3 + 5) < (unsigned __int64)(((((v7 << 7) + *((_DWORD *)*this + 59) - 1) & (unsigned int)-*((_DWORD *)*this + 59)) >> *((_DWORD *)*this + 60))
                                                        + 2)
               ? 0xC0000032
               : 0;
      }
    }
  }
  return (unsigned int)Sectors;
}

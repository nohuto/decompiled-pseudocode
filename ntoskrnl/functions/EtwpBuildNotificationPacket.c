__int64 __fastcall EtwpBuildNotificationPacket(__int64 a1, _OWORD *a2, char a3, _QWORD *a4)
{
  _OWORD *v4; // rbx
  int SchematizedFilterSize; // eax
  int v7; // ebp
  int v8; // edi
  int v10; // r14d

  v4 = a2;
  LOBYTE(a2) = a3;
  SchematizedFilterSize = EtwpGetSchematizedFilterSize(a1, a2);
  v7 = SchematizedFilterSize;
  if ( SchematizedFilterSize )
  {
    v10 = SchematizedFilterSize + 136;
    v8 = EtwpAllocDataBlock((unsigned int)(SchematizedFilterSize + 136), 0LL);
    if ( v8 >= 0 )
    {
      if ( v4 )
      {
        MEMORY[0] = *v4;
        MEMORY[0x10] = v4[1];
        MEMORY[0x20] = v4[2];
        MEMORY[0x30] = v4[3];
        MEMORY[0x40] = v4[4];
        MEMORY[0x50] = v4[5];
        MEMORY[0x60] = v4[6];
        MEMORY[0x70] = *((_QWORD *)v4 + 14);
      }
      MEMORY[0x74] = 1;
      MEMORY[8] = 1;
      MEMORY[4] = v10;
      *a4 = 0LL;
      MEMORY[0x78] = 136LL;
      MEMORY[0x84] = 0x80000000;
      MEMORY[0x80] = v7;
      EtwpCopySchematizedFilters((void *)0x88);
    }
  }
  else if ( v4 )
  {
    return (unsigned int)EtwpAllocDataBlock(*((unsigned int *)v4 + 1), v4);
  }
  else
  {
    v8 = EtwpAllocDataBlock(0x78uLL, 0LL);
    if ( v8 >= 0 )
    {
      *a4 = 0LL;
      MEMORY[8] = 1;
      MEMORY[4] = 120;
    }
  }
  return (unsigned int)v8;
}

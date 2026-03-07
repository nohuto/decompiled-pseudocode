__int64 __fastcall MiCreateSection(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        char a11,
        int a12,
        __int64 a13)
{
  int v17; // ebx
  int SectionPacket; // edi
  int ImageOrDataSection; // eax
  __int64 v20; // rbx
  _QWORD *v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  LARGE_INTEGER v24; // rax
  int v26; // ebx
  LARGE_INTEGER v27[2]; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v28[26]; // [rsp+80h] [rbp-F8h] BYREF

  v17 = 0;
  memset(v28, 0, 0xC8uLL);
  SectionPacket = MiInitializeCreateSectionPacket((unsigned int)v28, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  if ( SectionPacket >= 0 )
  {
    while ( 1 )
    {
      LODWORD(v28[0]) |= v17;
      if ( !v28[5] && !v28[6] )
        break;
      ImageOrDataSection = MiCreateImageOrDataSection(v28);
      SectionPacket = ImageOrDataSection;
      if ( ImageOrDataSection != -1073741740 && ImageOrDataSection != -1073740682 )
        goto LABEL_5;
      if ( v28[22] )
        PsDereferencePartition(v28[22]);
      v26 = LODWORD(v28[0]) >> 26;
      memset(v28, 0, 0xC8uLL);
      SectionPacket = MiInitializeCreateSectionPacket(
                        (unsigned int)v28,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        a10,
                        a11,
                        a12,
                        a13);
      v17 = (v26 & 1) << 26;
      if ( SectionPacket < 0 )
        goto LABEL_14;
    }
    SectionPacket = MiCreatePagingFileMap(v28);
LABEL_5:
    if ( SectionPacket >= 0 )
    {
      SectionPacket = MiFinishCreateSection(v28);
      if ( SectionPacket >= 0 )
      {
        v20 = v28[8];
        v21 = (_QWORD *)v28[18];
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v28[8] + 24LL), -1LL, -1LL);
        v23 = v22;
        if ( ((v28[0] & 9) == 0 && (*(_DWORD *)(v20 + 56) & 0x8000) != 0 || v21[6] > v22)
          && (v24 = (LARGE_INTEGER)v21[6],
              v21[6] = v23,
              v27[0] = v24,
              SectionPacket = MmExtendSection((__int64)v21, v27, (v28[0] & 1) != 0),
              SectionPacket < 0) )
        {
          ObfDereferenceObject(v21);
        }
        else
        {
          *a1 = v21;
          if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 && !*(_QWORD *)(v20 + 64) )
            MiLogSectionObjectEvent(v21, 1LL);
        }
      }
    }
  }
LABEL_14:
  if ( v28[22] )
    PsDereferencePartition(v28[22]);
  return (unsigned int)SectionPacket;
}

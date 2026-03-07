__int64 HalpBlkApicInitializeLocalUnit()
{
  unsigned __int64 v0; // rax
  unsigned int v1; // r11d
  unsigned int v2; // r9d
  char v3; // r10
  int v4; // r9d
  char v5; // r10
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  int v11; // r8d
  unsigned int v12; // eax
  unsigned int v13; // r11d
  __int64 v14; // r8
  char v15; // r10

  if ( BYTE1(KeGetPcr()->NtTib.ExceptionList[2].Handler) )
  {
    v0 = __readmsr(0x1Bu);
    if ( (v0 & 0x400) == 0 )
      __writemsr(0x1Bu, v0 | 0x400);
  }
  HalpBlkApicWrite(128LL, 240LL);
  HalpBlkApicRead(v1);
  if ( BYTE1(KeGetPcr()->NtTib.ExceptionList[2].Handler) == v3 )
  {
    HalpBlkApicWrite(v2 - 32, 0LL);
    if ( BYTE2(KeGetPcr()->NtTib.ExceptionList[2].Handler) == v5 )
      v6 = 0xFFFFFFFFLL;
    else
      v6 = 0xFFFFFFFLL;
    HalpBlkApicWrite((unsigned int)(v4 - 16), v6);
  }
  HalpBlkApicWrite(v2, 479LL);
  HalpBlkApicWrite(800LL, 196824LL);
  HalpBlkApicWrite(992LL, 11LL);
  HalpBlkApicWrite(880LL, 226LL);
  HalpBlkApicWrite(832LL, 65752LL);
  v7 = HalpBlkApicRead(848LL);
  HalpBlkApicWrite(v8, v7 | 0x10000u);
  HalpBlkApicWrite(v10, v9);
  HalpBlkApicWrite((unsigned int)(v11 + 16), 99544LL);
  v12 = HalpBlkApicRead(32LL);
  if ( *(_BYTE *)(v14 + 41) == v15 )
    v12 >>= 24;
  HIDWORD(KeGetPcr()->NtTib.ExceptionList[1].Next) = v12;
  return HalpBlkApicWrite(v13, 0LL);
}

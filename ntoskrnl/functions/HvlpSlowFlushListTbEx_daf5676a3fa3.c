char __fastcall HvlpSlowFlushListTbEx(
        PHYSICAL_ADDRESS *a1,
        __int64 a2,
        char a3,
        char a4,
        unsigned int a5,
        __int64 *a6,
        unsigned int a7)
{
  char v9; // bp
  int v10; // ebx
  int v11; // r13d
  PHYSICAL_ADDRESS *v12; // rax
  unsigned __int64 v13; // rcx
  PHYSICAL_ADDRESS *v14; // rsi
  __int64 v15; // rdx
  unsigned int v19; // [rsp+30h] [rbp-A8h]
  __int128 v20; // [rsp+40h] [rbp-98h] BYREF
  __int64 v21; // [rsp+50h] [rbp-88h]
  __int64 v22; // [rsp+58h] [rbp-80h]
  _BYTE v23[64]; // [rsp+60h] [rbp-78h] BYREF

  v19 = 0;
  v21 = 0LL;
  v9 = 1;
  LODWORD(v22) = 0;
  v20 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = HvlpAcquireHypercallPage((__int64)&v20, 1, (__int64)v23, 32LL);
  v14 = v12;
  if ( (v20 & 2) != 0 )
  {
    if ( a4 )
    {
      *v12 = *a1;
      v12[1] = a1[1];
      HvlpAffinityToHvProcessorSet(0LL, (PHYSICAL_ADDRESS *)&v12[2].QuadPart, 0);
      v10 = 19;
    }
    goto LABEL_15;
  }
  if ( a4 )
  {
    *v12 = *a1;
    v12[1] = a1[1];
    v11 = HvlpAffinityToHvProcessorSet(a2, (PHYSICAL_ADDRESS *)&v12[2].QuadPart, 0xFE0u);
    v15 = (unsigned int)(v11 + 32);
    v19 = v11 + 32;
  }
  else
  {
    v15 = 0LL;
  }
  v13 = (unsigned int)v15 + 8LL * a7;
  if ( v13 <= 0x1000 )
  {
    HvlpCopyFlushVaList(a5, a6, (HvlpFlags & 0x2000) != 0, (__int64 *)((char *)v14 + (unsigned int)v15));
    if ( a4 )
    {
      if ( (HvlpFlags & 0x2000) == 0 )
        v14[1].QuadPart |= 8uLL;
      v13 = a7 & 0xFFF;
      v10 = ((v11 + 7) << 14) & 0x3FE0000 | 0x14;
    }
    v9 = 0;
LABEL_15:
    v15 = v19;
    goto LABEL_16;
  }
  if ( a4 )
    v10 = ((v11 + 7) << 14) & 0x3FE0000 | 0x13;
LABEL_16:
  if ( a3 )
  {
    if ( v9 )
      VslFlushSecureAddressSpace(v13, v15);
    else
      VslSlowFlushSecureRangeList(v22, v14, a7, (unsigned int)v15);
  }
  if ( a4 )
    HvcallInitiateHypercall(v10);
  return HvlpReleaseHypercallPage((__int64)&v20);
}

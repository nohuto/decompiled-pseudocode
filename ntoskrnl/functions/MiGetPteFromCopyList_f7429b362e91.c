unsigned __int64 *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  int v7; // r15d
  __int64 v8; // rdx
  int v9; // r8d
  unsigned __int64 *v10; // rdi
  char v11; // dl
  unsigned __int64 ValidPte; // rbx
  char v13; // dl
  unsigned __int64 v14; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r8
  _QWORD v20[24]; // [rsp+20h] [rbp-108h] BYREF

  memset(v20, 0, 0xB8uLL);
  v6 = 2;
  v7 = 1;
  if ( a3 == -1 )
    v6 = 1;
  v8 = *a1;
  if ( (int)v8 + v6 > a1[1] )
  {
    v16 = *a1;
    LODWORD(v20[1]) = 20;
    v17 = *((_QWORD *)a1 + 2) << 25;
    v20[3] = 0LL;
    MiInsertTbFlushEntry((__int64)v20, v17 >> 16, v16, 0);
    MiFlushTbList((int *)v20);
    v8 = 0LL;
  }
  v9 = 4;
  v10 = (unsigned __int64 *)(*((_QWORD *)a1 + 2) + 8 * v8);
  *a1 = v8 + v6;
  v11 = *(_BYTE *)(48 * a2 - 0x21FFFFFFFFDELL) >> 6;
  if ( v11 )
  {
    if ( v11 == 2 )
      v9 = 28;
  }
  else
  {
    v9 = 12;
  }
  ValidPte = MiMakeValidPte((unsigned __int64)v10, a2, v9 | 0xA0000000);
  if ( !MiPteInShadowRange((unsigned __int64)v10) )
    goto LABEL_9;
  if ( !MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ValidPte & 1) != 0 )
    {
      ValidPte |= 0x8000000000000000uLL;
    }
LABEL_9:
    *v10 = ValidPte;
    goto LABEL_10;
  }
  if ( !HIBYTE(word_140C6697C) && (ValidPte & 1) != 0 )
    ValidPte |= 0x8000000000000000uLL;
  *v10 = ValidPte;
  MiWritePteShadow((__int64)v10, ValidPte, v18);
LABEL_10:
  if ( a3 != -1 )
  {
    v13 = *(_BYTE *)(48 * a3 - 0x21FFFFFFFFDELL) >> 6;
    if ( v13 )
    {
      if ( v13 == 2 )
        v7 = 25;
    }
    else
    {
      v7 = 9;
    }
    v14 = MiMakeValidPte((unsigned __int64)v10, a3, v7 | 0x20000000u);
    if ( !MiPteInShadowRange((unsigned __int64)(v10 + 1)) )
      goto LABEL_15;
    if ( !MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v14 & 1) != 0 )
      {
        v14 |= 0x8000000000000000uLL;
      }
LABEL_15:
      v10[1] = v14;
      return v10;
    }
    if ( !HIBYTE(word_140C6697C) && (v14 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
    v10[1] = v14;
    MiWritePteShadow((__int64)(v10 + 1), v14, v19);
  }
  return v10;
}

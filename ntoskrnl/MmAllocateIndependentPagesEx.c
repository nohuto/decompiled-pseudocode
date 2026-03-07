__int64 __fastcall MmAllocateIndependentPagesEx(unsigned __int64 a1, int a2, _QWORD *a3, unsigned int a4)
{
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // r14
  unsigned __int64 ValidPte; // rax
  int v9; // r11d
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  int v12; // r15d
  __int64 v13; // r8
  int v14; // r11d
  unsigned int NextPageColor; // r12d
  __int64 Page; // rbx
  unsigned __int64 v17; // rbx
  int v18; // r15d
  __int64 v19; // r8
  unsigned int v21; // edx
  _QWORD *v22; // rcx
  __int64 SlabPage; // rax
  int v24; // [rsp+30h] [rbp-98h]
  __int64 v25; // [rsp+38h] [rbp-90h]
  __int64 v26; // [rsp+40h] [rbp-88h]
  __int128 v27; // [rsp+48h] [rbp-80h] BYREF
  _OWORD v28[2]; // [rsp+58h] [rbp-70h] BYREF
  __int128 v29; // [rsp+78h] [rbp-50h]
  __int64 v30; // [rsp+88h] [rbp-40h]
  BOOL v31; // [rsp+D0h] [rbp+8h]

  v6 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  memset(v28, 0, sizeof(v28));
  v29 = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  v7 = MiReservePtes((__int64)&qword_140C695C0, v6);
  if ( !v7 )
    return 0LL;
  if ( !(unsigned int)MiObtainPoolCharges(v6, 1) )
  {
    MiReleasePtes((__int64)&qword_140C695C0, (__int64 *)v7, v6);
    return 0LL;
  }
  v31 = a3 && (dword_140C6B0C4 & 8) != 0 && ((MiFlags & 0x100000000LL) == 0 || (MiFlags & 0x200000000LL) != 0);
  v26 = (__int64)(v7 << 25) >> 16;
  ValidPte = MiMakeValidPte(v7, 0LL, -1610612732);
  v9 = 0;
  v10 = ValidPte;
  if ( a2 != -1 )
    v9 = a2 + 1;
  v24 = v9;
  MiInitializePageColorBase(0LL, v9, (__int64)&v27);
  v11 = 0LL;
  v25 = 0LL;
  do
  {
    v12 = 0;
    NextPageColor = MiGetNextPageColor((__int64)&v27);
    if ( v31 )
    {
      if ( a3 != (_QWORD *)-1LL )
      {
        v21 = 0;
        if ( !a4 )
          goto LABEL_9;
        v22 = a3;
        while ( v13 != *v22 >> 12 )
        {
          ++v21;
          ++v22;
          if ( v21 >= a4 )
            goto LABEL_9;
        }
      }
      v12 = 1;
    }
LABEL_9:
    while ( 1 )
    {
      if ( v12 )
      {
        SlabPage = MiGetSlabPage(
                     (__int64)MiSystemPartition,
                     1u,
                     NextPageColor,
                     v14 == 0 ? 2 : 0,
                     (__int64 *)0xFFFFFFFFFFFFFFFFLL);
        Page = SlabPage;
        if ( SlabPage != -1 )
          break;
      }
      Page = MiGetPage((__int64)MiSystemPartition, NextPageColor, 8u);
      if ( Page != -1 )
        goto LABEL_11;
      MiWaitForFreePage(MiSystemPartition);
      v14 = v24;
    }
    if ( (unsigned int)MiCheckSlabPfnBitmap(48 * SlabPage - 0x220000000000LL, 1LL, 1) )
      ++v11;
LABEL_11:
    v10 ^= (v10 ^ (Page << 12)) & 0xFFFFFFFFFF000LL;
    MiInitializePfn(48 * Page - 0x220000000000LL, (__int64 *)v7, 4u, 4);
    v17 = v10;
    v18 = 0;
    if ( MiPteInShadowRange(v7) )
    {
      if ( MiPteHasShadow() )
      {
        v18 = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_12;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_12;
      }
      if ( (v10 & 1) != 0 )
        v17 = v10 | 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)v7 = v17;
    if ( v18 )
      MiWritePteShadow(v7, v17, v19);
    v7 += 8LL;
    ++v25;
    --v6;
  }
  while ( v6 );
  if ( v11 )
  {
    *(_QWORD *)&v29 = v11;
    *(_QWORD *)&v28[0] = v11;
    MiReturnPoolCharges((unsigned __int64 *)v28, 1, 0LL);
  }
  return v26;
}

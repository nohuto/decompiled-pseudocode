__int64 __fastcall HalpBlkAddVirtualMapping(__int64 PageTablePage, __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v5; // edi
  char v10; // bp
  int i; // r15d
  unsigned __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx

  v5 = 0;
  v10 = 39;
  for ( i = 4; ; --i )
  {
    v12 = HalpRemapVirtualAddress64(HalpBlkPageTableVaWindow, PageTablePage, 0);
    v15 = v12;
    if ( !v12 )
      return (unsigned int)-1073741801;
    v16 = (a3 >> v10) & 0x1FF;
    if ( i == (_DWORD)v13 )
      break;
    v17 = *(_QWORD *)(v12 + 8 * v16);
    if ( ((unsigned __int8)v17 & (unsigned __int8)v13) != 0 )
    {
      PageTablePage = v14 & v17;
    }
    else
    {
      PageTablePage = HalpBlkAllocatePageTablePage(0LL);
      if ( !PageTablePage )
        return (unsigned int)-1073741801;
      v18 = 0LL;
      v19 = 1LL;
      v20 = 2LL;
      do
      {
        v18 |= v19++;
        --v20;
      }
      while ( v20 );
      *(_QWORD *)(v15 + 8 * v16) = v18 ^ (PageTablePage ^ v18) & 0xFFFFFFFFFF000LL;
    }
    v10 -= 9;
  }
  if ( a5 == 4 || (v21 = v13, a5 == 64) )
    v21 = 3LL;
  if ( ((a5 - 32) & 0xFFFFFFDF) != 0 )
    v21 |= 0x8000000000000000uLL;
  if ( a4 != (_DWORD)v13 )
    v21 |= 0x18uLL;
  *(_QWORD *)(v12 + 8 * v16) = v21 | v14 & a2;
  return v5;
}

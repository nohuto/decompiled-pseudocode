__int64 __fastcall MiAllocateTopLevelPage(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *ProcessPartition; // rbx
  int v6; // r9d
  unsigned int NextPageColor; // edi
  unsigned int i; // edx
  __int64 Page; // rax
  __int64 v10; // r14
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rbx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 ValidPte; // rdi
  int v16; // ebp
  __int64 v17; // r8
  unsigned __int64 *v18; // rdi
  int v19; // esi
  __int64 v20; // r8
  bool v22; // zf
  bool v23; // zf
  _OWORD v24[2]; // [rsp+20h] [rbp-28h] BYREF

  v24[0] = 0LL;
  ProcessPartition = (_QWORD *)MiGetProcessPartition(a1);
  MiInitializePageColorBase(v4 + 1664, v6, (__int64)v24);
  NextPageColor = MiGetNextPageColor((__int64)v24);
  for ( i = NextPageColor; ; i = NextPageColor )
  {
    Page = MiGetPage((__int64)ProcessPartition, i, 0x302u);
    v10 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(ProcessPartition);
  }
  v11 = (_QWORD *)(48 * Page - 0x220000000000LL);
  MiSetPfnLink(v11, 0LL);
  v12 = MiMakeValidPte(0LL, v10, -1879048186) & 0xFFFFFFFFFFFFFEFFuLL;
  MiSetPfnPteFrame((__int64)v11, v10);
  *v11 = 0LL;
  MiSetPfnOldestWsleLeafCount(v13, 0);
  MiSetPageTablePfnBuddy(v14, a1, 0);
  MiInitializePfnForOtherProcess(v10, 0xFFFFF6FB7DBEDF68uLL, v10, 512);
  ValidPte = MiMakeValidPte(0LL, v10, -1610612732);
  v16 = 0;
  if ( MiPteInShadowRange(a2) )
  {
    if ( MiPteHasShadow() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_4;
      v22 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v22 = (ValidPte & 1) == 0;
    }
    if ( !v22 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_4:
  *(_QWORD *)a2 = ValidPte;
  if ( v16 )
    MiWritePteShadow(a2, ValidPte, v17);
  v18 = (unsigned __int64 *)(((__int64)(a2 << 25) >> 16) + 3944);
  v19 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v18) )
  {
    if ( MiPteHasShadow() )
    {
      v19 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_7;
      v23 = (v12 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_7;
      v23 = (v12 & 1) == 0;
    }
    if ( !v23 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_7:
  *v18 = v12;
  if ( v19 )
    MiWritePteShadow((__int64)v18, v12, v20);
  return v10;
}

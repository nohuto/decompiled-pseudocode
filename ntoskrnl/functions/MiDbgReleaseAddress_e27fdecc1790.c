_UNKNOWN **__fastcall MiDbgReleaseAddress(unsigned __int64 a1, __int64 *a2, char a3)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 *v9; // rdi
  int v10; // ebp
  __int64 v11; // r8
  unsigned __int64 LeafVa; // rax
  __int64 v13; // rdx
  bool v14; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *a2;
  if ( !*a2 )
    return result;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
  {
    v7 = (a1 >> 18) & 0x3FFFFFF8;
    v8 = 0xFFFFF6FB40000000uLL;
  }
  else
  {
    v7 = (a1 >> 9) & 0x7FFFFFFFF8LL;
    v8 = 0xFFFFF68000000000uLL;
  }
  v9 = (__int64 *)(v8 + v7);
  _InterlockedIncrement(&dword_140C67CD4);
  v10 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v9) )
  {
    if ( MiPteHasShadow() )
    {
      v10 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_5;
      v14 = (v4 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v14 = (v4 & 1) == 0;
    }
    if ( !v14 )
      v4 |= 0x8000000000000000uLL;
  }
LABEL_5:
  *v9 = v4;
  if ( v10 )
    MiWritePteShadow((__int64)v9, v4, v11);
  _InterlockedDecrement(&dword_140C67CD4);
  LeafVa = MiGetLeafVa(a1);
  v13 = (unsigned int)MiRealVaToFlushType(LeafVa);
  if ( (a3 & 4) != 0 )
    return (_UNKNOWN **)KeFlushSingleCurrentTb(a1, v13);
  else
    return (_UNKNOWN **)KeFlushSingleTb(a1, v13, 2u);
}

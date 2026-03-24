/*
 * XREFs of MiDbgReleaseAddress @ 0x140545FFC
 * Callers:
 *     MiDbgCopyMemory @ 0x1405457E4 (MiDbgCopyMemory.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 *     MiRealVaToFlushType @ 0x140378C18 (MiRealVaToFlushType.c)
 *     KeFlushSingleCurrentTb @ 0x1403897D8 (KeFlushSingleCurrentTb.c)
 */

char __fastcall MiDbgReleaseAddress(unsigned __int64 a1, __int64 *a2, char a3)
{
  _UNKNOWN **v3; // rax
  __int64 v4; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 *v9; // rdi
  int v10; // ebp
  __int64 v11; // r8
  bool v12; // zf
  unsigned __int64 LeafVa; // rax
  unsigned int v14; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  v4 = *a2;
  if ( !*a2 )
    return (char)v3;
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
  _InterlockedIncrement(&dword_140C4E894);
  v10 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v9) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v10 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
        v12 = (v4 & 1) == 0;
        goto LABEL_11;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v12 = (v4 & 1) == 0;
LABEL_11:
      if ( !v12 )
        v4 |= 0x8000000000000000uLL;
    }
  }
  *v9 = v4;
  if ( v10 )
    MiWritePteShadow((__int64)v9, v4, v11);
  _InterlockedDecrement(&dword_140C4E894);
  LeafVa = MiGetLeafVa(a1);
  v14 = MiRealVaToFlushType(LeafVa);
  if ( (a3 & 4) != 0 )
    LOBYTE(v3) = KeFlushSingleCurrentTb(a1, v14);
  else
    LOBYTE(v3) = KeFlushSingleTb(a1, v14, 2u);
  return (char)v3;
}

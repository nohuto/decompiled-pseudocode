/*
 * XREFs of MiMarkKernelStack @ 0x14023E770
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14023E170 (MiAllocateKernelStackPages.c)
 *     MiMarkBootKernelStack @ 0x140A4DC44 (MiMarkBootKernelStack.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiMarkKernelStack(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  char v8; // al
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v11; // rax
  struct _LIST_ENTRY *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  if ( (unsigned int)MiPteInShadowRange(a1, a2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v5 = v2 | 0x20;
      v11 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)a1 >> 3) & 0x1FF));
      if ( (v11 & 0x20) == 0 )
        v5 = v2;
      v2 = v5;
      if ( (v11 & 0x42) != 0 )
        v2 = v5 | 0x42;
    }
  }
  v16 = v2;
  if ( (unsigned int)MiPteInShadowRange(&v16, v5)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v12 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v12 )
    {
      v13 = *((_QWORD *)&v12->Flink + (((unsigned __int64)&v16 >> 3) & 0x1FF));
      v14 = v2 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v14 = v2;
      v2 = v14;
      if ( (v13 & 0x42) != 0 )
        v2 = v14 | 0x42;
    }
  }
  v6 = 48 * ((v2 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  *(_QWORD *)(v6 + 40) = *(_QWORD *)(v6 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
  v7 = *(_QWORD *)v6 ^ (*(_QWORD *)v6 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  *(_QWORD *)v6 = v7;
  if ( a2 && (v7 & 1) == 0 )
    *(_QWORD *)v6 = v7 | 1;
  v8 = *(_BYTE *)(v6 + 35);
  *(_QWORD *)(v6 + 16) |= 0x3E0uLL;
  *(_BYTE *)(v6 + 35) = v8 & 0xF8 | 5;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

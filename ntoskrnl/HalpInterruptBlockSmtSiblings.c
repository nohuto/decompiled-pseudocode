/*
 * XREFs of HalpInterruptBlockSmtSiblings @ 0x140518160
 * Callers:
 *     HalpInterruptParseMadt @ 0x140376468 (HalpInterruptParseMadt.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

unsigned __int64 HalpInterruptBlockSmtSiblings()
{
  int v0; // ebx
  int v1; // r14d
  unsigned __int64 result; // rax
  int v3; // r15d
  ULONG_PTR v4; // r12
  unsigned int v5; // esi
  unsigned int v6; // edi
  int v7; // ebp
  _DWORD *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-68h]
  __int128 v10; // [rsp+30h] [rbp-58h]
  __int128 v11; // [rsp+40h] [rbp-48h]
  __int128 v12; // [rsp+50h] [rbp-38h]

  v0 = HalpInterruptProcessorCount;
  v1 = 0;
  result = (unsigned __int64)KeGetCurrentPrcb();
  v3 = -1;
  v4 = HalpInterruptProcessorState;
  v5 = 0;
  v6 = HalpInterruptProcessorCount;
  v7 = -*(_DWORD *)(result + 164);
  if ( (_DWORD)HalpInterruptProcessorCount )
  {
    do
    {
      v8 = (_DWORD *)(v4 + ((unsigned __int64)v5 << 6));
      result = v8[2] & (unsigned int)v7;
      if ( (_DWORD)result == v3 )
      {
        *((_BYTE *)v8 + 56) = 1;
        v8[15] = v1;
        if ( v5 != v0 - 1 )
        {
          v9 = *(_OWORD *)v8;
          v10 = *((_OWORD *)v8 + 1);
          v11 = *((_OWORD *)v8 + 2);
          v12 = *((_OWORD *)v8 + 3);
          memmove(v8, (const void *)(v4 + ((unsigned __int64)(v5 + 1) << 6)), (unsigned __int64)(v0 - v5 - 1) << 6);
          result = (unsigned __int64)(unsigned int)(v0 - 1) << 6;
          *(_OWORD *)(result + v4) = v9;
          *(_OWORD *)(result + v4 + 16) = v10;
          *(_OWORD *)(result + v4 + 32) = v11;
          *(_OWORD *)(result + v4 + 48) = v12;
        }
        --v6;
      }
      else
      {
        v1 = v8[2];
        v3 = v1 & v7;
        ++v5;
      }
    }
    while ( v5 < v6 );
    if ( v6 != v0 )
    {
      HalpInterruptHyperThreading = 0;
      HalpInterruptBlockedProcessors = v0 - v6;
      HalpInterruptFirstBlockedProcessorIndex = v6;
    }
  }
  return result;
}

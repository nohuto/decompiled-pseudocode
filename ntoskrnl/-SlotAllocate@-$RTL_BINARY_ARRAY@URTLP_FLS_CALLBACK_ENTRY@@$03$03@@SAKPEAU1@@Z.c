/*
 * XREFs of ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z @ 0x1403A0434
 * Callers:
 *     RtlpFlsAlloc @ 0x140849B60 (RtlpFlsAlloc.c)
 * Callees:
 *     RtlpFlsHeapAlloc @ 0x14076B76C (RtlpFlsHeapAlloc.c)
 *     CmSiRWLockInitialize @ 0x14080BCF0 (CmSiRWLockInitialize.c)
 */

__int64 __fastcall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,4,4>::SlotAllocate(unsigned int **a1)
{
  int v2; // edi
  unsigned int *v3; // r8
  unsigned int v4; // ebx
  unsigned int i; // edx
  unsigned int v6; // ebx
  _OWORD *v8; // rax
  union _RTL_RUN_ONCE *v9; // rdx
  union _RTL_RUN_ONCE *v10; // rdx
  __int64 v11; // r9

  v2 = 4;
  while ( 1 )
  {
    v3 = *a1;
    v4 = 1 << v2;
    if ( !*a1 )
    {
      v8 = (_OWORD *)RtlpFlsHeapAlloc(40 * v4 + 8);
      v3 = (unsigned int *)v8;
      if ( !v8 )
        return (unsigned int)-1;
      *v8 = 0LL;
      v8[1] = 0LL;
      v8[2] = 0LL;
      if ( v4 )
      {
        v9 = (union _RTL_RUN_ONCE *)(v8 + 2);
        do
        {
          CmSiRWLockInitialize(v9 - 3);
          v10[-2].Value = 0LL;
          v10[-1].Value = 0LL;
          v10[1].Value = (unsigned __int64)v10;
          v10->Value = (unsigned __int64)v10;
          v9 = v10 + 5;
        }
        while ( v11 != 1 );
      }
      *a1 = (unsigned int *)v8;
    }
    if ( *v3 < v4 )
      break;
    ++v2;
    ++a1;
    if ( (unsigned int)(v2 - 4) >= 4 )
      return (unsigned int)-1;
  }
  for ( i = *v3; *(_QWORD *)&v3[10 * i + 4]; i = (v4 - 1) & (i + 1) )
    ;
  v6 = i | v4;
  ++*v3;
  return v6;
}

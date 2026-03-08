/*
 * XREFs of HalpDmaCheckMdlAccessibility @ 0x1404FD754
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x140511F70 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x140512200 (HalMapTransferEx.c)
 * Callees:
 *     IopAllocateMdl @ 0x140241F90 (IopAllocateMdl.c)
 *     IoBuildPartialMdl @ 0x1402B7A60 (IoBuildPartialMdl.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1403B44EC (HalpDmaGetAdapterCacheAlignment.c)
 */

char *__fastcall HalpDmaCheckMdlAccessibility(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4,
        char *a5,
        __int64 *a6)
{
  unsigned int v8; // r10d
  _QWORD *v9; // rbx
  char v11; // r15
  __int64 v12; // r9
  unsigned int v13; // edi
  unsigned int v14; // r13d
  int v15; // eax
  __int64 Mdl; // rax
  struct _MDL *v17; // r14
  unsigned int v19; // ecx
  struct _MDL *v20; // rcx
  struct _MDL *Next; // rbx
  char *result; // rax
  PVOID VirtualAddress; // [rsp+30h] [rbp-38h]
  _QWORD *v24; // [rsp+98h] [rbp+30h]

  v8 = a3;
  v9 = a2;
  *a6 = 0LL;
  v24 = 0LL;
  if ( KeGetCurrentIrql() > 2u || *(_BYTE *)(a1 + 445) )
  {
LABEL_26:
    v20 = (struct _MDL *)*a6;
    if ( *a6 )
    {
      do
      {
        Next = v20->Next;
        IoFreeMdl(v20);
        *a6 = (__int64)Next;
        v20 = Next;
      }
      while ( Next );
    }
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( a2 )
    {
      while ( a4 )
      {
        v12 = *((unsigned int *)v9 + 11);
        v13 = *((_DWORD *)v9 + 10) - v8;
        if ( v13 >= a4 )
          v13 = a4;
        v14 = v12 + v8;
        if ( !*(_BYTE *)(a1 + 445) )
        {
          v15 = HalpDmaGetAdapterCacheAlignment(a1, (__int64)a2) - 1;
          if ( (v15 & v14) != 0 || (v13 & v15) != 0 )
            goto LABEL_26;
        }
        VirtualAddress = (PVOID)(v8 + v12 + v9[4]);
        Mdl = IopAllocateMdl((__int64)VirtualAddress, v13, 0, v12, 0LL, 0);
        v17 = (struct _MDL *)Mdl;
        if ( !Mdl )
          goto LABEL_26;
        if ( *a6 )
          *v24 = Mdl;
        else
          *a6 = Mdl;
        v24 = (_QWORD *)Mdl;
        if ( !((*((_BYTE *)v9 + 10) & 5) != 0
             ? (PVOID)v9[3]
             : MmMapLockedPagesSpecifyCache((PMDL)v9, 0, MmCached, 0LL, 0, 0x40000020u)) )
          goto LABEL_26;
        IoBuildPartialMdl((PMDL)v9, v17, VirtualAddress, v13);
        v19 = 4096 - (v14 & 0xFFF);
        a2 = &v9[((unsigned __int64)v14 >> 12) + 6];
        if ( v13 )
        {
          while ( *(_QWORD *)(a1 + 144) >= *a2 << 12 || *(_DWORD *)(a1 + 520) == 3 )
          {
            ++a2;
            if ( v13 < v19 )
              v19 = v13;
            v13 -= v19;
            a4 -= v19;
            v19 = 4096;
            if ( !v13 )
              goto LABEL_24;
          }
          goto LABEL_26;
        }
LABEL_24:
        v9 = (_QWORD *)*v9;
        v8 = 0;
        if ( !v9 )
          break;
      }
    }
  }
  result = a5;
  *a5 = v11;
  return result;
}

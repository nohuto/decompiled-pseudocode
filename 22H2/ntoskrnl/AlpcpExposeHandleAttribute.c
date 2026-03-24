/*
 * XREFs of AlpcpExposeHandleAttribute @ 0x1405E89F0
 * Callers:
 *     AlpcpExposeAttributes @ 0x1405E8380 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute32 @ 0x14068188C (AlpcpExposeHandleAttribute32.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     AlpcpReferenceConnectedPort @ 0x1405E9F00 (AlpcpReferenceConnectedPort.c)
 *     AlpcpDereferenceBlobEx @ 0x1405E9FC0 (AlpcpDereferenceBlobEx.c)
 *     ObCompleteObjectDuplication @ 0x140664680 (ObCompleteObjectDuplication.c)
 */

__int64 __fastcall AlpcpExposeHandleAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _DWORD *v7; // rdi
  unsigned __int8 v9; // r13
  int v10; // r15d
  struct _DMA_ADAPTER *v11; // r12
  int v12; // eax
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int128 v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h] BYREF

  v7 = *(_DWORD **)(a2 + 152);
  if ( !v7 )
    return 0LL;
  v9 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v10 = 0;
  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 2 )
  {
    v14 = AlpcpReferenceConnectedPort(*(_QWORD *)(a2 + 24));
    v11 = (struct _DMA_ADAPTER *)v14;
    if ( !v14 )
    {
      v13 = -1073741769;
      goto LABEL_8;
    }
    a1 = v14;
  }
  v12 = *(_DWORD *)(a1 + 256);
  if ( (v12 & 0x80000) == 0 )
    goto LABEL_22;
  v16 = 0LL;
  v17 = 0LL;
  if ( (v12 & 0x2000000) == 0 )
  {
    if ( v7[1] <= 1u )
    {
      if ( (*v7 & *(_DWORD *)(a1 + 320)) == 0 )
      {
        v13 = -1073741788;
        goto LABEL_8;
      }
      v15 = *(_QWORD *)(a1 + 24);
      if ( (v15 & 1) != 0 )
        v15 = 0LL;
      if ( v15 )
      {
        LODWORD(v17) = *v7 & *(_DWORD *)(a1 + 320);
        v13 = ObCompleteObjectDuplication(v7 + 2, v15, v9, (char *)&v16 + 8, (char *)&v17 + 4);
        if ( v13 < 0 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
LABEL_22:
    v13 = -1073741790;
    goto LABEL_8;
  }
  LODWORD(v16) = 0x40000;
  LODWORD(v17) = v7[1];
  v10 = 1;
LABEL_7:
  v13 = 0;
  *(_OWORD *)a3 = v16;
  *(_QWORD *)(a3 + 16) = v17;
  *a4 |= 0x10000000u;
LABEL_8:
  if ( v11 )
    HalPutDmaAdapter(v11);
  if ( !v10 )
  {
    AlpcpDereferenceBlobEx((ULONG_PTR)v7);
    *(_QWORD *)(a2 + 152) = 0LL;
  }
  return (unsigned int)v13;
}

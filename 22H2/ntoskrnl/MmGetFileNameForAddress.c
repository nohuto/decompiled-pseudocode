/*
 * XREFs of MmGetFileNameForAddress @ 0x1408C4094
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404EDEAC (DbgkPostModuleMessage.c)
 *     EtwpProviderArrivalCallback @ 0x14068DF0C (EtwpProviderArrivalCallback.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14025AAB0 (MiUnlockAndDereferenceVadShared.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ObQueryNameStringMode @ 0x14070FFB0 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmGetFileNameForAddress(unsigned __int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rax
  char *v4; // rbx
  __int64 v6; // rcx
  char *v7; // rbp
  unsigned int i; // edi
  const void **Pool; // rax
  const void **v10; // rbx
  int v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0;
  v3 = MiObtainReferencedVadEx(a1, 2, &v14);
  v4 = (char *)v3;
  if ( !v3 )
    return 3221225793LL;
  if ( (v3[12] & 0x100000) != 0 || (v6 = **((_QWORD **)v3 + 9), (*(_DWORD *)(v6 + 56) & 0x20) == 0) )
  {
    MiUnlockAndDereferenceVadShared((char *)v3);
    return 3221225545LL;
  }
  else
  {
    v7 = (char *)MiReferenceControlAreaFile(v6);
    MiUnlockAndDereferenceVadShared(v4);
    for ( i = 1040; ; i = v13 )
    {
      Pool = (const void **)MiAllocatePool(256, i, 0x20206D4Du);
      v10 = Pool;
      if ( !Pool )
        break;
      v13 = 0;
      v11 = ObQueryNameStringMode(v7, (__int64)Pool, i, &v13, 0);
      if ( v11 >= 0 )
      {
        v12 = *(unsigned __int16 *)v10;
        *(_WORD *)(a2 + 2) = v12;
        *(_WORD *)a2 = v12;
        *(_QWORD *)(a2 + 8) = v10;
        memmove(v10, v10[1], v12);
        goto LABEL_12;
      }
      ExFreePoolWithTag(v10, 0);
      if ( v13 <= i )
        goto LABEL_12;
    }
    v11 = -1073741801;
LABEL_12:
    HalPutDmaAdapter((PADAPTER_OBJECT)v7);
    return (unsigned int)v11;
  }
}

/*
 * XREFs of SepUpdateSiloInClientSecurity @ 0x140922668
 * Callers:
 *     SeCreateClientSecurityEx @ 0x14065DF60 (SeCreateClientSecurityEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     PsIsHostSilo @ 0x140354A80 (PsIsHostSilo.c)
 *     SeQueryServerSiloToken @ 0x1406B04A0 (SeQueryServerSiloToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091C7CC (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x140922AE4 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepUpdateSiloInClientSecurity(__int64 a1, __int64 a2)
{
  struct _DMA_ADAPTER *v2; // rbp
  _DMA_OPERATIONS *DmaOperations; // rbx
  int v6; // esi
  PADAPTER_OBJECT v7; // rbx
  int (__fastcall *v9)(_DMA_ADAPTER *, _DEVICE_OBJECT *, _MDL *, void *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, unsigned __int8, void *, unsigned int); // [rsp+50h] [rbp+8h] BYREF
  PADAPTER_OBJECT v10; // [rsp+60h] [rbp+18h] BYREF
  _DMA_OPERATIONS *v11; // [rsp+68h] [rbp+20h]

  v2 = *(struct _DMA_ADAPTER **)(a1 + 16);
  v9 = 0LL;
  v10 = 0LL;
  DmaOperations = v2[1].DmaOperations;
  v11 = DmaOperations;
  v6 = SeQueryServerSiloToken((__int64)v2, &v9);
  if ( v6 >= 0 && PsIsHostSilo((__int64)v9) && (_DWORD)DmaOperations == 999 && !HIDWORD(v11) )
  {
    v6 = SepCopyClientTokenAndSetSilo((int)v2, *(_DWORD *)(a1 + 4), a2, &v10);
    if ( v6 >= 0 )
    {
      v7 = v10;
      *(_QWORD *)(a1 + 16) = v10;
      *(_BYTE *)(a1 + 24) = 0;
      HalPutDmaAdapter(v2);
      SeGetTokenControlInformation(v7, a1 + 28);
    }
  }
  return (unsigned int)v6;
}

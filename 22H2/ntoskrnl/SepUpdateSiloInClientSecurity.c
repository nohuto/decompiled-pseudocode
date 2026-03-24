/*
 * XREFs of SepUpdateSiloInClientSecurity @ 0x1409226B8
 * Callers:
 *     SeCreateClientSecurityEx @ 0x1406D6D20 (SeCreateClientSecurityEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     PsIsHostSilo @ 0x1402D5230 (PsIsHostSilo.c)
 *     SeQueryServerSiloToken @ 0x140693660 (SeQueryServerSiloToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091C81C (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x140922B34 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepUpdateSiloInClientSecurity(__int64 a1, __int64 a2)
{
  struct _DMA_ADAPTER *v2; // rbp
  _DMA_OPERATIONS *DmaOperations; // rbx
  int ServerSiloToken; // esi
  PADAPTER_OBJECT v7; // rbx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  PADAPTER_OBJECT v10; // [rsp+60h] [rbp+18h] BYREF
  _DMA_OPERATIONS *v11; // [rsp+68h] [rbp+20h]

  v2 = *(struct _DMA_ADAPTER **)(a1 + 16);
  v9 = 0LL;
  v10 = 0LL;
  DmaOperations = v2[1].DmaOperations;
  v11 = DmaOperations;
  ServerSiloToken = SeQueryServerSiloToken((__int64)v2, (__int64)&v9);
  if ( ServerSiloToken >= 0 && PsIsHostSilo(v9) && (_DWORD)DmaOperations == 999 && !HIDWORD(v11) )
  {
    ServerSiloToken = SepCopyClientTokenAndSetSilo((__int64)v2, *(_DWORD *)(a1 + 4), a2, &v10);
    if ( ServerSiloToken >= 0 )
    {
      v7 = v10;
      *(_QWORD *)(a1 + 16) = v10;
      *(_BYTE *)(a1 + 24) = 0;
      HalPutDmaAdapter(v2);
      SeGetTokenControlInformation(v7, a1 + 28);
    }
  }
  return (unsigned int)ServerSiloToken;
}

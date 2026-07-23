/*
 * XREFs of SepUpdateSiloInClientSecurity @ 0x1409227C8
 * Callers:
 *     SeCreateClientSecurityEx @ 0x140652D80 (SeCreateClientSecurityEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
 *     SeQueryServerSiloToken @ 0x14060EDA0 (SeQueryServerSiloToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091C92C (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x140922C44 (SeGetTokenControlInformation.c)
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
    ServerSiloToken = SepCopyClientTokenAndSetSilo((int)v2, *(_DWORD *)(a1 + 4), a2, &v10);
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

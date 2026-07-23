/*
 * XREFs of SeCopyClientToken @ 0x140656B24
 * Callers:
 *     PsImpersonateClient @ 0x14064FCC0 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x140652F80 (SepCreateClientSecurityEx.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091C92C (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SepFinalizeTokenAcls @ 0x1405D00A0 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140654260 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     SepSetTokenTrust @ 0x14071E6F0 (SepSetTokenTrust.c)
 */

__int64 __fastcall SeCopyClientToken(int a1, int a2, __int64 a3, char a4, __int64 a5, PADAPTER_OBJECT *a6)
{
  int inserted; // ebx
  PADAPTER_OBJECT v8; // rcx
  _WORD *v10; // r8
  int appended; // eax
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v13[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+68h] [rbp-18h]

  v13[0] = 48LL;
  DmaAdapter = 0LL;
  memset(&v13[1], 0, 24);
  v14 = 0LL;
  inserted = SepDuplicateToken(a1, (unsigned int)v13, 0, 2, a2, 0, 0, (__int64)&DmaAdapter);
  if ( inserted < 0 )
    goto LABEL_13;
  if ( a4 )
    inserted = SepSetTokenTrust(DmaAdapter, a5);
  if ( inserted < 0 )
    goto LABEL_13;
  inserted = ObInsertObjectEx(DmaAdapter, 0LL, 0, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_13;
  v8 = DmaAdapter;
  if ( ((__int64)DmaAdapter[12].DmaOperations & 0x4000) != 0 )
  {
    v10 = *(_WORD **)&DmaAdapter[49].Version;
    if ( v10 )
    {
      appended = SepAppendAceToTokenObjectAcl((__int64)DmaAdapter, 983551, v10);
      v8 = DmaAdapter;
      inserted = appended;
      if ( appended >= 0 )
        goto LABEL_8;
      HalPutDmaAdapter(DmaAdapter);
      v8 = DmaAdapter;
    }
  }
  if ( inserted < 0 )
  {
LABEL_13:
    *a6 = 0LL;
    return (unsigned int)inserted;
  }
LABEL_8:
  SepFinalizeTokenAcls(v8);
  *a6 = DmaAdapter;
  return (unsigned int)inserted;
}

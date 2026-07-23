/*
 * XREFs of SeDuplicateTokenAndAddOriginClaim @ 0x14092290C
 * Callers:
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     SepAddTokenOriginClaim @ 0x140922CB0 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeDuplicateTokenAndAddOriginClaim(__int64 a1, __int64 a2, unsigned int a3, PADAPTER_OBJECT *a4)
{
  int v7; // ebx
  struct _DMA_ADAPTER *v8; // rcx
  int v9; // eax
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v12[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+64h] [rbp-1Ch]
  __int128 v17; // [rsp+68h] [rbp-18h]

  DmaAdapter = 0LL;
  v12[1] = 0;
  v16 = 0;
  v13 = 0LL;
  v15 = 0;
  v14 = 0LL;
  v12[0] = 48;
  v17 = 0LL;
  v7 = SepDuplicateToken(a1, (int)v12, 0, 1, 0, 0, 0, &DmaAdapter);
  if ( v7 < 0 )
  {
    v8 = 0LL;
    DmaAdapter = 0LL;
    goto LABEL_5;
  }
  v9 = SepAddTokenOriginClaim(a2, a3, DmaAdapter);
  v8 = DmaAdapter;
  v7 = v9;
  if ( v9 >= 0 )
  {
    *a4 = DmaAdapter;
LABEL_5:
    if ( v7 >= 0 )
      return (unsigned int)v7;
  }
  if ( v8 )
    HalPutDmaAdapter(v8);
  return (unsigned int)v7;
}

/*
 * XREFs of SeShouldCheckForAccessRightsFromParent @ 0x1406515A0
 * Callers:
 *     <none>
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140228CC8 (SepLocateTokenTrustLevel.c)
 *     RtlSidDominatesForTrust @ 0x14026BD80 (RtlSidDominatesForTrust.c)
 *     SeGetTrustLabelAce @ 0x14026C320 (SeGetTrustLabelAce.c)
 *     SepFilterCheck @ 0x140359A20 (SepFilterCheck.c)
 */

bool __fastcall SeShouldCheckForAccessRightsFromParent(__int64 a1, __int64 a2, __int64 a3)
{
  BOOLEAN v5; // si
  char v6; // di
  __int64 TrustLabelAce; // rax
  __int64 v8; // r8
  void *v10; // r14
  void *TokenTrustLevel; // rax
  BOOLEAN DominatesTrust; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v5 = 1;
  v13 = 0LL;
  v6 = 0;
  TrustLabelAce = SeGetTrustLabelAce(a2);
  if ( TrustLabelAce )
  {
    v10 = (void *)(TrustLabelAce + 8);
    if ( TrustLabelAce != -8 )
    {
      DominatesTrust = 0;
      TokenTrustLevel = (void *)SepLocateTokenTrustLevel((__int64 *)(a3 + 32));
      RtlSidDominatesForTrust(TokenTrustLevel, v10, &DominatesTrust);
      v5 = DominatesTrust;
    }
  }
  v8 = *(_QWORD *)(a3 + 32);
  if ( !v8 )
    v8 = *(_QWORD *)(a3 + 48);
  SepFilterCheck(a2, 0LL, v8, 1, (int *)&v13);
  if ( (*(_DWORD *)(a3 + 16) & (unsigned int)v13) == *(_DWORD *)(a3 + 16) )
    v6 = 1;
  return v5 && v6;
}

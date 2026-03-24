/*
 * XREFs of SeShouldCheckForAccessRightsFromParent @ 0x1406D5540
 * Callers:
 *     <none>
 * Callees:
 *     SepFilterCheck @ 0x1402CF460 (SepFilterCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1403034A8 (SepLocateTokenTrustLevel.c)
 *     RtlSidDominatesForTrust @ 0x140346DF0 (RtlSidDominatesForTrust.c)
 *     SeGetTrustLabelAce @ 0x140347390 (SeGetTrustLabelAce.c)
 */

bool __fastcall SeShouldCheckForAccessRightsFromParent(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // si
  char v6; // di
  __int64 TrustLabelAce; // rax
  __int64 v8; // r8
  __int64 v10; // r14
  __int64 TokenTrustLevel; // rax
  char v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v5 = 1;
  v13 = 0LL;
  v6 = 0;
  TrustLabelAce = SeGetTrustLabelAce(a2);
  if ( TrustLabelAce )
  {
    v10 = TrustLabelAce + 8;
    if ( TrustLabelAce != -8 )
    {
      v12 = 0;
      TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)(a3 + 32));
      RtlSidDominatesForTrust(TokenTrustLevel, v10, &v12);
      v5 = v12;
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

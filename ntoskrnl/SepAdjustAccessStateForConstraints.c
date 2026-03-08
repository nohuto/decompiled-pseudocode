/*
 * XREFs of SepAdjustAccessStateForConstraints @ 0x1407582D0
 * Callers:
 *     SeAdjustAccessStateForAccessConstraints @ 0x1407582B0 (SeAdjustAccessStateForAccessConstraints.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14087BCE8 (CmpSetAccessStateForBackupRestore.c)
 *     SeAdjustAccessStateForTrustLabel @ 0x1409C6B60 (SeAdjustAccessStateForTrustLabel.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x140247D00 (RtlSidDominatesForTrust.c)
 *     SepFilterCheck @ 0x140263850 (SepFilterCheck.c)
 *     SepLocateTokenTrustLevel @ 0x14030FE50 (SepLocateTokenTrustLevel.c)
 *     SeGetTrustLabelAce @ 0x14033DCA0 (SeGetTrustLabelAce.c)
 */

__int64 __fastcall SepAdjustAccessStateForConstraints(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // ebx
  int v6; // esi
  int v10; // ebp
  int v11; // eax
  int v12; // r12d
  __int64 v13; // r8
  __int64 TrustLabelAce; // rax
  __int64 v15; // r14
  int v16; // ebx
  int v17; // r12d
  __int64 v18; // r15
  __int64 TokenTrustLevel; // rax
  int v20; // ecx
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  char v22; // [rsp+88h] [rbp+20h] BYREF

  result = *(unsigned int *)(a4 + 12);
  v5 = 0;
  v22 = 0;
  v6 = -1;
  v21 = 0LL;
  v10 = -1;
  if ( (result & 6) != 0 )
  {
    v11 = *(_DWORD *)(a1 + 68);
    if ( v11 == 1 )
    {
      v5 = 17957001;
      v12 = 18809110;
    }
    else if ( v11 == 256 )
    {
      v5 = 16908313;
      v12 = 17760262;
    }
    else
    {
      v12 = 0;
    }
    v13 = *(_QWORD *)(a4 + 32);
    if ( !v13 )
      v13 = *(_QWORD *)(a4 + 48);
    SepFilterCheck(a2, 0LL, v13, 1, (int *)&v21);
    if ( BYTE4(v21) && a3 )
      v6 = v21;
    TrustLabelAce = SeGetTrustLabelAce(a2);
    v15 = TrustLabelAce;
    if ( TrustLabelAce )
    {
      v18 = TrustLabelAce + 8;
      if ( TrustLabelAce == -8
        || (TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)(a4 + 32)),
            RtlSidDominatesForTrust(TokenTrustLevel, v18, &v22),
            !v22) )
      {
        v10 = *(_DWORD *)(v15 + 4);
      }
    }
    result = ~(v6 & (unsigned int)v10);
    v16 = result & v5;
    v17 = result & v12;
    if ( v10 != -1 || v6 != -1 )
    {
      v20 = *(_DWORD *)(a4 + 12);
      result = *(unsigned int *)(a4 + 20);
      if ( (v20 & 2) != 0 )
        result = ~v16 & (unsigned int)result;
      if ( (v20 & 4) != 0 )
        result = ~v17 & (unsigned int)result;
      *(_DWORD *)(a4 + 20) = result;
    }
  }
  return result;
}

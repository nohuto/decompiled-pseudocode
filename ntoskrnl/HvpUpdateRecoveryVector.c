/*
 * XREFs of HvpUpdateRecoveryVector @ 0x1407F9DF8
 * Callers:
 *     HvpApplyIncrementalLogFile @ 0x1407F9948 (HvpApplyIncrementalLogFile.c)
 *     HvpApplyLegacyLogFile @ 0x140A2755C (HvpApplyLegacyLogFile.c)
 * Callees:
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 */

void __fastcall HvpUpdateRecoveryVector(_DWORD *a1, unsigned int a2, RTL_BITMAP *a3)
{
  unsigned int i; // edi
  unsigned int SizeOfBitMap; // r9d
  ULONG v8; // edx
  ULONG v9; // r8d

  if ( a2 )
  {
    for ( i = 0; i < a2; ++i )
    {
      SizeOfBitMap = a3->SizeOfBitMap;
      v8 = *a1 >> 9;
      if ( v8 >= a3->SizeOfBitMap )
        break;
      v9 = SizeOfBitMap - v8;
      if ( (a1[1] >> 9) + v8 <= SizeOfBitMap )
        v9 = a1[1] >> 9;
      RtlSetBits(a3, v8, v9);
      a1 += 2;
    }
  }
}

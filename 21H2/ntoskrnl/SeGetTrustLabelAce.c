/*
 * XREFs of SeGetTrustLabelAce @ 0x14026C320
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x1402013A4 (SepVerifyDesktopAppxImage.c)
 *     SepTrustLevelCheck @ 0x14026C2B0 (SepTrustLevelCheck.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1406515A0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140653E00 (SeAdjustAccessStateForAccessConstraints.c)
 *     MiAllowImageMap @ 0x140687660 (MiAllowImageMap.c)
 *     SepAdjustAccessStateForConstraints @ 0x14076F180 (SepAdjustAccessStateForConstraints.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeGetTrustLabelAce(__int64 a1)
{
  __int16 v1; // r10
  unsigned int i; // r8d
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // r11d

  v1 = *(_WORD *)(a1 + 2);
  for ( i = 0; ; ++i )
  {
    if ( (v1 & 0x10) == 0 )
      goto LABEL_3;
    if ( v1 >= 0 )
      break;
    v5 = *(unsigned int *)(a1 + 12);
    if ( (_DWORD)v5 )
    {
      v6 = a1 + v5;
      goto LABEL_9;
    }
LABEL_3:
    result = 0LL;
LABEL_4:
    if ( !result )
      return result;
  }
  v6 = *(_QWORD *)(a1 + 24);
LABEL_9:
  if ( !v6 )
    goto LABEL_3;
  result = v6 + 8;
  v7 = 0;
  if ( !*(_WORD *)(v6 + 4) )
    goto LABEL_3;
  while ( v7 < i || *(_BYTE *)result != 20 )
  {
    ++v7;
    result += *(unsigned __int16 *)(result + 2);
    if ( v7 >= *(unsigned __int16 *)(v6 + 4) )
      goto LABEL_3;
  }
  i = v7;
  if ( (*(_BYTE *)(result + 1) & 8) != 0 )
    goto LABEL_4;
  return result;
}

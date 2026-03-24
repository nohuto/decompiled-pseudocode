/*
 * XREFs of XmPushPopSegment @ 0x1403C4060
 * Callers:
 *     XmEmulateStream @ 0x140397208 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140396F08 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x140396F98 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmPushPopSegment(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 *v2; // rdx
  unsigned int v3; // r8d

  v1 = *(unsigned __int8 *)(a1 + 81) + 28LL;
  *(_DWORD *)(a1 + 120) = 1;
  v2 = (unsigned __int16 *)(a1 + 2 * v1);
  if ( *(_DWORD *)(a1 + 124) == 36 )
    XmSetSourceValue(a1, v2);
  else
    XmSetDestinationValue(a1, v2);
  return v3;
}

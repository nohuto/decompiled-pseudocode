/*
 * XREFs of XmPushPopSegment @ 0x14039A410
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x1403B4248 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmPushPopSegment(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  unsigned int v3; // r8d

  v1 = *(unsigned __int8 *)(a1 + 81) + 28LL;
  *(_DWORD *)(a1 + 120) = 1;
  v2 = a1 + 2 * v1;
  if ( *(_DWORD *)(a1 + 124) == 36 )
    XmSetSourceValue(a1, v2);
  else
    XmSetDestinationValue(a1, v2);
  return v3;
}

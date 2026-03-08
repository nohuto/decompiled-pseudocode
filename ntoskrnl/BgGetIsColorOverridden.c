/*
 * XREFs of BgGetIsColorOverridden @ 0x140AEE2B8
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B1310 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !(_BYTE)qword_140C0E530 )
    return 0;
  *a1 = HIDWORD(qword_140C0E530);
  return 1;
}

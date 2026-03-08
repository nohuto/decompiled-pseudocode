/*
 * XREFs of BgpFwSetBootGraphicsInformation @ 0x14066F7B0
 * Callers:
 *     BgSetBootGraphicsInformation @ 0x140AEE394 (BgSetBootGraphicsInformation.c)
 * Callees:
 *     BgpFwMapFrameBuffer @ 0x14066F710 (BgpFwMapFrameBuffer.c)
 */

__int64 __fastcall BgpFwSetBootGraphicsInformation(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (_BYTE)BgInternal )
    return (unsigned int)-1073741637;
  xmmword_140C0E390 = *(_OWORD *)a2;
  xmmword_140C0E3A0 = *(_OWORD *)(a2 + 16);
  DWORD2(BgInternal) = *(_DWORD *)(a2 + 8);
  DWORD1(BgInternal) = *(_DWORD *)(a2 + 12);
  HIDWORD(BgInternal) = *(_DWORD *)(a2 + 16);
  if ( *(_DWORD *)(a2 + 24) == 3 )
  {
    LODWORD(xmmword_140C0E350) = 4;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a2 + 24) == 4 )
  {
    LODWORD(xmmword_140C0E350) = 5;
LABEL_7:
    LOWORD(BgInternal) = 1;
    qword_140C0E360 = *(PVOID *)a2;
    BgpFwMapFrameBuffer((__int64)&BgInternal);
    return v2;
  }
  return (unsigned int)-1073741637;
}

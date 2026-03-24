/*
 * XREFs of ?ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPAUSED@@@Z @ 0x1800D7C50
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::ProcessSetPaused(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETPAUSED *a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL);
  if ( v4 >= *((_QWORD *)this + 17) )
  {
    if ( (*((_BYTE *)this + 112) & 0x10) == 0 && *((_BYTE *)a3 + 8) )
    {
      *((_QWORD *)this + 25) += v4 - *((_QWORD *)this + 26);
    }
    else if ( (*((_BYTE *)this + 112) & 0x10) != 0 && !*((_BYTE *)a3 + 8) )
    {
      *((_QWORD *)this + 26) = v4;
    }
  }
  result = 0LL;
  *((_BYTE *)this + 112) = *((_BYTE *)this + 112) & 0xEF | (*((_BYTE *)a3 + 8) != 0 ? 0x10 : 0);
  return result;
}

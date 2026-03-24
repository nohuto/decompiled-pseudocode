/*
 * XREFs of ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x1800D35BC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetSeekState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE *a3)
{
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // rax

  if ( *((_QWORD *)this + 45) )
  {
    if ( *((_BYTE *)a3 + 24) )
      v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL);
    else
      v3 = *((_QWORD *)a3 + 1);
    *((_QWORD *)this + 60) = v3;
    v4 = 0;
    v5 = *((_QWORD *)a3 + 2);
    *((_BYTE *)this + 548) |= 2u;
    *((_QWORD *)this + 61) = v5;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 272LL) + 416LL) |= 2u;
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x1ABu, 0LL);
  }
  return v4;
}

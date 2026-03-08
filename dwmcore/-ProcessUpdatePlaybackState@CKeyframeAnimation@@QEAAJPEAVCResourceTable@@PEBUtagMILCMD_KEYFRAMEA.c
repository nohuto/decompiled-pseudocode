/*
 * XREFs of ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x18009B4B0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18009B43C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessUpdatePlaybackState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE *a3)
{
  unsigned int v3; // edx
  int updated; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx

  if ( *((_QWORD *)this + 49) )
  {
    v3 = *((_DWORD *)a3 + 2);
    if ( v3 > 2 )
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x191u, 0LL);
    }
    else
    {
      updated = CKeyframeAnimation::UpdatePlaybackState(
                  (__int64)this,
                  v3,
                  *((_BYTE *)a3 + 24) != 0,
                  *((_QWORD *)a3 + 2));
      v6 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, updated, 0x198u, 0LL);
      else
        return 0;
    }
  }
  else
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x18Au, 0LL);
  }
  return v6;
}

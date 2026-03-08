/*
 * XREFs of ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x1C02630C0
 * Callers:
 *     ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C009DDC0 (-SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::UpdatePlaybackState(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  LARGE_INTEGER PerformanceCounter; // rax

  v2 = *(_DWORD *)(a1 + 272);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( a2 == 2 )
      {
        *(LARGE_INTEGER *)(a1 + 176) = KeQueryPerformanceCounter(0LL);
        goto LABEL_4;
      }
    }
    else if ( v2 == 2 && a2 == 1 )
    {
      *(_QWORD *)(a1 + 168) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(a1 + 176);
      *(_QWORD *)(a1 + 176) = 0LL;
      goto LABEL_4;
    }
    if ( !a2 )
    {
      *(_QWORD *)(a1 + 168) = 0LL;
      *(_QWORD *)(a1 + 176) = 0LL;
      *(_QWORD *)(a1 + 184) = 0LL;
      *(_QWORD *)(a1 + 192) = 0LL;
      goto LABEL_4;
    }
  }
  else if ( a2 == 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(_BYTE *)(a1 + 296) &= ~4u;
    *(LARGE_INTEGER *)(a1 + 168) = PerformanceCounter;
    goto LABEL_4;
  }
  if ( v2 != a2 )
    return (unsigned int)-1073741811;
LABEL_4:
  *(_DWORD *)(a1 + 272) = a2;
  return v3;
}

/*
 * XREFs of ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800C3CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800CC514 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1800CC910 (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x1800D5D94 (-SetProgress@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z @ 0x1800D7FC8 (-SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180161A78 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x1801D10C4 (-AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z @ 0x1801D1978 (-SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  int updated; // eax
  int v9; // r9d
  unsigned int TracingCookie; // eax
  int v11; // r8d
  int v12; // r9d
  void *v13; // rdx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  unsigned int v15[6]; // [rsp+30h] [rbp-18h] BYREF
  float v16; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 == 18 )
  {
    switch ( a2 )
    {
      case 24:
        v5 = *(_QWORD *)(a1 + 416);
        *(float *)(a1 + 524) = fminf(fmaxf(*a4, 0.0), 1.0);
        if ( (*(_BYTE *)(v5 + 112) & 4) != 0 )
        {
          if ( *(_DWORD *)(a1 + 528) )
          {
            updated = CKeyframeAnimation::UpdatePlaybackState(a1, 0LL, 0LL, 0LL);
            v6 = updated;
            if ( updated < 0 )
            {
              v14 = 2070;
LABEL_10:
              v9 = updated;
LABEL_33:
              MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v9, v14, 0LL);
              return v6;
            }
          }
        }
        return 0;
      case 31:
        CKeyframeAnimation::SetPlaybackRate((CKeyframeAnimation *)a1, *a4);
        return 0;
      case 33:
        CKeyframeAnimation::SetProgress((CKeyframeAnimation *)a1, *a4);
        return 0;
    }
LABEL_32:
    v6 = -2147024809;
    v9 = -2147024809;
    v14 = 2127;
    goto LABEL_33;
  }
  if ( a3 != 42 )
    goto LABEL_32;
  if ( a2 != 16 )
  {
    if ( a2 != 30 )
      goto LABEL_32;
    v16 = *a4;
    if ( v16 < 1.0 )
      return 0;
    CKeyframeAnimation::AdjustAllKeyframeTime((CKeyframeAnimation *)a1, v16);
    if ( *(int *)(*(_QWORD *)(a1 + 304) + 4LL) >= 0
      || (unsigned int)dword_180344E80 <= 4
      || (qword_180344E90 & 4) == 0
      || (qword_180344E98 & 4) != qword_180344E98 )
    {
      return 0;
    }
    TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
    v13 = &unk_1802E8DB5;
LABEL_31:
    v15[0] = TracingCookie;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_180344E80,
      (_DWORD)v13,
      v11,
      v12,
      (__int64)v15,
      (__int64)&v16);
    return 0;
  }
  v16 = *a4;
  if ( v16 > 0.0 )
  {
    updated = CKeyframeAnimation::SetInitialDelay((CKeyframeAnimation *)a1, v16);
    v6 = updated;
    if ( updated < 0 )
    {
      v14 = 2079;
      goto LABEL_10;
    }
    if ( *(int *)(*(_QWORD *)(a1 + 304) + 4LL) < 0
      && (unsigned int)dword_180344E80 > 4
      && (qword_180344E90 & 4) != 0
      && (qword_180344E98 & 4) == qword_180344E98 )
    {
      TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
      v13 = &unk_1802E8D73;
      goto LABEL_31;
    }
  }
  return 0;
}

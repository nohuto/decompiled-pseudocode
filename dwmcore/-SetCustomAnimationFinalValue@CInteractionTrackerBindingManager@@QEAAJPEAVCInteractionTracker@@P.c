__int64 __fastcall CInteractionTrackerBindingManager::SetCustomAnimationFinalValue(
        int a1,
        __int64 a2,
        CKeyframeAnimation *a3,
        int a4)
{
  const struct KeyframeValue *LastKeyframeValue; // rdi
  int Value; // eax
  unsigned int v9; // edi
  char v11; // r9
  __int64 v12; // [rsp+20h] [rbp-39h] BYREF
  int v13; // [rsp+28h] [rbp-31h]
  __int64 v14; // [rsp+60h] [rbp+7h] BYREF
  int v15; // [rsp+68h] [rbp+Fh]
  char v16; // [rsp+6Ch] [rbp+13h]
  __int64 v17; // [rsp+70h] [rbp+17h] BYREF
  int v18; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(a3);
  if ( *((_DWORD *)LastKeyframeValue + 5) != 1 )
    return 0LL;
  memset_0(&v12, 0, 0x40uLL);
  v14 = 0LL;
  v15 = 18;
  v16 = 0;
  Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (struct CExpressionValue *)&v12);
  v9 = Value;
  if ( Value < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x430,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)(unsigned int)Value);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v14);
    return v9;
  }
  if ( !a4 )
  {
    v17 = v12;
    v18 = v13;
    CInteractionTracker::SetPosition(a2, (__int64)&v17, 1);
    v11 = 3;
LABEL_8:
    CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(a1, a2, a2, v11);
    goto LABEL_9;
  }
  if ( a4 == 1 )
  {
    CInteractionTracker::SetScale(a2, *(float *)&v12, 1);
    v11 = 4;
    goto LABEL_8;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v14);
  return 0LL;
}

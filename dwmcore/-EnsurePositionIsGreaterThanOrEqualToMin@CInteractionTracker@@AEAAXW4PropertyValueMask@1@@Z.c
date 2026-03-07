__int64 __fastcall CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin(__int64 a1, char a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]

  if ( !*(_DWORD *)(a1 + 176) && (*(_BYTE *)(a1 + 540) & 0x20) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 88);
    v4 = *(_QWORD *)(a1 + 80);
    v5 = v2;
    if ( (a2 & 1) != 0 )
      LODWORD(v4) = fmaxf(*(float *)(a1 + 80), *(float *)(a1 + 92));
    if ( (a2 & 2) != 0 )
      HIDWORD(v4) = fmaxf(*(float *)(a1 + 84), *(float *)(a1 + 96));
    v5 = 0;
    return CInteractionTracker::SetPosition(a1, &v4, 0LL);
  }
  return result;
}

void __fastcall CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax(__int64 a1, char a2)
{
  int v2; // eax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]

  if ( !*(_DWORD *)(a1 + 176) && (*(_BYTE *)(a1 + 540) & 0x20) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 88);
    v3 = *(_QWORD *)(a1 + 80);
    v4 = v2;
    if ( (a2 & 1) != 0 )
      LODWORD(v3) = fminf(*(float *)(a1 + 80), *(float *)(a1 + 104));
    if ( (a2 & 2) != 0 )
      HIDWORD(v3) = fminf(*(float *)(a1 + 84), *(float *)(a1 + 108));
    v4 = 0;
    CInteractionTracker::SetPosition(a1, (__int64)&v3, 0);
  }
}

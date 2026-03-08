/*
 * XREFs of ?SetState@CHolographicDisplay@@UEAAJJ@Z @ 0x1802A4770
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180098AA0 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHolographicDisplay::SetState(CHolographicDisplay *this)
{
  __int64 v1; // r9
  int v2; // r11d
  __int64 v3; // rax
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( CNotificationResource::ShouldNotify((CHolographicDisplay *)((char *)this - 72)) )
  {
    v3 = *(_QWORD *)(v1 - 24);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 76);
    else
      v4 = 0;
    v5 = v4;
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 - 56) + 1240LL) + 40LL);
    v11[0] = v5;
    LODWORD(v10) = v2;
    v11[1] = *(unsigned int *)(v1 - 8);
    v7 = CoreUICallSend(v6, v11, 2LL, 10LL, 0, &unk_18033941C, v10);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        236LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicdisplay.cpp",
        (const char *)v7,
        v9);
  }
  return 0LL;
}

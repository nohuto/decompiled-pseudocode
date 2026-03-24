/*
 * XREFs of GreCreateCompatibleDC @ 0x1C003B340
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x1C003B2A0 (NtGdiCreateCompatibleDC.c)
 *     InitUserScreen @ 0x1C006A78C (InitUserScreen.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00392B4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003B478 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003B4D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C003B650 (GreCreateDisplayDC.c)
 *     GreSetLayout @ 0x1C00930A0 (GreSetLayout.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C013C704 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  HDC v1; // rbx
  HDC DisplayDC; // rax
  __int64 v3; // rax
  unsigned int v4; // r8d
  _QWORD v6[6]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v7[7]; // [rsp+50h] [rbp-38h] BYREF
  int v8; // [rsp+90h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v6, a1);
    if ( v6[0] )
    {
      DisplayDC = (HDC)GreCreateDisplayDC(*(HDEV *)(v6[0] + 48LL), 1u);
      v1 = DisplayDC;
      if ( DisplayDC )
      {
        DCOBJ::DCOBJ((DCOBJ *)v7, DisplayDC);
        v3 = v6[0];
        if ( v7[0] && (*(_DWORD *)(v6[0] + 520LL) & 1) != 0 )
        {
          DC::vSetDpiScaling(v7[0], *(_QWORD *)(v6[0] + 524LL));
          v3 = v6[0];
        }
        v4 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 108LL);
        if ( (v4 & 7) != 0 )
          GreSetLayout(v1, -1, v4);
        DCOBJ::~DCOBJ((DCOBJ *)v7);
      }
    }
    DCOBJ::~DCOBJ((DCOBJ *)v6);
  }
  else
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
    v1 = (HDC)GreCreateDisplayDC(*(HDEV *)(gpDispInfo + 40), 1u);
    if ( !v8 )
      UserSessionSwitchLeaveCrit();
  }
  return v1;
}

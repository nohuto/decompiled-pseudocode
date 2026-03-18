/*
 * XREFs of GreCreateCompatibleDC @ 0x1C002E050
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x1C002DFB0 (NtGdiCreateCompatibleDC.c)
 *     InitUserScreen @ 0x1C006C88C (InitUserScreen.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B500 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 *     GreSetLayout @ 0x1C009E0A0 (GreSetLayout.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0169B38 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  HDC v1; // rbx
  HDC DisplayDC; // rax
  __int64 v3; // rax
  unsigned int v4; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD v10[6]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v11[7]; // [rsp+50h] [rbp-38h] BYREF
  int v12; // [rsp+90h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v10, a1);
    if ( v10[0] )
    {
      DisplayDC = (HDC)GreCreateDisplayDC(*(HDEV *)(v10[0] + 48LL), 1u);
      v1 = DisplayDC;
      if ( DisplayDC )
      {
        DCOBJ::DCOBJ((DCOBJ *)v11, DisplayDC);
        v3 = v10[0];
        if ( v11[0] && (*(_DWORD *)(v10[0] + 520LL) & 1) != 0 )
        {
          DC::vSetDpiScaling(v11[0], *(_QWORD *)(v10[0] + 524LL));
          v3 = v10[0];
        }
        v4 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 108LL);
        if ( (v4 & 7) != 0 )
          GreSetLayout(v1, -1, v4);
        DCOBJ::~DCOBJ((DCOBJ *)v11);
      }
    }
    DCOBJ::~DCOBJ((DCOBJ *)v10);
  }
  else
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v12);
    v1 = (HDC)GreCreateDisplayDC(*((HDEV *)gpDispInfo + 5), 1u);
    if ( !v12 )
      UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  }
  return v1;
}

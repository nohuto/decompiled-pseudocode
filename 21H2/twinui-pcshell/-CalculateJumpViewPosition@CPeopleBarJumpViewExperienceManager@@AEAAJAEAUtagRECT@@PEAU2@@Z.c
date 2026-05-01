/*
 * XREFs of ?CalculateJumpViewPosition@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@PEAU2@@Z @ 0x18023D8CC
 * Callers:
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x18023E884 (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180018B3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::CalculateJumpViewPosition(
        CPeopleBarJumpViewExperienceManager *this,
        struct tagRECT *a2,
        struct tagRECT *a3)
{
  LONG *v3; // rsi
  HMONITOR v7; // rbx
  HMONITOR v8; // r8
  HMONITOR v9; // r8
  UINT v10; // r8d
  int v11; // eax
  LONG v12; // eax
  LONG v13; // eax
  const char *v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  SIZE windowSize; // [rsp+60h] [rbp+30h] BYREF
  POINT anchorPoint; // [rsp+78h] [rbp+48h] BYREF

  v3 = (LONG *)((char *)this + 320);
  windowSize = (SIZE)*((_QWORD *)this + 44);
  v7 = MonitorFromRect((LPCRECT)this + 20, 1u);
  windowSize.cx = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                    (ExperienceManagerUtils *)(unsigned int)windowSize.cx,
                    (__int64)v7,
                    v8);
  windowSize.cy = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                    (ExperienceManagerUtils *)(unsigned int)windowSize.cy,
                    (__int64)v7,
                    v9);
  v10 = 0x10000;
  v11 = *((_DWORD *)this + 77);
  switch ( v11 )
  {
    case -1:
      goto LABEL_14;
    case 0:
      v12 = *((_DWORD *)this + 82);
      goto LABEL_10;
    case 1:
      v10 = 65540;
      anchorPoint.x = (*v3 + *((_DWORD *)this + 82)) / 2;
      v13 = *((_DWORD *)this + 83);
      goto LABEL_11;
    case 2:
      v12 = *v3;
      v10 = 65544;
      goto LABEL_10;
  }
  if ( v11 != 3 )
  {
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x169,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)0x80004001LL);
    return 2147500033LL;
  }
  v10 = 65572;
  v12 = (*v3 + *((_DWORD *)this + 82)) / 2;
LABEL_10:
  anchorPoint.x = v12;
  v13 = *((_DWORD *)this + 81);
LABEL_11:
  anchorPoint.y = v13;
  if ( CalculatePopupWindowPosition(&anchorPoint, &windowSize, v10, a2, a3) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x16D,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
             v14);
}

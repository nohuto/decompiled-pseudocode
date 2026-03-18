/*
 * XREFs of ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C00051F8
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1C0005190 (NtUserSetDisplayAutoRotationPreferences.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

bool __fastcall CRotationMgr::IsActivePpi(struct tagPROCESSINFO *a1)
{
  bool v2; // bl
  char v4; // [rsp+38h] [rbp+10h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v4, gRotationProcessLock);
  v2 = 0;
  if ( grpdeskRitInput )
    v2 = *(_QWORD *)(grpdeskRitInput + 248LL) == (_QWORD)a1;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v4);
  return v2;
}

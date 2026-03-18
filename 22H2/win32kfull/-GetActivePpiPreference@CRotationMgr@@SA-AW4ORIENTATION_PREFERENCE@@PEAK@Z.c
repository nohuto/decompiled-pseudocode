/*
 * XREFs of ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01A6D78
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C0041DC4 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z @ 0x1C01A7000 (-IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007E800 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall CRotationMgr::GetActivePpiPreference(_DWORD *a1)
{
  PEPROCESS *v2; // rcx
  unsigned int v3; // ebx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v5, gRotationProcessLock);
  if ( grpdeskRitInput && (v2 = *(PEPROCESS **)(grpdeskRitInput + 256LL)) != 0LL )
  {
    if ( a1 )
      *a1 = (unsigned int)PsGetProcessId(*v2);
    v3 = *(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 256LL) + 928LL);
  }
  else
  {
    v3 = 0;
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
  return v3;
}

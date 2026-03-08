/*
 * XREFs of RIMSetTestModeStatus @ 0x1C01A0BE0
 * Callers:
 *     NtRIMSetTestModeStatus @ 0x1C01A2B80 (NtRIMSetTestModeStatus.c)
 * Callees:
 *     RIMSyncWalkRimObjList @ 0x1C00BDC0C (RIMSyncWalkRimObjList.c)
 */

__int64 __fastcall RIMSetTestModeStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // r9

  v4 = a1;
  *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 353) = (_DWORD)a1 != 0;
  if ( !v4 )
    RIMSyncWalkRimObjList(
      1LL,
      0LL,
      (void (__fastcall *)(_QWORD *, __int64))lambda_7defdb4f8a89d43cd844866b7ff54225_::_lambda_invoker_cdecl_,
      v5);
  return 0LL;
}

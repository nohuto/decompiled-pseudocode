/*
 * XREFs of BgkNotifyDisplayOwnershipLost @ 0x1404FF4E0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x1402E7FA0 (MmMapIoSpaceEx.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B440 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipLost(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = qword_140CF5678;
  if ( a1 )
    v1 = a1;
  qword_140CF5678 = v1;
  result = BgkNotifyDisplayOwnershipChange(0, (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgkpResetDisplay);
  if ( dword_140CF27A0 != 2 )
    return MmMapIoSpaceEx(655360LL, 0x20000LL, 0x204u);
  return result;
}

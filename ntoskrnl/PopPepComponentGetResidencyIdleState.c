/*
 * XREFs of PopPepComponentGetResidencyIdleState @ 0x140304D38
 * Callers:
 *     PopPepIdleTimeoutRoutine @ 0x1402E9500 (PopPepIdleTimeoutRoutine.c)
 *     PopPepCompleteComponentActiveActivity @ 0x140304CC0 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepComponentSetResidency @ 0x1403AE9C4 (PopPepComponentSetResidency.c)
 *     PopPepRegisterDevice @ 0x1408378C4 (PopPepRegisterDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepComponentGetResidencyIdleState(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  bool v3; // zf

  v2 = (unsigned int)(*(_DWORD *)(a1 + 188) - 1);
  if ( !PopPepLowPowerEpoch && *(_DWORD *)(a1 + 188) != 1 )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 200) + 24 * v2 + 8) <= a2 )
        break;
      v3 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( !v3 );
  }
  return (unsigned int)v2;
}

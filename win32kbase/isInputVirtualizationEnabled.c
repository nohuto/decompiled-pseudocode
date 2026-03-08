/*
 * XREFs of isInputVirtualizationEnabled @ 0x1C0079014
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C002E140 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     AllocQueue @ 0x1C0078C60 (AllocQueue.c)
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     _RegisterLogonProcess @ 0x1C008CF70 (_RegisterLogonProcess.c)
 *     CleanupLogonProcess @ 0x1C008E950 (CleanupLogonProcess.c)
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0094A90 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 *     InputUnInitialize @ 0x1C0094FA8 (InputUnInitialize.c)
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C0095520 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00C9650 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00D0580 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00D3CD0 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall isInputVirtualizationEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return gbInputVirtualizationEnabled
      && *(_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4) == gInputVirtualizationSessionId;
}

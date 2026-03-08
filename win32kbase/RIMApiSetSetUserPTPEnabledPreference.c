/*
 * XREFs of RIMApiSetSetUserPTPEnabledPreference @ 0x1C01C0898
 * Callers:
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 *     RIMUpdateDeviceForInputMode @ 0x1C00BC380 (RIMUpdateDeviceForInputMode.c)
 *     RIMAllocateHidDesc @ 0x1C01AC4D4 (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x1C01E1F68 (RIMApplyPTPConfigRemedyWorker.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C007B004 (RIMIsRunningOnDesktop.c)
 *     AccessPTPEnabledStatus @ 0x1C009D120 (AccessPTPEnabledStatus.c)
 *     RIMDeliverConfigRequest @ 0x1C01AD678 (RIMDeliverConfigRequest.c)
 *     RIMFindConfigDeviceForInput @ 0x1C01ADC20 (RIMFindConfigDeviceForInput.c)
 */

__int64 __fastcall RIMApiSetSetUserPTPEnabledPreference(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  int v6; // ebp
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // ebx
  struct RIMDEV *v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v5 = a2;
  v15 = 1;
  v6 = a1;
  result = RIMIsRunningOnDesktop(a1, a2, a3, a4);
  if ( (_DWORD)result )
  {
    AccessPTPEnabledStatus(0, 1, &v15);
    v12 = SGDGetUserSessionState(v9, v8, v10, v11);
    v13 = v15;
    *(_DWORD *)(v12 + 520) = v15;
    result = RIMFindConfigDeviceForInput(a3, v5, v6, &v14);
    if ( (_DWORD)result )
      return RIMDeliverConfigRequest(v14, *((_QWORD *)v14 + 57), 0x57u, v13 != 0);
  }
  return result;
}

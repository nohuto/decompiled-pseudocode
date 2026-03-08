/*
 * XREFs of PopUserPresencePredictionModeCallback @ 0x14085F4E0
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1402BD1D0 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUserPresencePredictionModeCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(_QWORD *)&GUID_USER_PRESENCE_PREDICTION.Data1 - *a1;
  if ( *(_QWORD *)&GUID_USER_PRESENCE_PREDICTION.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_USER_PRESENCE_PREDICTION.Data4 - a1[1];
  v5 = 0;
  if ( v4 || a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  PopAcquirePolicyLock((_DWORD)a1);
  if ( *a2 )
  {
    if ( *a2 != 1 )
      goto LABEL_9;
    dword_140C3D4E0 = 1;
    memset(Src, 0, 0x48uLL);
    Src[2] = 3;
  }
  else
  {
    dword_140C3D4E0 = 0;
    memset(Src, 0, 0x48uLL);
    Src[2] = 2;
  }
  Src[0] = 12;
  PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
LABEL_9:
  PopReleasePolicyLock(v7, v6, v8);
  return v5;
}

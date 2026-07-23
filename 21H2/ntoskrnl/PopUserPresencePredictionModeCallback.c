/*
 * XREFs of PopUserPresencePredictionModeCallback @ 0x1407D30C0
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140270CF4 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUserPresencePredictionModeCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
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
    dword_140C23380 = 1;
    memset(Src, 0, 0x48uLL);
    Src[2] = 3;
  }
  else
  {
    dword_140C23380 = 0;
    memset(Src, 0, 0x48uLL);
    Src[2] = 2;
  }
  Src[0] = 12;
  PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
LABEL_9:
  PopReleasePolicyLock(v7, v6);
  return v5;
}

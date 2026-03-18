/*
 * XREFs of PopPowerRequestHandleRequestUpdate @ 0x1407EFDC8
 * Callers:
 *     PopPowerRequestCallbackWorker @ 0x14036A8F0 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140989CF0 (PopPowerRequestDebounceTimerWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     PopUmpoSendPowerMessage @ 0x14036AF00 (PopUmpoSendPowerMessage.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x1407F2D00 (PopPowerRequestCallbackDisplayRequired.c)
 */

char __fastcall PopPowerRequestHandleRequestUpdate(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rbx
  int v7; // eax
  int v8; // r9d
  int v9; // eax
  bool v10; // zf
  int v11; // edx
  unsigned int v12; // edx
  int v13; // edi
  bool v14; // r14
  int v15; // esi
  __int64 v16; // r8
  __int64 v17; // r8
  _QWORD v19[2]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD Src[20]; // [rsp+30h] [rbp-68h] BYREF

  v6 = 6LL * (int)a2;
  v7 = *((_DWORD *)&PopPowerRequestAttributes + 12 * (int)a2 + 2);
  v8 = v7 + 1;
  v9 = v7 - 1;
  if ( a3 )
    v9 = v8;
  *((_DWORD *)&PopPowerRequestAttributes + 12 * (int)a2 + 2) = v9;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 136) )
    {
      if ( a2 <= 3 )
      {
        v10 = PopPowerRequestNotificationsEnabled == 0;
        *(_BYTE *)((int)a2 + a1 + 153) = a3;
        if ( !v10 )
        {
          memset(Src, 0, 0x48uLL);
          Src[2] = *(_DWORD *)(a1 + 36);
          Src[0] = 16;
          Src[3] = a2;
          LOBYTE(Src[4]) = a3;
          LOBYTE(v9) = PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
        }
      }
    }
  }
  v11 = *((_DWORD *)&PopPowerRequestAttributes + 2 * v6 + 3);
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 4) == 0 )
    {
      v12 = v11 | 4;
      *((_DWORD *)&PopPowerRequestAttributes + 2 * v6 + 3) = v12;
      v13 = 0;
      while ( 1 )
      {
        v14 = *((_DWORD *)&PopPowerRequestAttributes + 2 * v6 + 2) != 0;
        v15 = v12 & 2;
        LOBYTE(v9) = v15 != 0;
        if ( (v15 != 0) == v14 )
          break;
        PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
        LOBYTE(v16) = v14;
        ((void (__fastcall *)(_QWORD, _QWORD, __int64))*(&PopPowerRequestAttributes + v6))(0LL, a2, v16);
        PopAcquirePowerRequestPushLock(1);
        v12 = *((_DWORD *)&PopPowerRequestAttributes + 2 * v6 + 3) & 0xFFFFFFFD | (2 * v14);
        *((_DWORD *)&PopPowerRequestAttributes + 2 * v6 + 3) = v12;
        if ( v15 )
        {
          if ( (unsigned int)++v13 >= 3 )
          {
            ++*((_DWORD *)&PopPowerRequestAttributes + 2 * v6 + 2);
            v19[0] = 0LL;
            v19[1] = -1LL;
            *((_DWORD *)&PopPowerRequestAttributes + 2 * v6 + 3) = v12 | 8;
            LOBYTE(v9) = KeSetTimer2((__int64)&PopPowerRequestDebounceTimer, -50000000LL, 0LL, (__int64)v19);
            v12 = *((_DWORD *)&PopPowerRequestAttributes + 2 * v6 + 3);
            break;
          }
        }
      }
      *((_DWORD *)&PopPowerRequestAttributes + 2 * v6 + 3) = v12 & 0xFFFFFFFB;
    }
  }
  else
  {
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    LOBYTE(v17) = a3;
    ((void (__fastcall *)(__int64, _QWORD, __int64))*(&PopPowerRequestAttributes + v6))(a1, a2, v17);
    LOBYTE(v9) = (unsigned __int8)PopAcquirePowerRequestPushLock(1);
  }
  return v9;
}

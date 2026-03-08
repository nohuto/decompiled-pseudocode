/*
 * XREFs of KiMcheckAlternateReturn @ 0x14057DEF0
 * Callers:
 *     KxMcheckAlternateReturn @ 0x1404285C0 (KxMcheckAlternateReturn.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14022B710 (KeStallExecutionProcessor.c)
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140517070 (WheaGetErrPacketFromErrRecord.c)
 *     KiAltContextWorkQueueAddItem @ 0x14057DD74 (KiAltContextWorkQueueAddItem.c)
 *     WheaRecoveryBugCheck @ 0x14060E210 (WheaRecoveryBugCheck.c)
 *     WheapGetErrorSource @ 0x14060EAE8 (WheapGetErrorSource.c)
 *     WheaGetCurrentProcessName @ 0x14060F890 (WheaGetCurrentProcessName.c)
 *     WheaProcessWaitingETWEvents @ 0x140610D50 (WheaProcessWaitingETWEvents.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A05140 (WheaAttemptPhysicalPageOffline.c)
 *     WheaTerminateProcess @ 0x140A053E0 (WheaTerminateProcess.c)
 *     WheaExecuteRowFailureCheck @ 0x140A05CDC (WheaExecuteRowFailureCheck.c)
 */

LONG __fastcall KiMcheckAlternateReturn(int *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // r14
  char v3; // r12
  __int64 v4; // rdi
  int v6; // esi
  __int64 CurrentIrql; // r15
  __int64 v8; // r9
  unsigned int *v9; // rcx
  unsigned int v10; // r8d
  unsigned int *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r10
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  LONG result; // eax
  PWHEA_ERROR_PACKET ErrPacketFromErrRecord; // rax
  __int64 ErrorSource; // rax
  __int64 v22; // rdx
  unsigned __int8 v23; // dl
  __int64 v24; // r15
  unsigned int v25; // esi
  int *v26; // rax
  __int64 v27; // [rsp+20h] [rbp-50h] BYREF
  __int64 v28; // [rsp+28h] [rbp-48h] BYREF
  _DWORD Src[9]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+54h] [rbp-1Ch]
  int v31; // [rsp+5Ch] [rbp-14h]
  char v32; // [rsp+60h] [rbp-10h]

  v1 = 0LL;
  v2 = *((_QWORD *)a1 + 1);
  v3 = *(_BYTE *)a1 & 0x10;
  v4 = 0LL;
  v6 = -1073741637;
  CurrentIrql = KeGetCurrentIrql();
  v8 = *(unsigned __int16 *)(v2 + 10);
  v9 = (unsigned int *)(v2 + 128);
  v10 = 0;
  v27 = CurrentIrql;
  v11 = (unsigned int *)(v2 + 128);
  if ( (_DWORD)v8 )
  {
    while ( 1 )
    {
      v12 = *((_QWORD *)v11 + 2) - *(_QWORD *)&XPF_MCA_SECTION_GUID.Data1;
      if ( !v12 )
        v12 = *((_QWORD *)v11 + 3) - *(_QWORD *)XPF_MCA_SECTION_GUID.Data4;
      if ( !v12 )
        break;
      v11 += 18;
      if ( ++v10 >= (unsigned int)v8 )
        goto LABEL_23;
    }
    v13 = *v11;
    if ( v10 < (unsigned int)v8 )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = *((_QWORD *)v9 + 2) - RECOVERY_INFO_SECTION_GUID;
        if ( !v15 )
          v15 = *((_QWORD *)v9 + 3) - *((_QWORD *)&RECOVERY_INFO_SECTION_GUID + 1);
        if ( !v15 )
          break;
        v9 += 18;
        if ( ++v14 >= (unsigned int)v8 )
          goto LABEL_15;
      }
      v4 = v2 + *v9;
LABEL_15:
      v1 = *(_QWORD *)(v13 + v2 + 48);
      if ( (*a1 & 4) != 0 )
      {
        if ( v4 )
          *(_DWORD *)(v4 + 1) |= 8u;
        if ( !(_BYTE)CurrentIrql )
        {
          LOBYTE(v8) = v3;
          v6 = WheaAttemptPhysicalPageOffline(v1 >> 12, 0LL, 1LL, v8);
          if ( !v6 || !v3 )
          {
            LOBYTE(v17) = v3;
            WheaExecuteRowFailureCheck(v1 >> 12, v1, v16, v17);
          }
LABEL_22:
          LOBYTE(CurrentIrql) = v27;
          goto LABEL_23;
        }
        if ( KiAltReturnInitialized )
        {
          v23 = 0;
          while ( _InterlockedCompareExchange(&dword_140D1B820[12 * v23], 1, 0) )
          {
            if ( ++v23 >= 0x10u )
            {
              v6 = -1073741670;
              goto LABEL_23;
            }
          }
          v24 = 48LL * v23;
          *(_OWORD *)((char *)&KiAltContextWrapper + v24 + 24) = *(_OWORD *)a1;
          _InterlockedAdd((volatile signed __int32 *)((char *)&KiAltContextWrapper + v24 + 16), 1u);
          KiAltContextWorkQueueAddItem((PLIST_ENTRY)((char *)&KiAltContextWrapper + v24));
          v25 = 0;
          while ( *(int *)((char *)&KiAltContextWrapper + v24 + 16) > 1 )
          {
            KeStallExecutionProcessor(0x32u);
            v25 += 50;
            if ( v25 >= 0x1E8480 )
            {
              v26 = (int *)((char *)&KiAltContextWrapper + v24 + 40);
              *v26 = 258;
              goto LABEL_45;
            }
          }
          v26 = (int *)((char *)&KiAltContextWrapper + v24 + 40);
LABEL_45:
          v6 = *v26;
          _InterlockedExchange((volatile __int32 *)((char *)&KiAltContextWrapper + v24 + 16), 0);
          if ( v6 )
            goto LABEL_22;
          LOBYTE(CurrentIrql) = v27;
          if ( (unsigned __int8)v27 >= 2u )
            v6 = -1073741595;
        }
      }
    }
  }
LABEL_23:
  v18 = *a1;
  Src[3] = 0;
  Src[1] = 1;
  Src[0] = 1733060695;
  Src[2] = 49;
  Src[5] = -2147483595;
  Src[4] = 1280201291;
  Src[6] = 2;
  Src[7] = 17;
  Src[8] = v18;
  v30 = v1;
  v31 = v6;
  v32 = v3;
  result = WheaLogInternalEvent(Src);
  if ( v4 )
  {
    *(_BYTE *)(v4 + 13) = CurrentIrql;
    v28 = v4 + 19;
    LODWORD(v27) = 20;
    result = WheaGetCurrentProcessName(&v28, &v27);
  }
  if ( v6 == 259 )
  {
    result = *a1;
    if ( (*a1 & 8) != 0 && !v3 )
    {
      if ( v4 )
        *(_DWORD *)(v4 + 1) |= 2u;
      result = WheaTerminateProcess();
    }
  }
  *(_DWORD *)(v2 + 104) &= ~0x80u;
  if ( !v6 )
    return WheaProcessWaitingETWEvents();
  if ( v3 )
  {
    ErrPacketFromErrRecord = WheaGetErrPacketFromErrRecord((PWHEA_ERROR_RECORD)v2);
    if ( ErrPacketFromErrRecord )
    {
      ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, ErrPacketFromErrRecord->ErrorSourceId);
      v22 = (ErrorSource + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64);
    }
    else
    {
      v22 = 0LL;
    }
    if ( v4 )
    {
      *(_BYTE *)(v4 + 14) = 0;
      switch ( v6 )
      {
        case 258:
          *(_DWORD *)(v4 + 15) = 2;
          break;
        case -1073741670:
          *(_DWORD *)(v4 + 15) = 11;
          break;
        case 259:
          *(_DWORD *)(v4 + 15) = 1;
          break;
        default:
          *(_DWORD *)(v4 + 15) = 16 - (v6 != -1073741595);
          break;
      }
    }
    *(_DWORD *)(v2 + 104) &= ~1u;
    *(_DWORD *)(v2 + 12) = 1;
    result = WheaRecoveryBugCheck(v2, v22, 0LL);
  }
  if ( v6 >= 0 )
    return WheaProcessWaitingETWEvents();
  return result;
}

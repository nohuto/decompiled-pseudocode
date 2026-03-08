/*
 * XREFs of PopExecuteSystemIdleAction @ 0x14073B810
 * Callers:
 *     PopSystemIdleWorker @ 0x14073B6A0 (PopSystemIdleWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopUpdatePdcSystemIdleState @ 0x14073B8FC (PopUpdatePdcSystemIdleState.c)
 */

__int64 __fastcall PopExecuteSystemIdleAction(int a1, unsigned __int8 a2, __int64 a3)
{
  int v3; // r14d
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  unsigned int updated; // ebx
  bool v9; // zf
  REGHANDLE v10; // rdi
  int v12; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-48h] BYREF
  int v14; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  unsigned int *v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  int *v18; // [rsp+68h] [rbp-18h]
  __int64 v19; // [rsp+70h] [rbp-10h]

  v3 = a2;
  v6 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  v7 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v7
    && (v7 = (unsigned int)(v7 - 1), (_DWORD)v7)
    && (v7 = (unsigned int)(v7 - 1), (_DWORD)v7)
    && (v7 = (unsigned int)(v7 - 1), (_DWORD)v7) )
  {
    if ( (_DWORD)v7 != 1 )
    {
      updated = -1073741811;
      goto LABEL_8;
    }
    v7 = 0LL;
  }
  else
  {
    LOBYTE(v7) = a2;
  }
  updated = PopUpdatePdcSystemIdleState(v7);
LABEL_8:
  *(_DWORD *)(a3 + 8) = a1;
  v14 = a1;
  v9 = PopDiagHandleRegistered == 0;
  *(_QWORD *)a3 = v6;
  *(_BYTE *)(a3 + 12) = v3;
  *(_DWORD *)(a3 + 16) = updated;
  v13 = updated;
  if ( !v9 )
  {
    v10 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SIDLE_UPDATE_NOTIFICATION_WORKER) )
    {
      v12 = v3;
      UserData.Ptr = (ULONGLONG)&v12;
      *(_QWORD *)&UserData.Size = 4LL;
      v16 = &v13;
      v17 = 4LL;
      v18 = &v14;
      v19 = 4LL;
      EtwWrite(v10, &POP_ETW_EVENT_SIDLE_UPDATE_NOTIFICATION_WORKER, 0LL, 3u, &UserData);
    }
  }
  return updated;
}

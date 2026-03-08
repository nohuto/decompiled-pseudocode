/*
 * XREFs of PopDiagTracePostSleepNotification @ 0x140AA4E14
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

int __fastcall PopDiagTracePostSleepNotification(int a1, int a2, int a3, __int64 a4, __int64 a5, char a6, char a7)
{
  _UNKNOWN **v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+38h] [rbp-51h] BYREF
  __int64 v12; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-41h] BYREF
  int *v14; // [rsp+58h] [rbp-31h]
  __int64 v15; // [rsp+60h] [rbp-29h]
  int *v16; // [rsp+68h] [rbp-21h]
  __int64 v17; // [rsp+70h] [rbp-19h]
  __int64 *v18; // [rsp+78h] [rbp-11h]
  __int64 v19; // [rsp+80h] [rbp-9h]
  __int64 *v20; // [rsp+88h] [rbp-1h]
  __int64 v21; // [rsp+90h] [rbp+7h]
  char *v22; // [rsp+98h] [rbp+Fh]
  __int64 v23; // [rsp+A0h] [rbp+17h]
  char *v24; // [rsp+A8h] [rbp+1Fh]
  __int64 v25; // [rsp+B0h] [rbp+27h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+47h] BYREF
  int v27; // [rsp+D8h] [rbp+4Fh] BYREF
  int v28; // [rsp+E0h] [rbp+57h] BYREF
  int v29; // [rsp+E8h] [rbp+5Fh] BYREF

  v7 = &retaddr;
  v29 = a3;
  v28 = a2;
  v27 = a1;
  v11 = 0LL;
  v12 = 0LL;
  if ( a4 )
  {
    LODWORD(v7) = MEMORY[0xFFFFF78000000014];
    v8 = -a4;
    if ( a4 >= 0 )
      v8 = a4 - MEMORY[0xFFFFF78000000008];
    v11 = MEMORY[0xFFFFF78000000014] + v8;
  }
  if ( a5 )
  {
    LODWORD(v7) = MEMORY[0xFFFFF78000000014];
    v9 = -a5;
    if ( a5 >= 0 )
      v9 = a5 - MEMORY[0xFFFFF78000000008];
    v12 = MEMORY[0xFFFFF78000000014] + v9;
  }
  if ( PopDiagHandleRegistered )
  {
    UserData.Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData.Size = 4LL;
    v14 = &v28;
    v15 = 4LL;
    v16 = &v29;
    v17 = 4LL;
    v18 = &v11;
    v20 = &v12;
    v22 = &a6;
    v24 = &a7;
    v19 = 8LL;
    v21 = 8LL;
    v23 = 4LL;
    v25 = 4LL;
    LODWORD(v7) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POSTSLEEP_NOTIFICATION, 0LL, 7u, &UserData);
  }
  return (int)v7;
}

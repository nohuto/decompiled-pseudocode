/*
 * XREFs of PopAssessSystemIdleEvent @ 0x14073BD8C
 * Callers:
 *     PopIsSystemIdle @ 0x14073BC88 (PopIsSystemIdle.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall PopAssessSystemIdleEvent(int *a1, unsigned int a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r10
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  bool v8; // zf
  int v9; // esi
  int v10; // eax
  REGHANDLE v11; // rdi
  int v13; // [rsp+30h] [rbp-49h] BYREF
  int v14; // [rsp+38h] [rbp-41h] BYREF
  int v15; // [rsp+40h] [rbp-39h] BYREF
  int v16; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  int *v19; // [rsp+70h] [rbp-9h]
  int v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+7Ch] [rbp+3h]
  int *v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+88h] [rbp+Fh]
  int v24; // [rsp+8Ch] [rbp+13h]
  int *v25; // [rsp+90h] [rbp+17h]
  int v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+9Ch] [rbp+23h]
  unsigned int *v28; // [rsp+A0h] [rbp+27h]
  int v29; // [rsp+A8h] [rbp+2Fh]
  int v30; // [rsp+ACh] [rbp+33h]

  v3 = a2;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  v7 = MEMORY[0xFFFFF78000000008] / 0x989680uLL - *((_QWORD *)a1 + 1);
  if ( *((_BYTE *)a1 + 16) )
  {
    *a3 = -1LL;
  }
  else
  {
    *a3 = v7;
    if ( (_DWORD)v3 )
      v5 = v7 < v3;
    else
      v5 = 2;
  }
  v8 = PopDiagHandleRegistered == 0;
  v9 = *((unsigned __int8 *)a1 + 16);
  v10 = *a1;
  *((_BYTE *)a1 + 48) = v9;
  *((_QWORD *)a1 + 3) = v6;
  *((_QWORD *)a1 + 4) = v7;
  *((_QWORD *)a1 + 5) = v3;
  a1[13] = v5;
  v17 = v5;
  v15 = v3;
  v14 = v7;
  v13 = v10;
  if ( !v8 )
  {
    v11 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_EVENT_ASSESSMENT) )
    {
      UserData.Reserved = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      UserData.Ptr = (ULONGLONG)&v13;
      v19 = &v14;
      UserData.Size = 4;
      v22 = &v15;
      v25 = &v16;
      v28 = &v17;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      v29 = 4;
      v16 = v9;
      EtwWrite(v11, &POP_ETW_EVENT_SYSTEM_IDLE_EVENT_ASSESSMENT, 0LL, 5u, &UserData);
    }
  }
  return v5;
}

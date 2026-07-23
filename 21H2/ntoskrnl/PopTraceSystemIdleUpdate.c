/*
 * XREFs of PopTraceSystemIdleUpdate @ 0x14066E8EC
 * Callers:
 *     PopPolicySystemIdle @ 0x14066D1E0 (PopPolicySystemIdle.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PopTraceSystemIdleUpdate(
        int a1,
        unsigned __int8 a2,
        char a3,
        char a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  _UNKNOWN **v12; // rax
  int v15; // r14d
  REGHANDLE v16; // rbx
  bool v17; // cf
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v22; // [rsp+38h] [rbp-89h] BYREF
  int v23; // [rsp+3Ch] [rbp-85h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-79h] BYREF
  int *v25; // [rsp+58h] [rbp-69h]
  int v26; // [rsp+60h] [rbp-61h]
  int v27; // [rsp+64h] [rbp-5Dh]
  int *v28; // [rsp+68h] [rbp-59h]
  int v29; // [rsp+70h] [rbp-51h]
  int v30; // [rsp+74h] [rbp-4Dh]
  char *v31; // [rsp+78h] [rbp-49h]
  int v32; // [rsp+80h] [rbp-41h]
  int v33; // [rsp+84h] [rbp-3Dh]
  char *v34; // [rsp+88h] [rbp-39h]
  int v35; // [rsp+90h] [rbp-31h]
  int v36; // [rsp+94h] [rbp-2Dh]
  char *v37; // [rsp+98h] [rbp-29h]
  int v38; // [rsp+A0h] [rbp-21h]
  int v39; // [rsp+A4h] [rbp-1Dh]
  __int64 *v40; // [rsp+A8h] [rbp-19h]
  int v41; // [rsp+B0h] [rbp-11h]
  int v42; // [rsp+B4h] [rbp-Dh]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+1Fh] BYREF
  int v44; // [rsp+E8h] [rbp+27h] BYREF

  v12 = &retaddr;
  v44 = a1;
  v15 = a2;
  if ( PopDiagHandleRegistered )
  {
    v16 = PopDiagHandle;
    LOBYTE(v12) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_UPDATE);
    if ( (_BYTE)v12 )
    {
      v22 = v15;
      v41 = 8;
      UserData.Size = 4;
      v26 = 4;
      v29 = 4;
      v32 = 4;
      v35 = 4;
      v38 = 4;
      v17 = a7 != 0;
      a7 = -a7;
      v18 = (a4 != 0 ? 2 : 0) | (v17 ? 0x40 : 0) | (a3 != 0) | (PopUserShutdownInProgress != 0 ? 4 : 0);
      v17 = a6 != 0;
      a6 = -a6;
      v19 = (v17 ? 8 : 0) | v18;
      v17 = a10 != 0;
      a10 = -a10;
      v20 = (v17 ? 0x20 : 0) | v19;
      v17 = a9 != 0;
      a9 = -a9;
      UserData.Reserved = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      UserData.Ptr = (ULONGLONG)&v44;
      v25 = &v22;
      v28 = &v23;
      v31 = &a11;
      v34 = &a12;
      v37 = &a8;
      v40 = &qword_140C23988;
      v23 = (v17 ? 0x10 : 0) | v20;
      LOBYTE(v12) = EtwWrite(v16, &POP_ETW_EVENT_SYSTEM_IDLE_UPDATE, 0LL, 7u, &UserData);
    }
  }
  return (char)v12;
}

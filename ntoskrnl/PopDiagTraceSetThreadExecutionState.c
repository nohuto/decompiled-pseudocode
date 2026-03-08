/*
 * XREFs of PopDiagTraceSetThreadExecutionState @ 0x1408611C4
 * Callers:
 *     NtSetThreadExecutionState @ 0x14073A9D0 (NtSetThreadExecutionState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceSetThreadExecutionState(__int64 a1, int a2)
{
  _UNKNOWN **v2; // rax
  REGHANDLE v4; // rdi
  unsigned __int16 *v5; // rcx
  __int64 *v6; // rax
  int v7; // edx
  char *v8; // rax
  __int16 v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  int v12; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int16 *v14; // [rsp+58h] [rbp+7h]
  __int64 v15; // [rsp+60h] [rbp+Fh]
  __int64 v16; // [rsp+68h] [rbp+17h] BYREF
  int v17; // [rsp+70h] [rbp+1Fh]
  int v18; // [rsp+74h] [rbp+23h]
  char v19; // [rsp+78h] [rbp+27h] BYREF
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v21; // [rsp+C0h] [rbp+6Fh] BYREF

  v2 = &retaddr;
  v21 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STES);
    if ( (_BYTE)v2 )
    {
      v11 = *(_DWORD *)(a1 + 1224);
      v12 = *(_DWORD *)(a1 + 1232);
      v5 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 544) + 1472LL);
      v10 = *v5 >> 1;
      UserData.Ptr = (ULONGLONG)&v21;
      v14 = &v10;
      v6 = &v16;
      *(_QWORD *)&UserData.Size = 4LL;
      v15 = 2LL;
      v7 = *v5;
      if ( (_WORD)v7 )
      {
        v16 = *((_QWORD *)v5 + 1);
        v6 = (__int64 *)&v19;
        v17 = v7;
        v18 = 0;
      }
      v6[1] = 4LL;
      *v6 = (__int64)&v11;
      v8 = (char *)(v6 + 2);
      *((_QWORD *)v8 + 1) = 4LL;
      *(_QWORD *)v8 = &v12;
      LOBYTE(v2) = EtwWrite(v4, &POP_ETW_EVENT_STES, 0LL, (v8 - (char *)&UserData + 16) >> 4, &UserData);
    }
  }
  return (char)v2;
}

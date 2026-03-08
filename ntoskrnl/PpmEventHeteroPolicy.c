/*
 * XREFs of PpmEventHeteroPolicy @ 0x140826ED0
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PpmEventHeteroPolicy(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  REGHANDLE v3; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-49h] BYREF
  int *v6; // [rsp+40h] [rbp-39h]
  int v7; // [rsp+48h] [rbp-31h]
  int v8; // [rsp+4Ch] [rbp-2Dh]
  int *v9; // [rsp+50h] [rbp-29h]
  int v10; // [rsp+58h] [rbp-21h]
  int v11; // [rsp+5Ch] [rbp-1Dh]
  void *v12; // [rsp+60h] [rbp-19h]
  int v13; // [rsp+68h] [rbp-11h]
  int v14; // [rsp+6Ch] [rbp-Dh]
  int *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  void *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  int *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  int *v24; // [rsp+A0h] [rbp+27h]
  int v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+ACh] [rbp+33h]
  int *v27; // [rsp+B0h] [rbp+37h]
  int v28; // [rsp+B8h] [rbp+3Fh]
  int v29; // [rsp+BCh] [rbp+43h]

  v1 = &PPM_ETW_HETEROGENEOUS_POLICIES_CHANGED;
  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_HETEROGENEOUS_POLICIES_RUNDOWN;
  if ( !a1 )
    v2 = &PPM_ETW_HETEROGENEOUS_POLICIES_CHANGED;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, v2);
    if ( (_BYTE)v1 )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      UserData.Ptr = (ULONGLONG)&PpmHeteroPolicy;
      v6 = &PopHeteroSystem;
      v9 = &KiDesiredHeteroCpuPolicy;
      v12 = &unk_140D1D40C;
      v15 = &KiDynamicHeteroCpuPolicyMask;
      v18 = &unk_140D1D3FC;
      v21 = KiDynamicHeteroCpuPolicy;
      v24 = &KiDynamicHeteroCpuPolicyImportantPriority;
      v27 = &KiDynamicHeteroCpuPolicyExpectedRuntime;
      UserData.Size = 4;
      v7 = 4;
      v10 = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      LOBYTE(v1) = EtwWrite(v3, v2, 0LL, 9u, &UserData);
    }
  }
  return (char)v1;
}

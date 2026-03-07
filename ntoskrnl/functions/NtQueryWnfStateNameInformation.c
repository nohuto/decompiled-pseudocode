__int64 __fastcall NtQueryWnfStateNameInformation(__int64 *a1, int a2, char *a3, int *a4, unsigned int Length)
{
  int *v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  int v13; // esi
  int v14; // r13d
  ACCESS_MASK v15; // r12d
  __int64 v16; // r8
  struct _KTHREAD *v17; // rax
  PEPROCESS Process; // rdx
  int v19; // ecx
  void *v20; // rcx
  unsigned int v22; // [rsp+30h] [rbp-98h]
  int v23; // [rsp+38h] [rbp-90h]
  int v24; // [rsp+3Ch] [rbp-8Ch]
  __int64 v25; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-80h] BYREF
  int v27; // [rsp+50h] [rbp-78h]
  int v28[2]; // [rsp+58h] [rbp-70h] BYREF
  PVOID P; // [rsp+60h] [rbp-68h] BYREF
  PSID Sid; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-58h]
  PVOID v32[7]; // [rsp+90h] [rbp-38h] BYREF

  v5 = a4;
  v26 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v28 = 0LL;
  v25 = 0LL;
  v23 = 0;
  *(_OWORD *)v32 = 0LL;
  v10 = ExpCaptureWnfStateName(a1, &v26, PreviousMode);
  v22 = v10;
  if ( v10 >= 0 )
  {
    v12 = v26;
    v27 = (v26 >> 4) & 3;
    v31 = (v26 >> 6) & 0xF;
    v23 = (v26 >> 6) & 0xF;
    LOBYTE(v11) = PreviousMode;
    v10 = ExpWnfCaptureScopeInstanceId(v23, a3, v11, (__int64)&Sid, (__int64)v32);
    v22 = v10;
    if ( v10 >= 0 )
    {
      if ( a2 && (unsigned int)(a2 - 1) > 1 )
      {
        v10 = -1073741821;
        v22 = -1073741821;
      }
      else
      {
        if ( Length >= 4 )
        {
          if ( PreviousMode )
            ProbeForWrite(v5, Length, 4u);
          v13 = 1;
          if ( a2 )
          {
            v24 = 0;
          }
          else
          {
            v24 = 1;
            if ( a3 )
            {
              v10 = -1073741811;
              v22 = -1073741811;
              goto LABEL_52;
            }
          }
          if ( PreviousMode && a2 )
          {
            v14 = 0;
            if ( a3 )
            {
              v10 = ExpWnfCheckCrossScopeAccess(v12);
              v22 = v10;
              if ( v10 < 0 )
                goto LABEL_52;
            }
          }
          else
          {
            v14 = 1;
          }
          v15 = 0;
          if ( !v14 && (unsigned int)(a2 - 1) <= 1 )
            v15 = 2;
          v16 = 0LL;
          if ( PreviousMode )
          {
            v17 = KeGetCurrentThread();
            Process = v17->ApcState.Process;
            v12 = v26;
            v19 = v23;
            if ( !v24 )
              v16 = (__int64)v17;
          }
          else
          {
            Process = PsInitialSystemProcess;
            v19 = v31;
          }
          v10 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v28, (__int64)Process, v16, v19, (__int64 *)Sid);
          v22 = v10;
          if ( v10 < 0 )
            goto LABEL_52;
          v10 = ExpWnfLookupNameInstance(*(__int64 *)v28, v12, &v25);
          v22 = v10;
          if ( v10 != -1073741772 || v27 == 3 )
          {
            if ( v10 < 0 )
              goto LABEL_52;
            if ( v14 )
              goto LABEL_29;
            v20 = *(void **)(v25 + 72);
          }
          else
          {
            v10 = ExpWnfLookupPermanentName(v12, (PSECURITY_DESCRIPTOR **)&P);
            v22 = v10;
            if ( v10 < 0 )
              goto LABEL_52;
            if ( v14 )
            {
LABEL_29:
              if ( a2 )
              {
                if ( a2 == 1 )
                {
                  if ( v25 && *(_DWORD *)(v25 + 160) )
                    goto LABEL_36;
                }
                else if ( !v25 || !*(_DWORD *)(v25 + 164) )
                {
                  goto LABEL_36;
                }
                v13 = 0;
              }
LABEL_36:
              *a4 = v13;
              v10 = 0;
              v22 = 0;
              v5 = a4;
              goto LABEL_37;
            }
            v20 = (void *)*((_QWORD *)P + 2);
          }
          v10 = ExpWnfCheckCallerAccess(v20, v15);
          v22 = v10;
          if ( v10 >= 0 )
            goto LABEL_29;
LABEL_52:
          v5 = a4;
          goto LABEL_37;
        }
        v10 = -1073741811;
        v22 = -1073741811;
      }
    }
  }
LABEL_37:
  if ( v10 == -1073741772 && !a2 )
  {
    *v5 = 0;
    v22 = 0;
  }
  if ( v25 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v25 + 8));
  if ( *(_QWORD *)v28 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v28 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExpWnfReleaseCapturedScopeInstanceId(v23, v32, PreviousMode);
  return v22;
}

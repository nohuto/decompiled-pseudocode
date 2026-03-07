__int64 __fastcall PopExecutePowerAction(unsigned int *a1, unsigned int a2, _DWORD *a3, int a4, unsigned int a5)
{
  unsigned int v5; // r14d
  int v6; // esi
  int v7; // eax
  unsigned int v10; // ebx
  char v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  char v17; // r15
  unsigned int v18; // eax
  bool v19; // cf
  int v20; // r15d
  int v21; // r9d
  int v22; // r9d
  int v23; // r9d
  int v24; // r9d
  int v25; // r9d
  int v26; // r9d
  int v27; // r9d
  __int64 v28; // rcx
  int v29; // eax
  int v30; // r9d
  char v31; // r15
  char v32; // r15
  int v33; // eax
  bool v34; // zf
  int v35; // ecx
  unsigned int v36; // eax
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  __int64 v40; // [rsp+60h] [rbp-41h] BYREF
  int v41; // [rsp+68h] [rbp-39h] BYREF
  __int64 v42; // [rsp+70h] [rbp-31h] BYREF
  int v43; // [rsp+78h] [rbp-29h]
  unsigned int *v44; // [rsp+80h] [rbp-21h] BYREF
  int v45; // [rsp+88h] [rbp-19h]
  int v46; // [rsp+8Ch] [rbp-15h]
  unsigned int **v47; // [rsp+90h] [rbp-11h] BYREF
  int v48; // [rsp+98h] [rbp-9h]
  int v49; // [rsp+9Ch] [rbp-5h]

  v5 = 0;
  v6 = a4;
  v7 = a3[2];
  v42 = *(_QWORD *)a3;
  v10 = v42;
  v41 = a4;
  v12 = 1;
  v43 = v7;
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    v49 = 0;
    v46 = a4;
    v44 = a1;
    v47 = &v44;
    v45 = v42;
    v48 = 16;
    EtwTraceKernelEvent((__int64)&v47, 1u, 0x80008000, 0x1222u, 0x401802u);
  }
  if ( (a1[1] & 0x80u) != 0 )
  {
    PopVerifySystemPowerState(&v41, a5);
    BYTE2(v40) = PopVerifyPowerActionPolicy((int *)&v42);
    if ( BYTE2(v40) )
    {
      PopCompleteAction((__int64)a1, -1073741637);
      v10 = v42;
      v6 = v41;
LABEL_71:
      v12 = BYTE2(v40);
      return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *a3, a3[1], a3[2], v6, a5, v10, HIDWORD(v42), v43, v12, v40);
    }
    v10 = v42;
    if ( (unsigned int)(v42 - 2) <= 1 )
      HIDWORD(v42) |= 0x80000000;
    v16 = a1[1];
    v17 = 0;
    BYTE1(v40) = 0;
    if ( (v16 & 2) != 0 )
      goto LABEL_59;
    a1[1] = v16 | 2;
    if ( v10 == 6 && PsWin32CalloutsEstablished )
    {
      v18 = *a1;
      if ( *a1 == 2 )
      {
        v10 = 0;
        LODWORD(v42) = 0;
        v19 = (v42 & 0x1000000000LL) != 0;
LABEL_18:
        v5 = v19 ? 16 : 32;
        goto LABEL_19;
      }
      if ( !v18 )
      {
        v10 = 0;
        LODWORD(v42) = 0;
        v5 = byte_140C3D4C4 != 0 ? 32 : 16;
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
        goto LABEL_19;
      }
      if ( v18 == 15 )
      {
        v19 = (v42 & 0x200000000000000LL) != 0;
        goto LABEL_18;
      }
    }
LABEL_19:
    if ( v10 - 4 <= 2 )
      PopDiagTraceShutdownAction(v10, v5, *a1);
    if ( !byte_140C3CD61 )
      PopResetActionDefaults();
    if ( v10 )
    {
      v6 = v41;
      LOBYTE(v40) = 0;
      v20 = HIDWORD(v42) | 0x10000000;
      if ( v10 != 7 )
        v20 = HIDWORD(v42);
      if ( v10 == 3 )
        v6 = 5;
      if ( v10 == 4 )
        v6 = 6;
      v41 = v6;
      if ( (int)PopCompareActions(v10, qword_140C3CD64) >= 0 )
      {
        PopPromoteActionFlag((unsigned int)&v40, 1, v20, 0, 1);
        PopPromoteActionFlag((unsigned int)&v40, v22 + 1, v20, v22, 2);
        PopPromoteActionFlag((unsigned int)&v40, v23 + 4, v20, v23, 0x10000000);
        if ( v10 == 2 )
        {
          if ( v6 < *((_DWORD *)PopPolicy + 17) )
            v6 = *((_DWORD *)PopPolicy + 17);
          v41 = v6;
        }
        if ( v6 > SHIDWORD(qword_140C3CD64) )
        {
          LOBYTE(v40) = v40 | 4;
          HIDWORD(qword_140C3CD64) = v6;
        }
      }
      LOBYTE(v21) = 1;
      PopPromoteActionFlag((unsigned int)&v40, 1, v20, v21, 4);
      PopPromoteActionFlag((unsigned int)&v40, 5, v20, v24, 0x80000000);
      PopPromoteActionFlag((unsigned int)&v40, 0, v20, v25, 0x40000000);
      PopPromoteActionFlag((unsigned int)&v40, 0, v20, v26, 8);
      PopPromoteActionFlag((unsigned int)&v40, 0, v20, v27, 32);
      if ( (int)PopCompareActions(v10, qword_140C3CD64) <= 0 )
      {
        v32 = v40;
      }
      else
      {
        v29 = PopCompareActions(v10, 3);
        v31 = v40;
        if ( v29 >= 0 )
          v31 = v40 | 2;
        if ( !(unsigned int)PopCompareActions(v30, 8) )
          v31 |= 2u;
        LODWORD(qword_140C3CD64) = v10;
        v32 = v31 | 5;
        v33 = *a1;
        v15 = v10;
        dword_140C3CD78 = 0;
        dword_140C3CD74 = v33;
        v34 = *a1 == 0;
        LOBYTE(v40) = v32;
        if ( v34 )
          dword_140C3CD78 = a1[4];
      }
      if ( (_DWORD)v15 == 3 )
        LODWORD(qword_140C3CD64) = 2;
      if ( v32 )
      {
        if ( TtmIsEnabled(v28, v13) )
          PopTtmIsSxTransitionInProgress = 1;
        BYTE1(v40) = 1;
        if ( (unsigned __int8)byte_140C3CD61 < 2u )
        {
          PopSetPowerActionState(1);
          dword_140C3CD70 = 0;
          v35 = 2;
        }
        else
        {
          LOBYTE(PopAction) = v32 | PopAction;
          v35 = 1;
        }
        PopGetPolicyWorker(v35);
      }
      v17 = BYTE1(v40);
LABEL_54:
      v36 = a1[1];
      if ( (v36 & 1) != 0 )
        goto LABEL_65;
      a1[1] = v36 | 1;
      if ( v5 == 32 )
      {
        if ( !_InterlockedExchange(&PopShutdownEventCode, 32) )
          a2 |= 0x10u;
      }
      else
      {
        if ( v5 != 16 )
        {
LABEL_64:
          PopSetNotificationWork(a2, v13, v14, v15);
LABEL_65:
          if ( (a1[1] & 0x20) != 0 )
          {
            if ( v17 )
            {
              v37 = (_QWORD *)qword_140C3D388;
              v38 = (_QWORD *)(*((_QWORD *)a1 + 1) + 32LL);
              if ( *(__int64 **)qword_140C3D388 != &PopActionWaiters )
                __fastfail(3u);
              *v38 = &PopActionWaiters;
              v38[1] = v37;
              *v37 = v38;
              qword_140C3D388 = (__int64)v38;
            }
            else
            {
              PopCompleteAction((__int64)a1, 0);
            }
          }
          goto LABEL_71;
        }
        if ( !_InterlockedCompareExchange(&PopShutdownEventCode, 16, 0) )
          a2 |= 0x10u;
      }
      v10 = v42;
      v6 = v41;
      goto LABEL_64;
    }
LABEL_59:
    v6 = v41;
    goto LABEL_54;
  }
  PopCompleteAction((__int64)a1, 0);
  return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *a3, a3[1], a3[2], v6, a5, v10, HIDWORD(v42), v43, v12, v40);
}

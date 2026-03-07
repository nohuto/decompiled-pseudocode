__int64 __fastcall PfSnBeginScenario(void *a1, unsigned __int8 *a2, int a3, unsigned int a4, const void **a5)
{
  __int64 CurrentThread; // r13
  int v7; // esi
  unsigned __int8 *v8; // r14
  int v9; // ebx
  __int64 v10; // rdi
  int v11; // r9d
  int v12; // r12d
  _BYTE *v13; // r14
  int v14; // ecx
  struct _EX_RUNDOWN_REF *v15; // rsi
  unsigned int v16; // edx
  int v17; // eax
  unsigned int started; // r15d
  char v20; // [rsp+40h] [rbp-20h]
  int v21; // [rsp+44h] [rbp-1Ch] BYREF
  int v22; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+4Ch] [rbp-14h]
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+58h] [rbp-8h] BYREF

  CurrentThread = (__int64)KeGetCurrentThread();
  v23 = -1;
  v7 = a3;
  v21 = 0;
  v8 = a2;
  v22 = 0;
  v9 = 0;
  v20 = *(_BYTE *)(CurrentThread + 562);
  v10 = -1LL;
  P = 0LL;
  v25 = 0LL;
  *(_BYTE *)(CurrentThread + 562) = 0;
  if ( (int)PsGetIoPriorityThread(CurrentThread) < 2 )
  {
    started = 1075380276;
    goto LABEL_27;
  }
  v12 = v11 + 1;
  if ( v11 + 1 + _InterlockedExchangeAdd(&dword_140C6A2F0, v11 + 1) < (unsigned int)dword_140C64A98 )
  {
    v9 = PfSnCheckActionsNeeded(v8, v7, CurrentThread, &v21, &v22);
    if ( (a4 & 2) != 0 )
    {
      v9 &= ~2u;
      v22 = 9;
    }
    if ( (v9 & 2) != 0 )
    {
      if ( (int)PfSnGetPrefetchInstructions((__int64)v8, v7, &P) >= 0 )
      {
        v13 = P;
        v10 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)P + 16);
        if ( v10 < *((_QWORD *)P + 24) && v21 != 22 )
        {
          v9 &= ~1u;
          v21 = 11;
        }
        v23 = *((_DWORD *)P + 50);
LABEL_9:
        if ( (a4 & 4) != 0 )
        {
          v9 &= ~1u;
          v21 = 8;
        }
        if ( ((unsigned __int8)v9 & (unsigned __int8)v12) != 0 )
        {
          v14 = PfSnBeginTrace(
                  a2,
                  v7,
                  a1,
                  (struct _KTHREAD *)(CurrentThread & -(__int64)(((unsigned __int8)v12 & (unsigned __int8)a4) != 0)),
                  v12 & (a4 >> 3),
                  (__int64 *)&v25);
          if ( v14 < 0 )
          {
            switch ( v14 )
            {
              case -1073741618:
                v21 = 16;
                break;
              case -1073741670:
                v21 = 17;
                break;
              case -1072037882:
                v21 = 18;
                break;
              case -1073741791:
                v21 = 19;
                break;
              default:
                v21 = (v14 != -1073741661) + 20;
                break;
            }
          }
          v15 = v25;
          if ( v25 && a5 )
            PfSnLogIdentifier((__int64)v25, a5);
        }
        else
        {
          v15 = v25;
        }
        if ( (v9 & 2) != 0 )
        {
          v16 = a4 | 0x10;
          if ( (v13[208] & 3) == 0 )
            v16 = a4;
          v17 = PfSnPrefetchScenario(v13, v16);
          P = 0LL;
          v13 = 0LL;
          if ( v17 >= 0 )
            LOBYTE(v12) = 0;
        }
        started = 0;
        if ( !(_BYTE)v12 )
          goto LABEL_22;
        goto LABEL_30;
      }
      v9 &= ~2u;
      v22 = 10;
    }
    v13 = P;
    goto LABEL_9;
  }
  v21 = v11 + 1;
  started = -1073741631;
  v22 = v11 + 1;
LABEL_30:
  _InterlockedDecrement(&dword_140C6A2F0);
  v13 = P;
  v15 = v25;
LABEL_22:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v15 )
  {
    started = PfSnStartTraceTimer(v15);
    ExReleaseRundownProtection_0(v15 + 45);
  }
  v8 = a2;
  v7 = a3;
LABEL_27:
  PfSnLogScenarioDecision((ULONG_PTR)a1, (const size_t *)v8, v7, v9, v21, v22, v23, v10);
  *(_BYTE *)(CurrentThread + 562) = v20;
  return started;
}

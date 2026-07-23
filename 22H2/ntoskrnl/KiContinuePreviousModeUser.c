/*
 * XREFs of KiContinuePreviousModeUser @ 0x14033FA10
 * Callers:
 *     KiContinueEx @ 0x14033F6D0 (KiContinueEx.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x14031F250 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpValidateContextFlags @ 0x14033FD40 (RtlpValidateContextFlags.c)
 *     RtlInitializeExtendedContext2 @ 0x14033FFD0 (RtlInitializeExtendedContext2.c)
 *     KiVerifyContextRecord @ 0x140340180 (KiVerifyContextRecord.c)
 *     RtlLocateExtendedFeature2 @ 0x140380F40 (RtlLocateExtendedFeature2.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x1403FD6A0 (KeContextToKframes.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     memset @ 0x140413800 (memset.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x140515F60 (KiVerifyContextXStateCetUEnabled.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x14067B4B8 (RtlGuardIsValidWow64StackPointer.c)
 *     RtlpReadExtendedContext @ 0x1406C0FC0 (RtlpReadExtendedContext.c)
 *     RtlGuardIsValidStackPointer @ 0x1406C14F0 (RtlGuardIsValidStackPointer.c)
 */

NTSTATUS __fastcall KiContinuePreviousModeUser(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // r13
  ULONG v7; // ebx
  NTSTATUS result; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  void *v14; // rsp
  int v15; // edx
  int v16; // ecx
  ULONG64 v17; // r9
  int v18; // r12d
  _QWORD *ExtendedFeature2; // r8
  _KPROCESS *Process; // rsi
  void *Teb; // r15
  int v22; // eax
  __int64 v23; // r10
  unsigned __int64 v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int16 v27; // cx
  __int64 v28; // [rsp+20h] [rbp-10h]
  int v29; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v30; // [rsp+34h] [rbp+4h]
  int v31; // [rsp+38h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+40h] [rbp+10h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp+18h] BYREF
  _BYTE v34[24]; // [rsp+50h] [rbp+20h] BYREF
  ULONG v35; // [rsp+68h] [rbp+38h]
  __int64 v36; // [rsp+70h] [rbp+40h]
  __int64 v37; // [rsp+78h] [rbp+48h]
  unsigned __int64 v38; // [rsp+C8h] [rbp+98h]

  v37 = a3;
  v36 = a2;
  v5 = 0LL;
  ContextEx = 0LL;
  v30 = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = *(_DWORD *)(a1 + 48);
  v35 = v7;
  if ( a4 <= 0xFF )
  {
    memset(v34, 0, sizeof(v34));
  }
  else
  {
    *(_OWORD *)v34 = *(_OWORD *)a4;
    *(_QWORD *)&v34[16] = *(_QWORD *)(a4 + 16);
    if ( (*(_DWORD *)&v34[4] & 0xFFFFFFFC) != 0 || *(_DWORD *)v34 >= 4u || *(_OWORD *)&v34[8] != 0LL )
      return -1073741811;
  }
  if ( ((v7 & 0x10000) == 0 || (v7 & 0x27FEFF80) != 0)
    && (v7 & 0x27FFFFA0) != 0x100000
    && (v7 & 0x7FFFFF0) != 0x200000
    && (v7 & 0x7FFFFE0) != 0x400000 )
  {
    goto LABEL_47;
  }
  if ( ((v7 & 0x100040) == 1048640 || (v7 & 0x10040) == 65600) && !MEMORY[0xFFFFF780000003D8] )
    return -1073741637;
  if ( (v7 & 0x100000) == 0 )
LABEL_47:
    v7 = v7 & 0xD800001F | 0x100000;
  v29 = 0;
  result = RtlpValidateContextFlags(v7, &v29);
  if ( result < 0 )
  {
    v12 = v30;
    goto LABEL_22;
  }
  if ( (v29 & 2) != 0 )
    v5 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
  v31 = 0;
  result = RtlpValidateContextFlags(v7, &v31);
  if ( result < 0 )
  {
    v12 = v30;
    goto LABEL_22;
  }
  v9 = 0;
  v10 = 0;
  if ( (v7 & 0x10000) != 0 )
  {
    v9 = 716;
    v10 = 4;
  }
  else
  {
    if ( (v7 & 0x100000) != 0 )
    {
      v9 = 1232;
    }
    else
    {
      if ( (v7 & 0x200000) != 0 )
      {
        v9 = 416;
        v10 = 8;
        goto LABEL_20;
      }
      if ( (v7 & 0x400000) == 0 )
        goto LABEL_20;
      v9 = 912;
    }
    v10 = 16;
  }
LABEL_20:
  v11 = v9 + 24;
  if ( (v31 & 2) != 0 )
  {
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      v5 &= MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL;
    v11 = (-v10 & (v10 + v11 - 1)) - v10 - 448 + RtlpGetEntireXStateAreaLength(v5);
  }
  v12 = v10 + v11 - 1;
  result = 0;
LABEL_22:
  if ( result < 0 )
    return result;
  v13 = v12 + 15LL;
  if ( v13 <= v12 )
    v13 = 0xFFFFFFFFFFFFFF0LL;
  v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
  memset(&v29, 0, v12);
  if ( ((v7 & 0x10000) == 0 || (v7 & 0x27FEFF80) != 0)
    && (v7 & 0x27FFFFA0) != 0x100000
    && (v7 & 0x7FFFFF0) != 0x200000
    && (v7 & 0x7FFFFE0) != 0x400000 )
  {
    v18 = -1073741811;
    result = -1073741811;
    goto LABEL_33;
  }
  LOBYTE(v16) = (v7 & 0x100040) != 1048640;
  if ( ((unsigned __int8)v16 & ((v7 & 0x10040) != 65600)) != 0 )
  {
    v22 = 0;
    goto LABEL_29;
  }
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v22 = 2;
LABEL_29:
    v17 = 0LL;
    if ( v22 )
      v17 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    result = RtlInitializeExtendedContext2((PCONTEXT)&v29, v7, &ContextEx, v17);
    goto LABEL_32;
  }
  result = -1073741637;
LABEL_32:
  v18 = -1073741811;
LABEL_33:
  if ( result >= 0 )
  {
    LOBYTE(v15) = 1;
    result = RtlpReadExtendedContext(v16, v15, (_DWORD)ContextEx, v7, a1, 0LL);
    if ( result >= 0 )
    {
      v33 = 0LL;
      if ( (*(_DWORD *)&v34[16] & 0x100040) == 0x100040 )
      {
        ExtendedFeature2 = (_QWORD *)RtlLocateExtendedFeature2(&STACK[0x500], 11LL, 0xFFFFF780000003D8uLL);
        if ( ExtendedFeature2 )
        {
          v23 = SLODWORD(STACK[0x510]);
          v24 = __readmsr(0x6A7u);
          v33 = v24;
          v25 = *(_QWORD *)((_BYTE *)&v29 + v23 + 1232) & 0x800LL;
          if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
          {
            if ( v25 )
            {
              result = KiVerifyContextXStateCetUEnabled(ExtendedFeature2, v24);
              if ( result < 0 )
                return result;
            }
            else
            {
              *(_QWORD *)((char *)&v29 + v23 + 1232) |= 0x800uLL;
              *ExtendedFeature2 = 1LL;
              ExtendedFeature2[1] = v24;
            }
          }
          else if ( v25 && (*ExtendedFeature2 || ExtendedFeature2[1]) )
          {
            return -1073740278;
          }
        }
      }
      Process = CurrentThread->Process;
      if ( ((*(_DWORD *)&Process->0 & 0x20) == 0
         || (*(_DWORD *)&v34[16] & 0x100001) != 0x100001
         || (Teb = CurrentThread->Teb, (unsigned int)RtlGuardIsValidStackPointer(v38, Teb))
         || (v26 = Process[1].AffinityPadding[10]) != 0
         && ((v27 = *(_WORD *)(v26 + 8), v27 == 332) || v27 == 452)
         && v38 < 0xFFFFFFFF
         && (unsigned int)RtlGuardIsValidWow64StackPointer((unsigned int)v38, Teb))
        && (v18 = KiVerifyContextRecord(
                    (_DWORD)CurrentThread,
                    (unsigned int)&v29,
                    (_DWORD)ExtendedFeature2,
                    (unsigned int)v34,
                    (__int64)&v33),
            v18 >= 0) )
      {
        LOBYTE(v28) = 1;
        KeContextToKframes(v37, v36, (unsigned int)&v29, v7, v28);
        return 0;
      }
      else
      {
        return v18;
      }
    }
  }
  return result;
}

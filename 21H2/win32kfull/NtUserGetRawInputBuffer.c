/*
 * XREFs of NtUserGetRawInputBuffer @ 0x1C01F6020
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidData @ 0x1C0003270 (FreeHidData.c)
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C00FA4E0 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     LeaveEditionCrit @ 0x1C011DF80 (LeaveEditionCrit.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputBuffer(char *a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 i; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // rsi
  unsigned int v17; // [rsp+20h] [rbp-A8h]
  unsigned int v18; // [rsp+24h] [rbp-A4h]
  unsigned int v19; // [rsp+38h] [rbp-90h]
  char *v20; // [rsp+50h] [rbp-78h]
  __int64 v21; // [rsp+68h] [rbp-60h]
  __int64 v22; // [rsp+70h] [rbp-58h]
  char v24; // [rsp+E0h] [rbp+18h] BYREF
  int v25; // [rsp+E8h] [rbp+20h]

  v18 = 0;
  v5 = 0;
  v17 = 0;
  v6 = -1;
  v25 = -1;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v24);
  if ( a3 != 24 )
  {
    UserSetLastError(87LL, v7);
    goto LABEL_30;
  }
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v10 = *v9;
  v19 = *v9;
  v11 = *(_QWORD *)(gptiCurrent + 432LL);
  v21 = v11;
  for ( i = *(_QWORD *)(v11 + 24); i; i = v13 )
  {
    v13 = *(_QWORD *)i;
    v22 = *(_QWORD *)i;
    if ( *(_DWORD *)(i + 24) == 255 )
    {
      v14 = HMValidateHandle(*(_QWORD *)(i + 40), 0x12u);
      v20 = (char *)v14;
      if ( v14 )
      {
        v5 = (*(_DWORD *)(v14 + 36) + 7) & 0xFFFFFFF8;
        if ( v5 + v18 <= v18 )
          goto LABEL_30;
        v15 = a1;
        if ( !a1 || v5 + v18 > v10 )
          goto LABEL_18;
        ProbeForWrite(a1, v5, 4u);
        memmove(a1, v20 + 32, *((unsigned int *)v20 + 9));
        ++v17;
        a1 += v5;
        v18 += v5;
        FreeHidData(v20);
        v11 = v21;
      }
      *(_DWORD *)(gptiCurrent + 568LL) = *(_DWORD *)(i + 48);
      if ( *(_QWORD *)(v11 + 80) == i )
        *(_QWORD *)(v11 + 80) = 0LL;
      DelQEntry(v11 + 24, i, 1);
      EtwTraceInputProcessDelay(gptiCurrent);
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 408LL) = (MEMORY[0xFFFFF78000000320]
                                                             * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v10 = v19;
      v13 = v22;
    }
  }
  v15 = a1;
LABEL_18:
  if ( !i && v15 )
    ClearWakeBit(gptiCurrent, 1024, 0);
  if ( v10 <= v5 )
  {
    if ( v15 )
    {
      UserSetLastError(122LL, v7);
      goto LABEL_27;
    }
  }
  else if ( v15 )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    v6 = v17;
    goto LABEL_30;
  }
  v6 = 0;
LABEL_27:
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  *a2 = v5;
LABEL_30:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v24, v7, v8);
  LeaveEditionCrit((__int64)&v24);
  return v6;
}

/*
 * XREFs of NtUserGetRawInputBuffer @ 0x1C01D3540
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidData @ 0x1C000E960 (FreeHidData.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C0017090 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     DelQEntry @ 0x1C01184CC (DelQEntry.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v21; // [rsp+20h] [rbp-A8h]
  unsigned int v22; // [rsp+24h] [rbp-A4h]
  unsigned int v23; // [rsp+38h] [rbp-90h]
  char *v24; // [rsp+50h] [rbp-78h]
  __int64 v25; // [rsp+68h] [rbp-60h]
  __int64 v26; // [rsp+70h] [rbp-58h]
  char v28; // [rsp+E0h] [rbp+18h] BYREF
  int v29; // [rsp+E8h] [rbp+20h]

  v22 = 0;
  v5 = 0;
  v21 = 0;
  v6 = -1;
  v29 = -1;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v28);
  if ( a3 != 24 )
  {
    UserSetLastError(87);
    goto LABEL_30;
  }
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v10 = *v9;
  v23 = *v9;
  v11 = *(_QWORD *)(gptiCurrent + 432LL);
  v25 = v11;
  for ( i = *(_QWORD *)(v11 + 24); i; i = v13 )
  {
    v13 = *(_QWORD *)i;
    v26 = *(_QWORD *)i;
    if ( *(_DWORD *)(i + 24) == 255 )
    {
      v14 = HMValidateHandle(*(_QWORD *)(i + 40), 0x12u);
      v24 = (char *)v14;
      if ( v14 )
      {
        v5 = (*(_DWORD *)(v14 + 36) + 7) & 0xFFFFFFF8;
        if ( v5 + v22 <= v22 )
          goto LABEL_30;
        v15 = a1;
        if ( !a1 || v5 + v22 > v10 )
          goto LABEL_18;
        ProbeForWrite(a1, v5, 4u);
        memmove(a1, v24 + 32, *((unsigned int *)v24 + 9));
        ++v21;
        a1 += v5;
        v22 += v5;
        FreeHidData(v24);
        v11 = v25;
      }
      *(_DWORD *)(gptiCurrent + 568LL) = *(_DWORD *)(i + 48);
      if ( *(_QWORD *)(v11 + 88) == i )
        *(_QWORD *)(v11 + 88) = 0LL;
      DelQEntry(v11 + 24, i, 1);
      EtwTraceInputProcessDelay(gptiCurrent);
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                             * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v10 = v23;
      v13 = v26;
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
      UserSetLastError(122);
      goto LABEL_27;
    }
  }
  else if ( v15 )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    v6 = v21;
    goto LABEL_30;
  }
  v6 = 0;
LABEL_27:
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  *a2 = v5;
LABEL_30:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v28, v7, v8);
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v6;
}

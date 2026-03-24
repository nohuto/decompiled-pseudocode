/*
 * XREFs of NtUserGetRawInputBuffer @ 0x1C01FB5C0
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidData @ 0x1C00065B0 (FreeHidData.c)
 *     DelQEntry @ 0x1C006684C (DelQEntry.c)
 *     HMValidateHandle @ 0x1C00670E0 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C1800 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     LeaveEditionCrit @ 0x1C0132930 (LeaveEditionCrit.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C0166DC8 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *i; // r14
  __int64 *v15; // rax
  __int64 v16; // rax
  char *v17; // rsi
  __int64 v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-C8h]
  unsigned int v21; // [rsp+24h] [rbp-C4h]
  unsigned int v22; // [rsp+30h] [rbp-B8h]
  __int64 v23; // [rsp+48h] [rbp-A0h]
  __int64 v24; // [rsp+60h] [rbp-88h]
  __int64 *v25; // [rsp+68h] [rbp-80h]
  _BYTE v26[32]; // [rsp+70h] [rbp-78h] BYREF
  char v27[88]; // [rsp+90h] [rbp-58h] BYREF

  v21 = 0;
  v5 = 0;
  v20 = 0;
  v6 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
  if ( a3 == 24 )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (unsigned int *)MmUserProbeAddress;
    v10 = *v9;
    v22 = *v9;
    v11 = *(_QWORD *)(gptiCurrent + 432LL);
    v24 = v11;
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v27, v11);
    for ( i = *(__int64 **)(v11 + 24); i; i = v15 )
    {
      v15 = (__int64 *)*i;
      v25 = (__int64 *)*i;
      if ( *((_DWORD *)i + 6) == 255 )
      {
        v16 = HMValidateHandle(i[5], 0x12u);
        v23 = v16;
        if ( v16 )
        {
          v5 = (*(_DWORD *)(v16 + 36) + 7) & 0xFFFFFFF8;
          if ( v5 + v21 <= v21 )
            goto LABEL_29;
          v17 = a1;
          if ( !a1 || v5 + v21 > v10 )
            goto LABEL_18;
          ProbeForWrite(a1, v5, 4u);
          memmove(a1, (const void *)(v23 + 32), *(unsigned int *)(v23 + 36));
          ++v20;
          a1 += v5;
          v21 += v5;
          FreeHidData(v23);
          v11 = v24;
        }
        *(_DWORD *)(gptiCurrent + 568LL) = *((_DWORD *)i + 12);
        if ( *(__int64 **)(v11 + 80) == i )
          *(_QWORD *)(v11 + 80) = 0LL;
        DelQEntry((unsigned int **)(v11 + 24), (unsigned int *)i, 1);
        EtwTraceInputProcessDelay(gptiCurrent);
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                               * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v10 = v22;
        v15 = v25;
      }
    }
    v17 = a1;
LABEL_18:
    if ( !i && v17 )
      ClearWakeBit(gptiCurrent, 1024, 0);
    if ( v10 <= v5 )
    {
      if ( v17 )
        UserSetLastError(122LL, v12, v13);
    }
    else if ( v17 )
    {
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 12LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      v6 = v20;
      goto LABEL_29;
    }
    v6 = -(v17 != 0LL);
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    *a2 = v5;
  }
  else
  {
    UserSetLastError(87LL, v7, v8);
  }
LABEL_29:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v26);
  LeaveEditionCrit(v18);
  return v6;
}

__int64 __fastcall NtUserGetRawInputBuffer(char *a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  unsigned int *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 i; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rsi
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-A8h]
  unsigned int v17; // [rsp+24h] [rbp-A4h]
  unsigned int v18; // [rsp+38h] [rbp-90h]
  char *v19; // [rsp+50h] [rbp-78h]
  __int64 v20; // [rsp+68h] [rbp-60h]
  __int64 v21; // [rsp+70h] [rbp-58h]
  char v23; // [rsp+E0h] [rbp+18h] BYREF
  int v24; // [rsp+E8h] [rbp+20h]

  v17 = 0;
  v5 = 0;
  v16 = 0;
  v6 = -1;
  v24 = -1;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v23);
  if ( a3 != 24 )
  {
    UserSetLastError(87);
    goto LABEL_30;
  }
  v7 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v7 = (unsigned int *)MmUserProbeAddress;
  v8 = *v7;
  v18 = *v7;
  v9 = *(_QWORD *)(gptiCurrent + 432LL);
  v20 = v9;
  for ( i = *(_QWORD *)(v9 + 24); i; i = v11 )
  {
    v11 = *(_QWORD *)i;
    v21 = *(_QWORD *)i;
    if ( *(_DWORD *)(i + 24) == 255 )
    {
      v12 = HMValidateHandle(*(_QWORD *)(i + 40), 0x12u);
      v19 = (char *)v12;
      if ( v12 )
      {
        v5 = (*(_DWORD *)(v12 + 36) + 7) & 0xFFFFFFF8;
        if ( v5 + v17 <= v17 )
          goto LABEL_30;
        v13 = a1;
        if ( !a1 || v5 + v17 > v8 )
          goto LABEL_18;
        ProbeForWrite(a1, v5, 4u);
        memmove(a1, v19 + 32, *((unsigned int *)v19 + 9));
        ++v16;
        a1 += v5;
        v17 += v5;
        FreeHidData(v19);
        v9 = v20;
      }
      *(_DWORD *)(gptiCurrent + 568LL) = *(_DWORD *)(i + 48);
      if ( *(_QWORD *)(v9 + 88) == i )
        *(_QWORD *)(v9 + 88) = 0LL;
      DelQEntry(v9 + 24, i, 1);
      EtwTraceInputProcessDelay(gptiCurrent);
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                             * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v8 = v18;
      v11 = v21;
    }
  }
  v13 = a1;
LABEL_18:
  if ( !i && v13 )
    ClearWakeBit(gptiCurrent, 1024, 0);
  if ( v8 <= v5 )
  {
    if ( v13 )
    {
      UserSetLastError(122);
      goto LABEL_27;
    }
  }
  else if ( v13 )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    v6 = v16;
    goto LABEL_30;
  }
  v6 = 0;
LABEL_27:
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  *a2 = v5;
LABEL_30:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v23);
  UserSessionSwitchLeaveCrit(v14);
  return v6;
}

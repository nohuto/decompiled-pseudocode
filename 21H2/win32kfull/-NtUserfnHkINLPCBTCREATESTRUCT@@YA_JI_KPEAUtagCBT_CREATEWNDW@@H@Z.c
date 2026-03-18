/*
 * XREFs of ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01F0AA8
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C01406C0 (NtUserCallNextHookEx.c)
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C00E89FC (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C00E8A3C (RtlInitLargeAnsiString.c)
 *     xxxCallNextHookEx @ 0x1C00EA54C (xxxCallNextHookEx.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserfnHkINLPCBTCREATESTRUCT(
        unsigned int a1,
        unsigned __int64 a2,
        struct tagCBT_CREATEWNDW *a3,
        int a4)
{
  struct tagCBT_CREATEWNDW *v8; // rcx
  _BYTE *v9; // rcx
  _DWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v16; // [rsp+20h] [rbp-A8h]
  __int64 v17[3]; // [rsp+28h] [rbp-A0h] BYREF
  _OWORD v18[8]; // [rsp+40h] [rbp-88h] BYREF

  *(_OWORD *)v17 = 0LL;
  memset(v18, 0, 0x70uLL);
  v8 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v8 = (struct tagCBT_CREATEWNDW *)MmUserProbeAddress;
  *(_OWORD *)v17 = *(_OWORD *)v8;
  v9 = (_BYTE *)v17[0];
  if ( v17[0] >= MmUserProbeAddress )
    v9 = (_BYTE *)MmUserProbeAddress;
  *v9 = *v9;
  v9[79] = v9[79];
  v10 = (_DWORD *)v17[0];
  v16 = v17[0];
  v18[0] = *(_OWORD *)v17[0];
  v18[1] = *(_OWORD *)(v17[0] + 16);
  v18[2] = *(_OWORD *)(v17[0] + 32);
  v18[3] = *(_OWORD *)(v17[0] + 48);
  v18[4] = *(_OWORD *)(v17[0] + 64);
  v17[0] = (__int64)v18;
  v11 = *((_QWORD *)&v18[3] + 1);
  if ( !a4 )
  {
    if ( *((_QWORD *)&v18[3] + 1) )
    {
      if ( (BYTE8(v18[3]) & 1) != 0 )
        goto LABEL_18;
      v11 = *((_QWORD *)&v18[3] + 1);
      v10 = (_DWORD *)v16;
    }
    RtlInitLargeUnicodeString((__int64)&v18[5], v11);
    v13 = *(_QWORD *)&v18[4];
    if ( (*(_QWORD *)&v18[4] & 0xFFFFFFFFFFFF0000uLL) == 0 )
      goto LABEL_21;
    if ( *(_QWORD *)&v18[4] )
    {
      if ( (v18[4] & 1) != 0 )
LABEL_18:
        ExRaiseDatatypeMisalignment();
      v13 = *(_QWORD *)&v18[4];
      v10 = (_DWORD *)v16;
    }
    RtlInitLargeUnicodeString((__int64)&v18[6], v13);
    goto LABEL_21;
  }
  if ( *((_QWORD *)&v18[3] + 1) )
  {
    v11 = *((_QWORD *)&v18[3] + 1);
    v10 = (_DWORD *)v16;
  }
  RtlInitLargeAnsiString((__int64)&v18[5], v11);
  v12 = *(_QWORD *)&v18[4];
  if ( (*(_QWORD *)&v18[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( *(_QWORD *)&v18[4] )
    {
      v12 = *(_QWORD *)&v18[4];
      v10 = (_DWORD *)v16;
    }
    RtlInitLargeAnsiString((__int64)&v18[6], v12);
  }
LABEL_21:
  v14 = xxxCallNextHookEx(a1, a2, (__int64)v17);
  *((_QWORD *)a3 + 1) = v17[1];
  v10[11] = *(_DWORD *)(v17[0] + 44);
  v10[10] = *(_DWORD *)(v17[0] + 40);
  v10[9] = *(_DWORD *)(v17[0] + 36);
  v10[8] = *(_DWORD *)(v17[0] + 32);
  return v14;
}

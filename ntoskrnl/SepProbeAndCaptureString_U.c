/*
 * XREFs of SepProbeAndCaptureString_U @ 0x140698634
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1407742A0 (NtCloseObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140788B50 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140790670 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140843210 (NtPrivilegeObjectAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1409CB0D0 (NtDeleteObjectAuditAlarm.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepProbeAndCaptureString_U(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edi
  const void *v5; // rsi
  unsigned __int64 v6; // rcx
  _WORD *Pool2; // rax
  unsigned int v9; // [rsp+24h] [rbp-34h]

  *(_QWORD *)a2 = 0LL;
  v9 = 0;
  v3 = 0x7FFFFFFF0000LL;
  if ( a1 < 0x7FFFFFFF0000LL )
    v3 = a1;
  v4 = *(_DWORD *)v3;
  v5 = *(const void **)(v3 + 8);
  if ( (unsigned __int16)*(_DWORD *)v3 )
  {
    if ( ((unsigned __int8)v5 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (unsigned __int64)v5 + (unsigned __int16)v4;
    if ( v6 > 0x7FFFFFFF0000LL || v6 < (unsigned __int64)v5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( (v4 & 1) != 0 || (unsigned __int16)v4 == 65534 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, (unsigned __int16)v4 + 16LL, 1934976339LL);
    *(_QWORD *)a2 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v4;
      *(_WORD *)(*(_QWORD *)a2 + 2LL) = v4;
      *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)a2 + 16LL;
      if ( (_WORD)v4 )
        memmove(*(void **)(*(_QWORD *)a2 + 8LL), v5, (unsigned __int16)v4);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v9;
}

/*
 * XREFs of SepProbeAndCaptureString_U @ 0x1406934F8
 * Callers:
 *     NtCloseObjectAuditAlarm @ 0x1405FFA50 (NtCloseObjectAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140606BE0 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140616B80 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtDeleteObjectAuditAlarm @ 0x140734D80 (NtDeleteObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14078BBE0 (NtPrivilegeObjectAuditAlarm.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepProbeAndCaptureString_U(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edi
  const void *v5; // rsi
  unsigned __int64 v6; // rcx
  _WORD *PoolWithTag; // rax
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
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v4 + 16LL, 0x73556553u);
    *(_QWORD *)a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = v4;
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

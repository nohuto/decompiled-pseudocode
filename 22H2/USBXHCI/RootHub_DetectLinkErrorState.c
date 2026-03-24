/*
 * XREFs of RootHub_DetectLinkErrorState @ 0x1C001A2AC
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009E10 (Controller_WdfEvtWatchdogTimerFunc.c)
 * Callees:
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011EE0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013DD0 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_DetectPortInComplianceMode @ 0x1C001A3A8 (RootHub_DetectPortInComplianceMode.c)
 *     RootHub_DetectPortInInactiveState @ 0x1C001A4D8 (RootHub_DetectPortInInactiveState.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RootHub_DetectLinkErrorState(__int64 a1, __int64 a2, int a3, int a4)
{
  char v4; // r14
  unsigned int v5; // r15d
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v9; // rbp
  unsigned int v10; // r13d
  __int64 v11; // r12
  __int64 v12; // rsi
  unsigned int *v13; // r12
  int v14; // r8d
  int v15; // r9d
  int Ulong; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h]

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = 1;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v17 = result;
  if ( v5 )
  {
    do
    {
      v9 = *(_QWORD *)(a1 + 48);
      v10 = v6 - 1;
      v11 = v6 - 1;
      v12 = 112 * v11;
      if ( *(_BYTE *)(112 * v11 + v9 + 13) != 2 )
      {
        v13 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16 * v11);
        RootHub_AcquireReadModifyWriteLock(a1, v10, a3, a4);
        Ulong = XilRegister_ReadUlong(v17, v13);
        RootHub_ReleaseReadModifyWriteLock(a1, v10, v14, v15);
        if ( (unsigned __int8)RootHub_DetectPortInComplianceMode(a1, v6, &Ulong)
          || (result = RootHub_DetectPortInInactiveState(a1, v6, &Ulong), (_BYTE)result) )
        {
          v4 = 1;
          result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v12 + v9 + 100), 1);
          *(_BYTE *)(v12 + v9 + 104) = 1;
        }
      }
      ++v6;
    }
    while ( v6 <= v5 );
    if ( v4 == 1 )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C00617B0)(UcxDriverGlobals, *(_QWORD *)a1);
  }
  return result;
}

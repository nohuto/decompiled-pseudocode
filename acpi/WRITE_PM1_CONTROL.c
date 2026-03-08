/*
 * XREFs of WRITE_PM1_CONTROL @ 0x1C0038F24
 * Callers:
 *     ACPIEnableInitializeACPI @ 0x1C00368F0 (ACPIEnableInitializeACPI.c)
 *     ACPIReleaseHardwareGlobalLock @ 0x1C00394BC (ACPIReleaseHardwareGlobalLock.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WRITE_PM1_CONTROL(__int16 a1, char a2)
{
  int (__fastcall *v2)(__int64); // rax
  __int64 result; // rax
  __int16 *v4; // r8
  __int16 v5; // [rsp+40h] [rbp+10h] BYREF
  __int16 v6; // [rsp+48h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0;
  v2 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
  if ( a2 )
  {
    if ( v2(1LL) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
        1LL,
        0LL,
        &v5,
        2LL,
        0LL);
    result = (*(__int64 (__fastcall **)(__int64))(PmHalDispatchTable + 120))(4LL);
    if ( (int)result >= 0 )
    {
      v4 = &v5;
      return (*(__int64 (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
               4LL,
               0LL,
               v4,
               2LL,
               0LL);
    }
  }
  else
  {
    if ( v2(1LL) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
        1LL,
        0LL,
        &v6,
        2LL,
        0LL);
      v6 |= v5;
      (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
        1LL,
        0LL,
        &v6,
        2LL,
        0LL);
    }
    result = (*(__int64 (__fastcall **)(__int64))(PmHalDispatchTable + 120))(4LL);
    if ( (int)result >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
        4LL,
        0LL,
        &v6,
        2LL,
        0LL);
      v4 = &v6;
      v6 |= v5;
      return (*(__int64 (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
               4LL,
               0LL,
               v4,
               2LL,
               0LL);
    }
  }
  return result;
}

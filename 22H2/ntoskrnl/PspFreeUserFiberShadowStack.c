/*
 * XREFs of PspFreeUserFiberShadowStack @ 0x1409B1208
 * Callers:
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     KiDispatchException @ 0x14030CAC0 (KiDispatchException.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14041AB00 (ZwQueryVirtualMemory.c)
 *     memset @ 0x140435400 (memset.c)
 *     MmUpdateUserShadowStackValue @ 0x1406467F0 (MmUpdateUserShadowStackValue.c)
 *     MmFreeVirtualMemory @ 0x1407455D0 (MmFreeVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspFreeUserFiberShadowStack(PVOID BaseAddress)
{
  int updated; // edi
  _QWORD *InitialStack; // rdx
  _QWORD *i; // r8
  __int64 v6; // [rsp+30h] [rbp-F8h] BYREF
  _OWORD MemoryInformation[3]; // [rsp+38h] [rbp-F0h] BYREF
  ULONG_PTR v8[20]; // [rsp+70h] [rbp-B8h] BYREF

  memset(v8, 0, 0x98uLL);
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  v6 = 0LL;
  if ( ((unsigned __int8)BaseAddress & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  updated = MmUpdateUserShadowStackValue(
              (unsigned __int64)BaseAddress,
              ((unsigned __int64)BaseAddress + 8) & 0xFFFFFFFFFFFFFFFCuLL | 1);
  if ( updated >= 0 )
  {
    updated = ZwQueryVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                BaseAddress,
                (MEMORY_INFORMATION_CLASS)3,
                MemoryInformation,
                0x30uLL,
                0LL);
    if ( updated >= 0 )
      updated = MmFreeVirtualMemory(
                  0xFFFFFFFFFFFFFFFFuLL,
                  (unsigned __int64 *)MemoryInformation,
                  &v6,
                  0x8000,
                  0,
                  0x40000000);
  }
  if ( updated < 0 )
  {
    v8[2] = 0LL;
    v8[0] = 0x1C0000409LL;
    LODWORD(v8[3]) = 1;
    v8[1] = 0LL;
    v8[4] = updated;
    InitialStack = KeGetCurrentThread()->InitialStack;
    for ( i = InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    if ( (InitialStack[1] & 1LL) != 0 )
    {
      do
        InitialStack = (_QWORD *)InitialStack[5];
      while ( (InitialStack[1] & 1) != 0 );
    }
    KiDispatchException((NTSTATUS *)v8, (__int64)(InitialStack - 90), (__int64)(i - 50), 1u, 0);
  }
  return (unsigned int)updated;
}

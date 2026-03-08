/*
 * XREFs of rimHidP_GetUsages @ 0x1C00EFB14
 * Callers:
 *     rimExtractButtonPageButtonUsages @ 0x1C00F1382 (rimExtractButtonPageButtonUsages.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C01D6EB4 (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractPointerDeviceUsages @ 0x1C01D78A0 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall rimHidP_GetUsages(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  unsigned __int16 v9; // di
  unsigned __int16 v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax

  v9 = a3;
  v10 = a2;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 120) )
    return 3221225659LL;
  v15 = SGDGetUserSessionState(v12, v11, v13, v14);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64, __int64, int))(v15 + 120))(
           0LL,
           v10,
           v9,
           a4,
           a5,
           a6,
           a7,
           a8);
}

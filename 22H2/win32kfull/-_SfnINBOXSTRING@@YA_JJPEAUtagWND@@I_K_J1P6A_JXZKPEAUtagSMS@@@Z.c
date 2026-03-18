/*
 * XREFs of ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C02239BC
 * Callers:
 *     SfnINCBOXSTRING @ 0x1C0157550 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x1C01575B0 (SfnINLBOXSTRING.c)
 * Callees:
 *     SfnINSTRINGNULL @ 0x1C0023340 (SfnINSTRINGNULL.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     SfnDWORD @ 0x1C0123CE0 (SfnDWORD.c)
 *     SfnINSTRING @ 0x1C020D030 (SfnINSTRING.c)
 */

unsigned __int8 *__fastcall _SfnINBOXSTRING(
        int a1,
        struct tagWND *a2,
        unsigned int a3,
        ULONG_PTR a4,
        int *a5,
        unsigned __int64 a6,
        __int64 (*a7)(void),
        char a8)
{
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  int v19; // eax

  if ( a2 )
    v12 = *(_QWORD *)a2;
  else
    LODWORD(v12) = 0;
  if ( !HMValidateHandleNoSecure(v12, 1) )
    return 0LL;
  v17 = *((_DWORD *)PtiCurrentShared(v14, v13, v15, v16) + 363);
  if ( v17 == 1 )
    return (unsigned __int8 *)SfnDWORD((__int64 *)a2, a3, a4, (__int64)a5, a6, (__int64)a7);
  if ( v17 != 2 )
    return 0LL;
  v19 = 399;
  if ( a1 != 678 )
    v19 = 332;
  if ( a3 == v19 )
    return (unsigned __int8 *)SfnINSTRINGNULL((__int64 *)a2, a3, a4, a5, a6, (__int64)a7, a8);
  else
    return SfnINSTRING((__int64 *)a2, a3, a4, a5, a6, (__int64)a7, a8);
}

/*
 * XREFs of ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C02266CC
 * Callers:
 *     SfnINCBOXSTRING @ 0x1C014A830 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x1C014A890 (SfnINLBOXSTRING.c)
 * Callees:
 *     SfnINSTRINGNULL @ 0x1C0034A70 (SfnINSTRINGNULL.c)
 *     SfnDWORD @ 0x1C00385D0 (SfnDWORD.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     SfnINSTRING @ 0x1C020FC00 (SfnINSTRING.c)
 */

unsigned __int8 *__fastcall _SfnINBOXSTRING(
        int a1,
        struct tagWND *a2,
        int a3,
        ULONG_PTR a4,
        int *a5,
        unsigned __int64 a6,
        __int64 (*a7)(void),
        char a8)
{
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  int v16; // eax

  if ( a2 )
    v12 = *(_QWORD *)a2;
  else
    LODWORD(v12) = 0;
  if ( !HMValidateHandleNoSecure(v12, 1) )
    return 0LL;
  v14 = *((_DWORD *)PtiCurrentShared(v13) + 363);
  if ( v14 == 1 )
    return (unsigned __int8 *)SfnDWORD((__int64 *)a2, a3, a4, (__int64)a5, a6, (__int64)a7);
  if ( v14 != 2 )
    return 0LL;
  v16 = 399;
  if ( a1 != 678 )
    v16 = 332;
  if ( a3 == v16 )
    return (unsigned __int8 *)SfnINSTRINGNULL((__int64 *)a2, a3, a4, a5, a6, (__int64)a7, a8);
  else
    return SfnINSTRING((__int64 *)a2, a3, a4, a5, a6, (__int64)a7, a8);
}

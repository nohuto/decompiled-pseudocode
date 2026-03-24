/*
 * XREFs of ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C011EA8C
 * Callers:
 *     SfnINLBOXSTRING @ 0x1C011EA30 (SfnINLBOXSTRING.c)
 *     SfnINCBOXSTRING @ 0x1C0160890 (SfnINCBOXSTRING.c)
 * Callees:
 *     SfnINSTRINGNULL @ 0x1C004FDF0 (SfnINSTRINGNULL.c)
 *     SfnDWORD @ 0x1C006B320 (SfnDWORD.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     SfnINSTRING @ 0x1C011EB70 (SfnINSTRING.c)
 */

__int64 __fastcall _SfnINBOXSTRING(
        int a1,
        struct tagWND *a2,
        int a3,
        __int64 a4,
        int *a5,
        unsigned __int64 a6,
        __int64 (*a7)(void),
        unsigned int a8)
{
  unsigned __int64 v12; // rcx
  int v13; // eax
  int v14; // eax

  if ( a2 )
    v12 = *(_QWORD *)a2;
  else
    v12 = 0LL;
  if ( !HMValidateHandleNoSecure(v12, 1) )
    return 0LL;
  v13 = *(_DWORD *)(gptiCurrent + 1412LL);
  if ( v13 == 1 )
    return SfnDWORD((__int64 *)a2, a3, a4, (__int64)a5, a6, (__int64)a7);
  if ( v13 != 2 )
    return 0LL;
  v14 = 399;
  if ( a1 != 678 )
    v14 = 332;
  if ( a3 == v14 )
    return SfnINSTRINGNULL((__int64 *)a2, a3, a4, a5, a6, (__int64)a7, a8);
  else
    return SfnINSTRING((_DWORD)a2, a3, a4, (_DWORD)a5, a6, (__int64)a7, a8);
}

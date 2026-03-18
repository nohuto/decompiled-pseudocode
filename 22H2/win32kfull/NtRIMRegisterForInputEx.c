/*
 * XREFs of NtRIMRegisterForInputEx @ 0x1C00B6750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtRIMRegisterForInputEx(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx

  EnterCrit(1LL, 0LL);
  if ( (unsigned int)RIMIsCurrentProcessTrusted() )
    v18 = RIMRegisterForInputWithCallbacks(
            a1,
            a2,
            a3,
            a4,
            gpWin32kDriverObject,
            a5,
            a6,
            a7,
            a8,
            Win32kRIMDevChangeCallback,
            a9,
            1,
            a10);
  else
    v18 = -1073741790;
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v18;
}

/*
 * XREFs of EtwRegisterClassicProvider @ 0x140796FC0
 * Callers:
 *     WmipProcessLegacyEtwRegister @ 0x14084DA68 (WmipProcessLegacyEtwRegister.c)
 * Callees:
 *     EtwpRegisterKMProvider @ 0x140690D64 (EtwpRegisterKMProvider.c)
 */

__int64 __fastcall EtwRegisterClassicProvider(
        _QWORD *a1,
        __int64 a2,
        void (__fastcall *a3)(ULONG_PTR, __int64, __int64 *, __int64),
        __int64 a4,
        __int128 **a5)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 )
    return EtwpRegisterKMProvider(EtwpHostSiloState, a1, 2, a3, a4, retaddr, a5);
  else
    return 3221225485LL;
}

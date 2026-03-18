/*
 * XREFs of BgkInitialize @ 0x140B9E198
 * Callers:
 *     InbvDriverInitialize @ 0x140B52524 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x140387468 (BgkpTryEnableConsole.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     BgLibraryInitialize @ 0x140AEF53C (BgLibraryInitialize.c)
 *     BgConsoleGetInterface @ 0x140AEF5AC (BgConsoleGetInterface.c)
 *     BgkDestroy @ 0x140AEFA28 (BgkDestroy.c)
 *     BgkpLockBgfxCodeSection @ 0x140AF0550 (BgkpLockBgfxCodeSection.c)
 */

__int64 __fastcall BgkInitialize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 (__fastcall **Interface)(); // rax
  int v6; // eax
  int v7; // ecx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  if ( !a1 )
    return 3221225473LL;
  if ( a2 == 1 )
    return byte_140C6AC88 == 0 ? 0xC0000001 : 0;
  if ( !a2 )
  {
    BgkDestroy();
    qword_140C70D20 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 288LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      Interface = BgConsoleGetInterface();
      qword_140C6AC68 = (__int64)Interface;
      if ( Interface )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))*Interface)(
          (unsigned int)InitConsoleFlags,
          4291217094LL,
          (unsigned int)dword_140D18498,
          0LL);
      v6 = ((__int64 (__fastcall *)(__int64, __int64, int *, int *))off_140C020E8[0])(9LL, 4LL, &dword_140D12F60, &v8);
      v7 = dword_140D12F60;
      if ( v6 < 0 )
        v7 = 2;
      dword_140D12F60 = v7;
    }
    byte_140C6AC88 = 1;
    byte_140C6AC8A = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}

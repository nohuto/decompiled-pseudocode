/*
 * XREFs of FsRtlpRegisterUncProvider @ 0x14084EEE8
 * Callers:
 *     FsRtlRegisterUncProviderEx2 @ 0x14084EEC0 (FsRtlRegisterUncProviderEx2.c)
 *     FsRtlRegisterUncProvider @ 0x14093ABE0 (FsRtlRegisterUncProvider.c)
 *     FsRtlRegisterUncProviderEx @ 0x14093AC20 (FsRtlRegisterUncProviderEx.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140292210 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     FsRtlpOpenDev @ 0x14084EFE0 (FsRtlpOpenDev.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14084F0A8 (FsRtlpRegisterProviderWithMUP.c)
 */

__int64 __fastcall FsRtlpRegisterUncProvider(__int64 a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  int v5; // esi
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  Handle = (HANDLE)-1LL;
  if ( a1 && *(_QWORD *)(a1 + 8) && *(_WORD *)a1 && *(_WORD *)(a1 + 2) && (*(_WORD *)(a3 + 2) < 0x101u || a2) )
  {
    KeWaitForSingleObject(&FsRtlpUncSemaphore, Executive, 0, 0, 0LL);
    v5 = FsRtlpOpenDev(&Handle);
    if ( v5 < 0 || (v5 = FsRtlpRegisterProviderWithMUP(Handle), v5 < 0) )
    {
      if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        ZwClose(Handle);
      *a4 = (HANDLE)-1LL;
    }
    else
    {
      ++FsRtlpRedirs;
      *a4 = Handle;
    }
    KeReleaseSemaphore(&FsRtlpUncSemaphore, 0, 1, 0);
    return (unsigned int)v5;
  }
  else
  {
    *a4 = (HANDLE)-1LL;
    return 3221225485LL;
  }
}

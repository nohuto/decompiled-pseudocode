/*
 * XREFs of PopLazySensorActiveInput @ 0x1408F5204
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405D8DC4 (PopSessionWinlogonNotification.c)
 * Callees:
 *     MmGetSessionById @ 0x1402063D0 (MmGetSessionById.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     MmDetachSession @ 0x1402EC090 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402EC130 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PopConsoleSessionActiveInput @ 0x140772AD4 (PopConsoleSessionActiveInput.c)
 */

__int64 __fastcall PopLazySensorActiveInput(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // esi
  __int64 result; // rax
  struct _DMA_ADAPTER *v5; // rdi
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v7[3]; // [rsp+28h] [rbp-40h] BYREF

  BYTE2(qword_140C205D0) = 1;
  v2 = 0;
  HIDWORD(qword_140C205D0) = 10;
  memset(v7, 0, sizeof(v7));
  v6 = 0LL;
  v3 = a1;
  result = MmGetSessionById(a1, a2);
  v5 = (struct _DMA_ADAPTER *)result;
  if ( result )
  {
    if ( (int)MmAttachSession((_KPROCESS *)result, (__int64)v7) >= 0 )
    {
      PopConsoleSessionActiveInput(
        v3,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        (int *)&v6);
      MmDetachSession((__int64)v5, (__int64)v7);
      v2 = v6;
    }
    HalPutDmaAdapter(v5);
    result = HIDWORD(v6);
    HIDWORD(PopLazyContext) = HIDWORD(v6);
    LOWORD(qword_140C205D0) = 257;
    DWORD2(PopLazyContext) = v2;
  }
  return result;
}

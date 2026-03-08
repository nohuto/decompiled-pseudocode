/*
 * XREFs of KiStartDpcThread @ 0x14080F080
 * Callers:
 *     KiInitializeDynamicProcessor @ 0x140A9C1F8 (KiInitializeDynamicProcessor.c)
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1407DE330 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall KiStartDpcThread(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebx
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  __int128 v5; // [rsp+58h] [rbp-20h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 208);
  Handle = 0LL;
  v5 = 0LL;
  WORD4(v5) = v1;
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 200);
  v2 = PsCreateSystemThreadEx(
         (__int64)&Handle,
         0x1FFFFF,
         0LL,
         0LL,
         0LL,
         (__int64)KiExecuteDpc,
         a1,
         &v5,
         (_DWORD *)(a1 + 36));
  if ( Handle )
    ZwClose(Handle);
  return v2;
}

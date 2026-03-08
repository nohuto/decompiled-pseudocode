/*
 * XREFs of MiDemoteSlabEntries @ 0x1406541E4
 * Callers:
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 * Callees:
 *     KiClearSystemPriority @ 0x1402DAA90 (KiClearSystemPriority.c)
 *     KiSetSystemPriorityThread @ 0x1402E9F30 (KiSetSystemPriorityThread.c)
 *     KeGenericCallDpcEx @ 0x1403C07D0 (KeGenericCallDpcEx.c)
 *     MiLogSlabEntriesDemote @ 0x1403D0FE0 (MiLogSlabEntriesDemote.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

unsigned __int64 __fastcall MiDemoteSlabEntries(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 result; // rax
  char v4[16]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 *v5[12]; // [rsp+30h] [rbp-78h] BYREF

  if ( *(_QWORD *)(a1 + 17864) )
  {
    CurrentThread = KeGetCurrentThread();
    KiSetSystemPriorityThread((ULONG_PTR)CurrentThread, 30, 0);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16232), 1, 0) )
    {
      *(_DWORD *)v4 = 30;
      return KiClearSystemPriority((ULONG_PTR)CurrentThread, v4);
    }
    else
    {
      memset(v5, 0, 0x58uLL);
      v5[10] = (unsigned __int16 *)-1LL;
      v5[0] = (unsigned __int16 *)a1;
      KeGenericCallDpcEx((__int64)MiDemoteSlabEntriesDpc, (__int64)v5);
      _InterlockedExchange((volatile __int32 *)(a1 + 16232), 0);
      *(_DWORD *)v4 = 30;
      KiClearSystemPriority((ULONG_PTR)CurrentThread, v4);
      return MiLogSlabEntriesDemote(v5);
    }
  }
  return result;
}

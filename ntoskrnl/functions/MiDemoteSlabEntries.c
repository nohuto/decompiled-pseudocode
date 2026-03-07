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

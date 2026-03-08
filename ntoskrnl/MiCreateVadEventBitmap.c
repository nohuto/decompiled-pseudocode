/*
 * XREFs of MiCreateVadEventBitmap @ 0x140756324
 * Callers:
 *     MiCreateWriteWatchView @ 0x140755EB4 (MiCreateWriteWatchView.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140756084 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x14034C254 (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14034CCC0 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateVadEventBitmap(struct _KPROCESS *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  SIZE_T v8; // rdi
  char *Pool; // rbx
  int v10; // edi

  v8 = 8 * ((a3 >> 6) + ((a3 & 0x3F) != 0) + 9LL);
  Pool = (char *)MiAllocatePool(64, v8, 0x77776D4Du);
  if ( !Pool )
    return 3221225626LL;
  v10 = PsChargeProcessNonPagedPoolQuota(a1, v8);
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(Pool, 0);
    return (unsigned int)v10;
  }
  else
  {
    *((_DWORD *)Pool + 16) = a4;
    *((_QWORD *)Pool + 2) = Pool + 72;
    *((_QWORD *)Pool + 1) = a3;
    MiInsertVadEvent(a2, (unsigned __int64 *)Pool, 1);
    return 0LL;
  }
}

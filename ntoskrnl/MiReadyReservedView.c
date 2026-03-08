/*
 * XREFs of MiReadyReservedView @ 0x14062CA80
 * Callers:
 *     MmMapViewInSystemCache @ 0x140334FD0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x140335220 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x1402D5158 (MiCompareTbFlushTimeStamp.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiReadyReservedView(unsigned __int64 a1, int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[24]; // [rsp+20h] [rbp-D8h] BYREF

  v3 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = *v3;
  if ( qword_140C657C0 && (v4 & 0x10) == 0 )
    v4 &= ~qword_140C657C0;
  if ( MiCompareTbFlushTimeStamp(SHIDWORD(v4), a2) )
  {
    memset(v6, 0, 0xB8uLL);
    v6[3] = 0LL;
    LODWORD(v6[1]) = 20;
    MiInsertTbFlushEntry((__int64)v6, a1, 64LL, 0);
    MiFlushTbList((int *)v6);
  }
  result = ZeroPte;
  *v3 = ZeroPte;
  return result;
}

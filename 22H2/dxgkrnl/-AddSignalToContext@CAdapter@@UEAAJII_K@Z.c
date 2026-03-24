/*
 * XREFs of ?AddSignalToContext@CAdapter@@UEAAJII_K@Z @ 0x1C0064770
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C015D2C0 (DxgkSignalSynchronizationObjectInternal.c)
 */

__int64 __fastcall CAdapter::AddSignalToContext(CAdapter *this, unsigned int a2, int a3, __int64 a4)
{
  _QWORD v8[58]; // [rsp+20h] [rbp-1E8h] BYREF

  memset(v8, 0, sizeof(v8));
  v8[0] = a2 | 0x100000000LL;
  LODWORD(v8[1]) = a3;
  v8[50] = a4;
  return DxgkSignalSynchronizationObjectInternal(v8, 0LL);
}

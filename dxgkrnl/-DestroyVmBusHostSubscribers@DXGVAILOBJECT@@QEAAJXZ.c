/*
 * XREFs of ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C035CFA8
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01A6B80 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1DXGVAILOBJECT@@UEAA@XZ @ 0x1C035BE1C (--1DXGVAILOBJECT@@UEAA@XZ.c)
 *     NtDxgkVailConnect @ 0x1C035FEE0 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C0360390 (NtDxgkVailDisconnect.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGVAILOBJECT::DestroyVmBusHostSubscribers(DXGVAILOBJECT *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  else if ( !*((_QWORD *)this + 16) )
  {
    v3 = -2147483611;
    goto LABEL_8;
  }
  v4 = *((_QWORD *)this + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
    *((_QWORD *)this + 16) = 0LL;
  }
  v3 = 0;
LABEL_8:
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return v3;
}

/*
 * XREFs of ?GlobalVmBusStatChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C03712F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z @ 0x1C03CD588 (-NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z.c)
 */

__int64 __fastcall GlobalVmBusStatChangeCallback(struct DXGADAPTER *a1, unsigned __int8 *a2)
{
  DXGDODPRESENT *v4; // rcx
  _BYTE v6[8]; // [rsp+50h] [rbp-28h] BYREF
  struct DXGADAPTER *v7; // [rsp+58h] [rbp-20h]
  char v8; // [rsp+60h] [rbp-18h]

  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 13115LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAdapter != NULL", 13115LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = a1;
  v8 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  if ( *((_DWORD *)a1 + 50) == 1 && !*((_QWORD *)a1 + 366) )
  {
    v4 = *(DXGDODPRESENT **)(*((_QWORD *)a1 + 365) + 448LL);
    if ( v4 )
      DXGDODPRESENT::NotifyGlobalVmBusStatusChange(v4, *a2);
  }
  if ( v8 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  return 0LL;
}

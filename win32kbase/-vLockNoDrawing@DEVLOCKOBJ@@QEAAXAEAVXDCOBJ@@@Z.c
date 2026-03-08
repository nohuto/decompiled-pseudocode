/*
 * XREFs of ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C001AA00
 * Callers:
 *     GreGetNearestColor @ 0x1C001A710 (GreGetNearestColor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0198958 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall DEVLOCKOBJ::vLockNoDrawing(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // r8d
  struct _ERESOURCE *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // edx
  int v14; // r8d
  char v15; // al

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 1;
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (*(_DWORD *)(v4 + 40) & 1) != 0 )
  {
    v5 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
    *((_QWORD *)this + 1) = *(_QWORD *)(v5 + 80);
    v6 = *(_QWORD *)(v5 + 80);
    if ( v6 )
      ExEnterPriorityRegionAndAcquireResourceShared();
    v7 = *(_QWORD *)(v5 + 80);
    v8 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
    if ( *(_DWORD *)(v8 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v8,
        (unsigned int)&LockAcquireShared,
        v9,
        v7,
        (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
    *((_DWORD *)this + 6) |= 8u;
    v10 = *(struct _ERESOURCE **)(*(_QWORD *)a2 + 64LL);
    *(_QWORD *)this = v10;
    *((_QWORD *)this + 2) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( v10 )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v10);
    }
    v11 = *(_QWORD *)this;
    v12 = *(_QWORD *)(v5 + 120);
    if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v8) + 24) + 180LL)
      && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    {
      v15 = 2;
      if ( v11 != v12 )
        v15 = 11;
      McTemplateK0pqz_EtwWriteTransfer((unsigned int)L"hsemTrg", v13, v14, v11, v15, (__int64)L"hsemTrg");
    }
  }
  if ( qword_1C02D5890 && (int)qword_1C02D5890() >= 0 )
  {
    if ( qword_1C02D5898 )
      qword_1C02D5898(this, 0LL);
  }
}

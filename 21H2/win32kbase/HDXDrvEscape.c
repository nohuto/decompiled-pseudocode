/*
 * XREFs of HDXDrvEscape @ 0x1C00D4960
 * Callers:
 *     DrvEscapeRemoteDrivers @ 0x1C00D4750 (DrvEscapeRemoteDrivers.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0078B50 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C00D4AB4 (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C00D4C28 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HDXDrvEscape(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  int v9; // r8d
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD); // rax
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-E8h]
  unsigned int v15; // [rsp+30h] [rbp-D8h]
  HSEMAPHORE v16; // [rsp+68h] [rbp-A0h]
  unsigned int v17; // [rsp+70h] [rbp-98h]
  HSEMAPHORE v18; // [rsp+78h] [rbp-90h]
  unsigned int v19; // [rsp+80h] [rbp-88h]
  _BYTE v20[96]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v21; // [rsp+110h] [rbp+8h] BYREF

  v21 = a1;
  if ( a1 && (v8 = 1, (*(_DWORD *)(a1 + 40) & 1) != 0) )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v20,
      (HSEMAPHORE)ghsemDynamicModeChange,
      a3,
      (HSEMAPHORE)ghsemGreLock,
      v14,
      (HSEMAPHORE)ghsemDCVisRgn,
      v15,
      *(HSEMAPHORE *)(a1 + 56),
      4u,
      (HSEMAPHORE)ghsemSprite,
      5u,
      ghsemHT,
      6u,
      v16,
      v17,
      v18,
      v19);
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 48), 11);
    PDEVOBJ::vSync(
      (PDEVOBJ *)&v21,
      (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2528) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 2528) >> 64)),
      0LL,
      0);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD))(a1 + 2856);
    if ( v10 )
      v8 = v10(*(_QWORD *)(a1 + 2528) + 24LL, a2, a4, a3, 0, 0LL);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 48), v9);
    v11 = *(struct _ERESOURCE **)(a1 + 48);
    if ( v11 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v11);
      PsLeavePriorityRegion(v12);
    }
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v20);
  }
  else
  {
    return 0;
  }
  return v8;
}

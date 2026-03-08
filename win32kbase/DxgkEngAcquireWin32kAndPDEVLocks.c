/*
 * XREFs of DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C00191F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0017690 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     GreLockDisplayDevice @ 0x1C001F900 (GreLockDisplayDevice.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D990 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 */

__int64 __fastcall DxgkEngAcquireWin32kAndPDEVLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rcx
  HSEMAPHORE *v7; // rbx
  __int64 i; // rcx
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v7 = *(HSEMAPHORE **)(SGDGetSessionState(v6) + 24);
  EngAcquireSemaphore(v7[10]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", v7[10], 1LL);
  EngAcquireSemaphore(v7[15]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", v7[15], 2LL);
  EngAcquireSemaphore(v7[11]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDCVisRgn", v7[11], 3LL);
  EngAcquireSemaphore(v7[9]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", v7[9], 7LL);
  for ( i = 0LL; ; i = v10 )
  {
    result = hdevEnumerate<1>(i);
    v10 = result;
    if ( !result )
      break;
    v12 = result;
    v11 = *(_QWORD *)(result + 2552);
    if ( v11 && (*(_DWORD *)(v10 + 40) & 0x20400) == 0 && *(_QWORD *)(v11 + 232) == a1 && *(_DWORD *)(v11 + 248) < v4 )
    {
      GreLockDisplayDevice(v10);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v12,
        (struct _SURFOBJ *)((*(_QWORD *)(v10 + 2528) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v10 + 2528) >> 64)),
        0LL,
        0xEu);
    }
  }
  return result;
}

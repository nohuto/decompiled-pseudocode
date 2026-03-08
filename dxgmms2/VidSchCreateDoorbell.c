/*
 * XREFs of VidSchCreateDoorbell @ 0x1C0043F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchCreateDoorbell(__int64 a1)
{
  __int64 Pool2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD v6[4]; // [rsp+50h] [rbp-38h] BYREF
  __int16 v7; // [rsp+70h] [rbp-18h]

  Pool2 = ExAllocatePool2(64LL, 24LL, 862087510LL);
  if ( Pool2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 16LL) + 24LL);
    v7 = 0;
    v6[0] = v5 + 1728;
    AcquireSpinLock::Acquire((Acquire *)v6);
    *(_DWORD *)Pool2 = 862087510;
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_QWORD *)(Pool2 + 8) = v4;
    *(_QWORD *)(v4 + 264) = Pool2;
    AcquireSpinLock::Release((AcquireSpinLock *)v6);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741801LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"ExAllocatePool for doorbell failed, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}

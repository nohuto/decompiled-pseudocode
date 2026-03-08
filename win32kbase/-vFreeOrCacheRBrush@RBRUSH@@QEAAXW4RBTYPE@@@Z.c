/*
 * XREFs of ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0028810
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001BBAC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0027D30 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0059910 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C005A050 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 *     GreSetSolidBrushLight @ 0x1C017E620 (GreSetSolidBrushLight.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     EngFreeUserMem @ 0x1C0196E00 (EngFreeUserMem.c)
 */

void __fastcall RBRUSH::vFreeOrCacheRBrush(_DWORD *a1, int a2)
{
  _DWORD *v3; // rbx
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rax

  v3 = a1;
  if ( a1 < MmSystemRangeStart )
  {
    EngFreeUserMem(a1);
  }
  else
  {
    v4 = 0;
    v5 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
    if ( a2 )
    {
      v6 = 200LL;
    }
    else
    {
      v4 = v3[2];
      if ( v4 && qword_1C02D5C98 && (int)qword_1C02D5C98() >= 0 && qword_1C02D5CA0 )
        qword_1C02D5CA0(v3 + 4);
      v6 = 192LL;
    }
    if ( !*(_QWORD *)(v5 + v6) && v4 != 1 )
      v3 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(v5 + v6), (__int64)v3);
    if ( v3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  }
}

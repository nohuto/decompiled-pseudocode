/*
 * XREFs of ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C00892E0
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0060078 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0088250 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C0088990 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0088CC0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 *     GreSetSolidBrushLight @ 0x1C0150EB0 (GreSetSolidBrushLight.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     EngFreeUserMem @ 0x1C016A070 (EngFreeUserMem.c)
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
      if ( v4 && qword_1C0294B28 && (int)qword_1C0294B28() >= 0 && qword_1C0294B30 )
        qword_1C0294B30(v3 + 4);
      v6 = 192LL;
    }
    if ( !*(_QWORD *)(v5 + v6) && v4 != 1 )
      v3 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(v5 + v6), (__int64)v3);
    if ( v3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  }
}

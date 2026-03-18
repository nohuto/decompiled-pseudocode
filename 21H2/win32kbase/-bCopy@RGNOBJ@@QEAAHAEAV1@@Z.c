/*
 * XREFs of ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00266E0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001C600 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0024B20 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C008EC08 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C016D8A0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C016EED0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C00233C0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0024160 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025A8C (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C00267E0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall RGNOBJ::bCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v2; // rax
  __int64 v4; // r9
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)this;
  v6 = 112;
  v7 = *(_DWORD *)(v2 + 80);
  v8 = *(_DWORD *)(v4 + 24);
  if ( (v8 >= v7 || *(_DWORD *)(v2 + 24) <= 0x70u) && (v8 <= 0x70 || *(_DWORD *)(v2 + 24) > 0x70u) )
  {
    *(_DWORD *)(v4 + 80) = v7;
    *(_DWORD *)(*(_QWORD *)this + 84LL) = *(_DWORD *)(*(_QWORD *)a2 + 84LL);
    *(_OWORD *)(*(_QWORD *)this + 96LL) = *(_OWORD *)(*(_QWORD *)a2 + 96LL);
    memmove(
      *(void **)(*(_QWORD *)this + 88LL),
      *(const void **)(*(_QWORD *)a2 + 88LL),
      *(unsigned int *)(*(_QWORD *)a2 + 80LL));
    *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 88LL)
                                        + *(_DWORD *)(*(_QWORD *)a2 + 40LL)
                                        - *(_DWORD *)(*(_QWORD *)a2 + 88LL);
    return 1LL;
  }
  if ( v7 > 0x70 )
    v6 = *(_DWORD *)(v2 + 80);
  v11 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v10, v6);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v10);
  if ( v10 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v10, a2);
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v10);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
    return 1LL;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  return 0LL;
}

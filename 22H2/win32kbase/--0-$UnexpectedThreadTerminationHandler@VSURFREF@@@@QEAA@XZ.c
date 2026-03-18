/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00D1560
 * Callers:
 *     EngLockSurface @ 0x1C003D970 (EngLockSurface.c)
 *     NtGdiDeleteObjectApp @ 0x1C0041980 (NtGdiDeleteObjectApp.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C005E508 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00BBBE4 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0159C40 (--0SURFREF@@QEAA@XZ.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0049F70 (PushThreadGuardedObject.c)
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  PushThreadGuardedObject(
    (_QWORD *)a1,
    a1,
    (__int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic);
  return a1;
}

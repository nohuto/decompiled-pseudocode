/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00C7C50
 * Callers:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C001C608 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     EngLockSurface @ 0x1C002CB30 (EngLockSurface.c)
 *     NtGdiDeleteObjectApp @ 0x1C0032310 (NtGdiDeleteObjectApp.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00A889C (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C013F6E4 (--0SURFREF@@QEAA@XZ.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C002CCA0 (PushThreadGuardedObject.c)
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

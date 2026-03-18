/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00D8BE8
 * Callers:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001EEA0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     EngLockSurface @ 0x1C0020170 (EngLockSurface.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0063C24 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00C9214 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C016C500 (--0SURFREF@@QEAA@XZ.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C00232C0 (PushThreadGuardedObject.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      (_QWORD *)a1,
      a1,
      (__int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic);
  return a1;
}

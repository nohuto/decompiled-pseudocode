/*
 * XREFs of GreSetDIBitsInternal @ 0x1C0122108
 * Callers:
 *     GreCreateDIBitmapComp @ 0x1C0122004 (GreCreateDIBitmapComp.c)
 *     GreSetDIBits @ 0x1C02C1398 (GreSetDIBits.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00AF5A0 (GreSetDIBitsToDeviceInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetDIBitsInternal(
        HDC a1,
        HSURF a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        struct _SURFOBJ *a10)
{
  __int64 v10; // r15
  unsigned int v11; // r13d
  int v14; // esi
  HDC CompatibleDC; // rbx
  HDC v16; // r12
  __int64 v17; // rdx
  int v18; // r14d
  __int64 v19; // rbp
  _BYTE v21[32]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-78h]
  _QWORD v23[2]; // [rsp+A8h] [rbp-70h] BYREF
  _BYTE v24[96]; // [rsp+B8h] [rbp-60h] BYREF
  int v26; // [rsp+130h] [rbp+18h]

  v10 = 0LL;
  v11 = 0;
  if ( a6 && (*a6 < 0x28 || a6[4] - 4 > 1) )
  {
    v14 = a6[2];
    v26 = a6[1];
    if ( v14 < 0 )
      v14 = -v14;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    SURFREF::SURFREF((SURFREF *)v21, a2);
    if ( v22 && (*(_DWORD *)(v22 + 112) & 0x4000000) != 0 )
    {
      if ( *(_DWORD *)(v22 + 168) )
        CompatibleDC = *(HDC *)(v22 + 160);
      else
        CompatibleDC = 0LL;
      v16 = CompatibleDC;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      if ( CompatibleDC || (CompatibleDC = (HDC)GreCreateCompatibleDC(a1)) != 0LL )
      {
        v18 = 1;
        if ( !a1
          || a1 == CompatibleDC
          || ((DCOBJ::DCOBJ((DCOBJ *)v23, a1), v23[0])
            ? (v10 = GreSelectPalette(CompatibleDC, *(_QWORD *)(v23[0] + 80LL), 1LL))
            : (EngSetLastError(6u), v18 = 0),
              MDCOBJ::~MDCOBJ((MDCOBJ *)v23),
              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v24),
              v18) )
        {
          v19 = GreSelectBitmap(CompatibleDC, a2);
          if ( v19 )
          {
            v11 = GreSetDIBitsToDeviceInternal(CompatibleDC, 0, 0, v26, v14, 0, 0, 0, a4, a5, a6, a7, a8, a9, 0, a10);
            if ( v10 )
              GreSelectPalette(CompatibleDC, v10, 1LL);
            GreSelectBitmap(CompatibleDC, v19);
          }
        }
        if ( !v16 )
          bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
      }
    }
    else
    {
      EngSetLastError(6u);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    }
    if ( v22 )
      DEC_SHARE_REF_CNT(v22, v17);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v21);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  return v11;
}

/*
 * XREFs of GreSetDIBitsInternal @ 0x1C014A310
 * Callers:
 *     GreCreateDIBitmapComp @ 0x1C014A20C (GreCreateDIBitmapComp.c)
 *     GreSetDIBits @ 0x1C02BFD38 (GreSetDIBits.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C002E3F0 (GreSetDIBitsToDeviceInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
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
        __int64 a10)
{
  __int64 v10; // r15
  unsigned int v11; // r13d
  int v12; // r12d
  int v15; // r14d
  signed int v16; // esi
  HDC CompatibleDC; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbp
  _BYTE v23[32]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-78h]
  _QWORD v25[2]; // [rsp+A8h] [rbp-70h] BYREF
  _BYTE v26[96]; // [rsp+B8h] [rbp-60h] BYREF
  unsigned int v28; // [rsp+130h] [rbp+18h]

  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( a6 && ((v15 = 1, *a6 < 0x28) || a6[4] - 4 > 1) )
  {
    v16 = a6[2];
    v28 = a6[1];
    if ( v16 < 0 )
      v16 = -v16;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    SURFREF::SURFREF((SURFREF *)v23, a2);
    if ( v24 && (*(_DWORD *)(v24 + 112) & 0x4000000) != 0 )
    {
      if ( *(_DWORD *)(v24 + 168) )
        CompatibleDC = *(HDC *)(v24 + 160);
      else
        CompatibleDC = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      if ( CompatibleDC || (CompatibleDC = (HDC)GreCreateCompatibleDC(a1, v18, v19, v20), v12 = 1, CompatibleDC) )
      {
        if ( !a1
          || a1 == CompatibleDC
          || ((DCOBJ::DCOBJ((DCOBJ *)v25, a1), v25[0])
            ? (v10 = GreSelectPalette(CompatibleDC, *(_QWORD *)(v25[0] + 80LL), 1LL))
            : (EngSetLastError(6u), v15 = 0),
              MDCOBJ::~MDCOBJ((MDCOBJ *)v25),
              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v26),
              v15) )
        {
          v21 = GreSelectBitmap(CompatibleDC, a2);
          if ( v21 )
          {
            v11 = GreSetDIBitsToDeviceInternal(CompatibleDC, 0, 0, v28, v16, 0, 0, 0, a4, a5, a6, a7, a8, a9, 0, a10);
            if ( v10 )
              GreSelectPalette(CompatibleDC, v10, 1LL);
            GreSelectBitmap(CompatibleDC, v21);
          }
        }
        if ( v12 )
          bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
      }
    }
    else
    {
      EngSetLastError(6u);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    }
    if ( v24 )
      DEC_SHARE_REF_CNT(v24);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v23);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  return v11;
}

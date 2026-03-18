/*
 * XREFs of NtGdiEngEraseSurface @ 0x1C02B1540
 * Callers:
 *     <none>
 * Callees:
 *     EngEraseSurface @ 0x1C0005B60 (EngEraseSurface.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0129030 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C012ADE8 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngEraseSurface(struct _SURFOBJ *a1, RECTL *a2, ULONG a3)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  SURFOBJ *v9; // rsi
  unsigned int v10; // edi
  RECTL *prcl; // [rsp+20h] [rbp-98h] BYREF
  ULONG v12; // [rsp+28h] [rbp-90h]
  struct UMPDOBJ *v13; // [rsp+30h] [rbp-88h]
  SURFOBJ *v14; // [rsp+38h] [rbp-80h]
  SURFOBJ *pso[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _RECTL v16; // [rsp+80h] [rbp-38h] BYREF

  prcl = a2;
  v12 = a3;
  v16 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  v13 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v9 = pso[0];
  v14 = pso[0];
  if ( pso[0] )
  {
    CaptureRECTL(&prcl, &v16);
    if ( (*((_DWORD *)v7 + 103) & 0x100) != 0 && !prcl )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngEraseSurface:prcl == NULL\n",
          2524);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
      --*((_DWORD *)v7 + 105);
      return 0LL;
    }
    v10 = bCheckSurfaceRect(v9, prcl, 0LL);
    if ( v10 )
      v10 = EngEraseSurface(v9, prcl, a3);
  }
  else
  {
    v10 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*((_DWORD *)v7 + 105);
  return v10;
}

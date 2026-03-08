/*
 * XREFs of NtGdiEngEraseSurface @ 0x1C02CBF90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngEraseSurface @ 0x1C0127710 (EngEraseSurface.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C958C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C9744 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C9940 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02CA19C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngEraseSurface(struct _SURFOBJ *a1, RECTL *a2, ULONG a3)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  struct _SURFOBJ **v7; // r14
  _DWORD *v8; // rbx
  SURFOBJ *v10; // rsi
  unsigned int v11; // edi
  RECTL *prcl; // [rsp+20h] [rbp-B8h] BYREF
  ULONG v13; // [rsp+28h] [rbp-B0h]
  struct _SURFOBJ **v14; // [rsp+30h] [rbp-A8h]
  SURFOBJ *v15; // [rsp+38h] [rbp-A0h]
  char *v16; // [rsp+40h] [rbp-98h]
  SURFOBJ *pso[8]; // [rsp+50h] [rbp-88h] BYREF
  struct _RECTL v18; // [rsp+90h] [rbp-48h] BYREF

  prcl = a2;
  v13 = a3;
  v18 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  v14 = ThreadCurrentObj;
  v8 = (_DWORD *)ThreadCurrentObj + 105;
  if ( ThreadCurrentObj )
    ++*v8;
  v16 = (char *)ThreadCurrentObj + 420;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v10 = pso[0];
  v15 = pso[0];
  if ( pso[0] )
  {
    CaptureRECTL(&prcl, &v18);
    if ( (*((_DWORD *)v7 + 103) & 0x100) != 0 && !prcl )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
      --*v8;
      return 0LL;
    }
    v11 = bCheckSurfaceRect(v10, prcl, 0LL);
    if ( v11 )
      v11 = EngEraseSurface(v10, prcl, a3);
  }
  else
  {
    v11 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v8;
  return v11;
}

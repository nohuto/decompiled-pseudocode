__int64 __fastcall NtGdiEngPaint(struct _SURFOBJ *a1, struct _CLIPOBJ *a2, struct _BRUSHOBJ *a3, POINTL *a4, MIX a5)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  UMPDOBJ *v10; // r15
  _DWORD *v11; // rsi
  SURFOBJ *v13; // r14
  struct _CLIPOBJ *DDIOBJ; // rbx
  BRUSHOBJ *v15; // r15
  MIX mix; // r12d
  unsigned int v17; // edi
  struct _POINTL v18; // [rsp+30h] [rbp-A8h] BYREF
  char *v19; // [rsp+38h] [rbp-A0h]
  struct _BRUSHOBJ v20; // [rsp+40h] [rbp-98h] BYREF
  SURFOBJ *pso[15]; // [rsp+60h] [rbp-78h] BYREF
  POINTL *pptlBrushOrg; // [rsp+F8h] [rbp+20h] BYREF

  pptlBrushOrg = a4;
  v18 = 0LL;
  memset(&v20, 0, sizeof(v20));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = (UMPDOBJ *)ThreadCurrentObj;
  v11 = (_DWORD *)ThreadCurrentObj + 105;
  if ( ThreadCurrentObj )
    ++*v11;
  v19 = (char *)ThreadCurrentObj + 420;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v13 = pso[0];
  if ( pso[0] )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v10, a2, &pso[0]->sizlBitmap);
  else
    DDIOBJ = 0LL;
  v15 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v10, (__int64)a3);
  if ( !v15 )
    v15 = CaptureAndFakeBRUSHOBJ(a3, &v20);
  if ( v13 && DDIOBJ && !DDIOBJ->iMode && (mix = a5, (a5 & 0xFF00) != 0) )
  {
    CapturePOINTL(&pptlBrushOrg, &v18);
    v17 = bCheckSurfaceRect(v13, 0LL, DDIOBJ);
    if ( v17 )
      v17 = EngPaint(v13, DDIOBJ, v15, pptlBrushOrg, mix);
  }
  else
  {
    v17 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v11;
  return v17;
}

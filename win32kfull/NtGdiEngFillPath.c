_BOOL8 __fastcall NtGdiEngFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  UMPDOBJ *v13; // rdi
  _DWORD *v14; // r14
  SURFOBJ *v16; // r15
  struct _PATHOBJ *v17; // r12
  struct _CLIPOBJ *DDIOBJ; // rsi
  struct _BRUSHOBJ *v19; // rdi
  PATHOBJ *v20; // rdx
  BOOL v21; // [rsp+40h] [rbp-A8h]
  struct _POINTL v22; // [rsp+48h] [rbp-A0h] BYREF
  char *v23; // [rsp+50h] [rbp-98h]
  struct _BRUSHOBJ v24; // [rsp+58h] [rbp-90h] BYREF
  SURFOBJ *pso[15]; // [rsp+70h] [rbp-78h] BYREF

  v21 = 0;
  v22 = 0LL;
  memset(&v24, 0, sizeof(v24));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = (UMPDOBJ *)ThreadCurrentObj;
  v14 = (_DWORD *)ThreadCurrentObj + 105;
  if ( ThreadCurrentObj )
    ++*v14;
  v23 = (char *)ThreadCurrentObj + 420;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v16 = pso[0];
  v17 = (struct _PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v13, a2);
  if ( v16 )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, a3, &v16->sizlBitmap);
  else
    DDIOBJ = 0LL;
  v19 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a4);
  if ( !v19 )
    v19 = CaptureAndFakeBRUSHOBJ(a4, &v24);
  if ( v16 && v19 && v17 && DDIOBJ && !DDIOBJ->iMode && pptlBrushOrg )
  {
    CapturePOINTL(&pptlBrushOrg, &v22);
    v21 = (unsigned int)bCheckSurfacePath(v16, v17, DDIOBJ)
       && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || v19->iSolidColor == -1)
       && EngFillPath(v16, v20, DDIOBJ, v19, pptlBrushOrg, mix, flOptions);
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v14;
  return v21;
}

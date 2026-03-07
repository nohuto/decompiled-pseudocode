__int64 NtGdiEngStrokeAndFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        struct _BRUSHOBJ *a5,
        LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  UMPDOBJ *v12; // r14
  _DWORD *v13; // rsi
  struct tagSIZE *v15; // rbx
  unsigned __int64 v16; // r13
  struct _CLIPOBJ *DDIOBJ; // r12
  BRUSHOBJ *pboStroke; // r15
  struct _BRUSHOBJ *pboFill; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ebx
  LINEATTRS *plineattrs; // r13
  unsigned __int64 v24; // rax
  XFORMOBJ *v25; // r14
  PATHOBJ *v26; // rdx
  PFLOAT_LONG pstyle; // rcx
  struct _POINTL v28; // [rsp+58h] [rbp-F0h] BYREF
  struct _SURFOBJ **v29; // [rsp+60h] [rbp-E8h]
  char *v30; // [rsp+68h] [rbp-E0h]
  struct _BRUSHOBJ v31; // [rsp+70h] [rbp-D8h] BYREF
  struct _BRUSHOBJ v32; // [rsp+88h] [rbp-C0h] BYREF
  _LINEATTRS v33; // [rsp+A0h] [rbp-A8h] BYREF
  _QWORD v34[15]; // [rsp+D0h] [rbp-78h] BYREF
  SURFOBJ *pso; // [rsp+150h] [rbp+8h]
  struct _PATHOBJ *v36; // [rsp+158h] [rbp+10h]
  POINTL *pptlBrushOrg; // [rsp+188h] [rbp+40h] BYREF
  va_list va; // [rsp+188h] [rbp+40h]
  __int64 mixFill; // [rsp+190h] [rbp+48h]
  __int64 flOptions; // [rsp+198h] [rbp+50h]
  va_list va1; // [rsp+1A0h] [rbp+58h] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  pptlBrushOrg = va_arg(va1, POINTL *);
  mixFill = va_arg(va1, _QWORD);
  flOptions = va_arg(va1, _QWORD);
  v28 = 0LL;
  memset(&v33, 0, sizeof(v33));
  memset(&v31, 0, sizeof(v31));
  memset(&v32, 0, sizeof(v32));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = (UMPDOBJ *)ThreadCurrentObj;
  v29 = ThreadCurrentObj;
  v13 = (_DWORD *)ThreadCurrentObj + 105;
  if ( ThreadCurrentObj )
    ++*v13;
  v30 = (char *)ThreadCurrentObj + 420;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v34, a1, ThreadCurrentObj);
  v15 = (struct tagSIZE *)v34[0];
  pso = (SURFOBJ *)v34[0];
  v16 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v12, a2);
  v36 = (struct _PATHOBJ *)v16;
  if ( v15 )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v12, a3, v15 + 4);
  else
    DDIOBJ = 0LL;
  pboStroke = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v12, (__int64)a5);
  if ( !pboStroke )
    pboStroke = CaptureAndFakeBRUSHOBJ(a5, &v31);
  pboFill = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v12, (__int64)a7);
  if ( !pboFill )
    pboFill = CaptureAndFakeBRUSHOBJ(a7, &v32);
  a7 = pboFill;
  if ( v15 && pboStroke && pboFill && v16 && a6 && DDIOBJ && pptlBrushOrg )
  {
    CapturePOINTL((struct _POINTL **)va, &v28);
    v22 = bCaptureLINEATTRS(&a6, &v33, v20, v21);
    plineattrs = a6;
    if ( v22 )
    {
      v24 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v12, a4);
      v25 = (XFORMOBJ *)v24;
      if ( (plineattrs->fl & 1) != 0 )
        v22 &= -(v24 != 0);
      v22 = v22
         && (unsigned int)bCheckSurfacePath(pso, v36, DDIOBJ)
         && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1)
         && EngStrokeAndFillPath(
              pso,
              v26,
              DDIOBJ,
              v25,
              pboStroke,
              plineattrs,
              pboFill,
              pptlBrushOrg,
              mixFill,
              flOptions);
      pstyle = plineattrs->pstyle;
      if ( pstyle )
        Win32FreePool(pstyle);
    }
  }
  else
  {
    v22 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v34);
  --*v13;
  return v22;
}

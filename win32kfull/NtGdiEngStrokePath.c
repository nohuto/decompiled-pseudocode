__int64 NtGdiEngStrokePath(struct _SURFOBJ *a1, __int64 a2, struct _CLIPOBJ *a3, __int64 a4, struct _BRUSHOBJ *a5, ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  struct _SURFOBJ **v9; // r15
  _DWORD *v10; // rdi
  SURFOBJ *v12; // r13
  struct _PATHOBJ *v13; // r12
  struct _BRUSHOBJ *pbo; // r14
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebx
  LINEATTRS *plineattrs; // rsi
  struct _CLIPOBJ *v19; // rdx
  unsigned __int64 v20; // rax
  struct _CLIPOBJ *v21; // r9
  XFORMOBJ *v22; // r15
  PATHOBJ *v23; // rdx
  PFLOAT_LONG pstyle; // rcx
  struct _CLIPOBJ *pco; // [rsp+40h] [rbp-D8h]
  struct _POINTL v26; // [rsp+48h] [rbp-D0h] BYREF
  struct _SURFOBJ **v27; // [rsp+50h] [rbp-C8h]
  struct _BRUSHOBJ v28; // [rsp+58h] [rbp-C0h] BYREF
  struct _LINEATTRS v29; // [rsp+70h] [rbp-A8h] BYREF
  SURFOBJ *pso[15]; // [rsp+A0h] [rbp-78h] BYREF
  POINTL *pptlBrushOrg; // [rsp+148h] [rbp+30h] BYREF
  va_list va; // [rsp+148h] [rbp+30h]
  LINEATTRS *v35; // [rsp+150h] [rbp+38h] BYREF
  va_list va1; // [rsp+150h] [rbp+38h]
  __int64 mix; // [rsp+158h] [rbp+40h]
  va_list va2; // [rsp+160h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  pptlBrushOrg = va_arg(va1, POINTL *);
  va_copy(va2, va1);
  v35 = va_arg(va2, LINEATTRS *);
  mix = va_arg(va2, _QWORD);
  v26 = 0LL;
  memset(&v29, 0, sizeof(v29));
  memset(&v28, 0, sizeof(v28));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  v27 = ThreadCurrentObj;
  v10 = (_DWORD *)ThreadCurrentObj + 105;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*v10;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v12 = pso[0];
  v13 = (struct _PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v9, a2);
  pbo = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v9, (__int64)a5);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(a5, &v28);
  if ( v12 && pbo && v13 && v35 && pptlBrushOrg )
  {
    CapturePOINTL((struct _POINTL **)va, &v26);
    v17 = bCaptureLINEATTRS((struct _LINEATTRS **)va1, &v29, v15, v16);
    plineattrs = v35;
    if ( v17 )
    {
      v19 = a3;
      if ( (*((_DWORD *)v9 + 103) & 0x100) != 0 && (v35->fl & 1) != 0 )
        v17 &= -(a3 != 0LL);
    }
    else
    {
      v19 = a3;
    }
    if ( v17 )
    {
      pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v9, v19, &v12->sizlBitmap);
      v20 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v9, a4);
      v22 = (XFORMOBJ *)v20;
      if ( (plineattrs->fl & 1) != 0 )
        v17 &= -(v20 != 0);
      v17 = v17
         && (unsigned int)bCheckSurfacePath(v12, v13, v21)
         && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1)
         && EngStrokePath(v12, v23, pco, v22, pbo, pptlBrushOrg, plineattrs, mix);
      pstyle = plineattrs->pstyle;
      if ( pstyle )
        Win32FreePool(pstyle);
    }
  }
  else
  {
    v17 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v10;
  return v17;
}

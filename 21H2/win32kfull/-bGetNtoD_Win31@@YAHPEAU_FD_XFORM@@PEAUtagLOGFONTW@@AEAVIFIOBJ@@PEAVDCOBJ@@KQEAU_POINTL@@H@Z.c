/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C005EC08
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C00E8CD8 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C005D0A0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C005F4E8 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0098748 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0099E84 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0099EC0 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?bParityViolatingXform@@YAHPEAVDCOBJ@@@Z @ 0x1C012D634 (-bParityViolatingXform@@YAHPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoD_Win31(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        unsigned int a5,
        struct _POINTL *const a6,
        int a7)
{
  unsigned int v7; // esi
  int v12; // ecx
  __int64 v13; // r8
  __m128 v14; // xmm0
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // r12d
  struct DCOBJ *v18; // rbx
  int v19; // r12d
  struct _KTHREAD *CurrentThread; // r13
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rax
  int v38; // edx
  __int64 v39; // rax
  FLOATL v40; // eax
  int v41; // eax
  int v42; // ecx
  __m128i v43; // xmm0
  int v44; // eax
  __int64 lfEscapement; // rcx
  int v46; // edx
  int v47; // edx
  __int64 y; // rax
  __int64 v49; // rax
  __int64 x; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v53; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v55; // rax
  int v56; // edi
  __int64 v57; // rcx
  __int64 v58; // rax
  float v59; // xmm6_4
  float v60; // xmm6_4
  __int128 v61; // xmm1
  int v62; // eax
  int v63; // [rsp+30h] [rbp-D0h]
  _DWORD *v64; // [rsp+38h] [rbp-C8h] BYREF
  struct DCOBJ *v65; // [rsp+40h] [rbp-C0h]
  struct _KTHREAD *v66; // [rsp+48h] [rbp-B8h]
  __m128 *v67; // [rsp+50h] [rbp-B0h] BYREF
  int v68; // [rsp+5Ch] [rbp-A4h]
  _OWORD v69[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v70; // [rsp+80h] [rbp-80h]
  __m128 v71; // [rsp+88h] [rbp-78h] BYREF
  __int128 v72; // [rsp+98h] [rbp-68h]
  int v73; // [rsp+A8h] [rbp-58h]
  _DWORD v74[6]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v75; // [rsp+C8h] [rbp-38h]
  int v76; // [rsp+D0h] [rbp-30h]
  __m128 v77; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v78; // [rsp+E8h] [rbp-18h]
  int v79; // [rsp+F8h] [rbp-8h]
  _OWORD v80[2]; // [rsp+100h] [rbp+0h] BYREF
  int v81; // [rsp+120h] [rbp+20h]

  v65 = a4;
  v79 = 0;
  v7 = 0;
  v73 = 0;
  v77 = 0LL;
  v78 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  if ( a6->x )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v12 & 0x3000010) == 0 )
    {
      v38 = 0;
      if ( gbDBCSCodePage && (v12 & 0x200000) != 0 )
      {
        lfEscapement = (unsigned int)a2->lfEscapement;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0 )
          v38 = (int)(3600 - lNormAngle(lfEscapement)) / 900 % 4;
        else
          v38 = (int)lNormAngle(lfEscapement) / 900;
      }
      if ( v38 )
      {
        v46 = v38 - 1;
        if ( !v46 )
        {
          x = a6->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          a1->eYX = *((FLOATL *)&galFloatNeg + x);
          a1->eXY = *((FLOATL *)&galFloatNeg + a6->y);
          return 1LL;
        }
        v47 = v46 - 1;
        if ( v47 )
        {
          if ( v47 == 1 )
          {
            y = a6->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            a1->eXY = *((FLOATL *)&galFloat + y);
            a1->eYX = *((FLOATL *)&galFloat + a6->x);
          }
          return 1LL;
        }
        v49 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloatNeg + v49);
        v40 = *((float *)&galFloat + a6->y);
      }
      else
      {
        v39 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloat + v39);
        v40 = *((float *)&galFloatNeg + a6->y);
      }
      a1->eYY = v40;
      return 1LL;
    }
  }
  if ( bGetNtoW_Win31((struct MATRIX *)&v77, a2, a3, a4, a5, a7) )
  {
    v13 = *(_QWORD *)a4;
    v67 = &v71;
    v68 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v13 + 976) + 340LL) & 0x802) == 0x802 || (a5 & 2) != 0 )
    {
      v14 = v77;
      v73 = v79;
      v72 = v78;
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v67, (struct MATRIX *)&v77, (struct MATRIX *)(v13 + 320), 0) )
        return v7;
      v14 = _mm_mul_ps(v71, (__m128)_xmm);
    }
    v15 = *(_QWORD *)a3;
    v71 = v14;
    v16 = *(_DWORD *)(v15 + 48);
    if ( (v16 & 4) == 0 )
    {
      v17 = a2->lfEscapement;
      if ( (v16 & 0x200000) != 0 )
        v17 = 900 * ((int)lNormAngle(v17) / 900 % 4);
      if ( v17 && ((a5 & 1) == 0 || gbDBCSCodePage) )
      {
        v18 = v65;
        v41 = bParityViolatingXform(v65);
        v75 = 0LL;
        v42 = -v17;
        v76 = 0;
        if ( !v41 )
          v42 = v17;
        v43 = (__m128i)COERCE_UNSIGNED_INT((float)v42);
        *(float *)v43.m128i_i32 = *(float *)v43.m128i_i32 / 10.0;
        v74[0] = efCos((unsigned int)_mm_cvtsi128_si32(v43));
        v74[3] = v74[0];
        v44 = efSin((unsigned int)_mm_cvtsi128_si32(v43));
        v74[4] = 0;
        v74[5] = 0;
        v74[2] = v44;
        v74[1] = v44 ^ _xmm;
        v81 = v73;
        v80[0] = v71;
        v80[1] = v72;
        if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v67, (struct MATRIX *)v80, (struct MATRIX *)v74, 0) )
          return v7;
      }
      else
      {
        v18 = v65;
      }
      LOBYTE(v19) = 18;
      CurrentThread = KeGetCurrentThread();
      LOBYTE(v21) = 18;
      v64 = *(_DWORD **)(*(_QWORD *)v18 + 48LL);
      if ( !(unsigned __int8)KeIsAttachedProcess(v64)
        || (CurrentProcess = PsGetCurrentProcess(v23, v22, v24),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v53),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v27 = *ThreadWin32Thread;
          if ( *ThreadWin32Thread )
          {
            if ( *(_QWORD *)(v27 + 360) )
              CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
            if ( *(_DWORD *)(v27 + 340) )
            {
              LOBYTE(v21) = *(_DWORD *)(v27 + 340);
            }
            else
            {
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
              if ( CurrentProcessWin32Process )
                v21 = *(_DWORD *)(CurrentProcessWin32Process + 280);
            }
          }
        }
      }
      v29 = 96;
      if ( (v64[10] & 1) != 0 && (v21 & 0xFu) - 1 > 1 )
        v63 = 96;
      else
        v63 = v64[544];
      v66 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v26)
        || (v55 = PsGetCurrentProcess(v31, v30, v32),
            v56 = PsGetProcessSessionIdEx(v55),
            v58 = PsGetCurrentThreadProcess(v57),
            v56 == (unsigned int)PsGetProcessSessionIdEx(v58)) )
      {
        v33 = (__int64 *)PsGetThreadWin32Thread(v66);
        if ( v33 )
        {
          v35 = *v33;
          if ( *v33 )
          {
            if ( *(_QWORD *)(v35 + 360) )
              CaptureAndValidateUserModeDpiAwarenessContext(*v33);
            if ( *(_DWORD *)(v35 + 340) )
            {
              LOBYTE(v19) = *(_DWORD *)(v35 + 340);
            }
            else
            {
              v36 = PsGetCurrentProcessWin32Process(v34);
              if ( v36 )
                v19 = *(_DWORD *)(v36 + 280);
            }
          }
        }
      }
      if ( (v64[10] & 1) == 0 || (v19 & 0xFu) - 1 <= 1 )
        v29 = v64[545];
      if ( v63 != v29 )
      {
        v59 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v64);
        v60 = v59 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v64);
        v61 = *(_OWORD *)(*(_QWORD *)v65 + 336LL);
        v62 = *(_DWORD *)(*(_QWORD *)v65 + 352LL);
        v69[0] = *(_OWORD *)(*(_QWORD *)v65 + 320LL);
        v70 = v62;
        v69[1] = v61;
        if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)v69 + 4))
          && (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)v69 + 8)) )
        {
          v71.m128_f32[1] = v71.m128_f32[1] / v60;
          v71.m128_f32[2] = v71.m128_f32[2] * v60;
        }
        else
        {
          v71.m128_f32[0] = v71.m128_f32[0] * v60;
          v71.m128_f32[3] = v71.m128_f32[3] / v60;
        }
      }
    }
    v7 = 1;
    *a1 = (struct _FD_XFORM)v71;
    return v7;
  }
  return 0LL;
}

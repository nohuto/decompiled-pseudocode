/*
 * XREFs of ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DB63C
 * Callers:
 *     GreValidateVisrgn @ 0x1C002BFA8 (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C001B718 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C001E924 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z @ 0x1C001E944 (-bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z.c)
 *     ?bEqual@ERECTL@@QEBAHAEBV1@@Z @ 0x1C001E974 (-bEqual@ERECTL@@QEBAHAEBV1@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C001EB64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C0020DC0 (HmgShareLockCheck.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C008E64C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C016C500 (--0SURFREF@@QEAA@XZ.c)
 */

char __fastcall GrepValidateVisRgn(struct DC *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  char v13; // bl
  _BYTE v14[32]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v15; // [rsp+70h] [rbp+7h]
  struct tagRECT v16; // [rsp+78h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+88h] [rbp+1Fh] BYREF

  if ( (*((_DWORD *)a1 + 9) & 0x100000) == 0 )
    return 1;
  v7 = *((_QWORD *)a1 + 6);
  if ( !v7 || !a2 )
    return 1;
  SURFREF::SURFREF((SURFREF *)v14);
  if ( (*((_DWORD *)a1 + 9) & 0x40000) != 0 )
  {
    v9 = *((_QWORD *)a1 + 265);
    if ( v9 )
    {
      v8 = HmgShareLockCheck(v9, 5);
      v15 = v8;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 2528);
    }
  }
  else
  {
    v8 = *((_QWORD *)a1 + 62);
  }
  if ( !v8
    || (*(_DWORD *)(v7 + 40) & 0x20000) != 0 && *(int *)(v8 + 112) < 0
    || (v16 = a2[6], (*((_DWORD *)a1 + 9) & 0x5000) == 0x1000)
    || ERECTL::bEmpty((ERECTL *)&v16)
    || (si128 = _mm_load_si128((const __m128i *)&_xmm), ERECTL::bEqual((ERECTL *)&v16, (const struct ERECTL *)&si128))
    || (v11 = -(__int64)((*(_DWORD *)(v10 + 116) & 0x800) != 0),
        si128.m128i_i64[0] = 0LL,
        si128.m128i_i64[1] = *(_QWORD *)((v11 & 0x264) + v10 + 56),
        !IsRectEmptyInl(&v16))
    && ERECTL::bContain((ERECTL *)&si128, (const struct _RECTL *)&v16) )
  {
    v13 = 1;
  }
  else
  {
    DbgkWerCaptureLiveKernelDump(L"win32k.sys", 400LL, 1LL, a1, v12, a2, 0LL, 0LL, 0);
    ERECTL::vOrder((ERECTL *)&v16);
    ERECTL::operator*=(&v16.left, si128.m128i_i32);
    v13 = 0;
    *a3 = v16;
  }
  SURFREF::~SURFREF((SURFREF *)v14);
  return v13;
}

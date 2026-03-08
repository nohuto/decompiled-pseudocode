/*
 * XREFs of ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DE9A0
 * Callers:
 *     GreValidateVisrgn @ 0x1C004145C (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?bEqual@ERECTL@@QEBAHAEBV1@@Z @ 0x1C0002C10 (-bEqual@ERECTL@@QEBAHAEBV1@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001CD74 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C004344C (--1SURFREF@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0043470 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C0043490 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z @ 0x1C00434B0 (-bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0078860 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

char __fastcall GrepValidateVisRgn(struct DC *a1, struct REGION *a2, struct _RECTL *a3)
{
  int v3; // eax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  char v14; // bl
  __int64 v15; // [rsp+50h] [rbp-30h] BYREF
  struct _RECTL v16; // [rsp+58h] [rbp-28h] BYREF
  __m128i si128; // [rsp+68h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a1 + 9);
  if ( (v3 & 0x100000) == 0 )
    return 1;
  v8 = *((_QWORD *)a1 + 6);
  if ( !v8 || !a2 )
    return 1;
  v15 = 0LL;
  if ( (v3 & 0x40000) != 0 )
  {
    v10 = *((_QWORD *)a1 + 265);
    if ( v10 )
    {
      v9 = HmgShareLockCheck(v10, 5);
      v15 = v9;
    }
    else
    {
      v9 = *(_QWORD *)(v8 + 2528);
    }
  }
  else
  {
    v9 = *((_QWORD *)a1 + 62);
  }
  if ( !v9
    || (*(_DWORD *)(v8 + 40) & 0x20000) != 0 && *(int *)(v9 + 112) < 0
    || (v16 = *(struct _RECTL *)((char *)a2 + 56), (*((_DWORD *)a1 + 9) & 0x5000) == 0x1000)
    || ERECTL::bEmpty((ERECTL *)&v16)
    || (si128 = _mm_load_si128((const __m128i *)&_xmm), ERECTL::bEqual((ERECTL *)&v16, (const struct ERECTL *)&si128))
    || (v12 = -(__int64)((*(_DWORD *)(v11 + 116) & 0x800) != 0),
        si128.m128i_i64[0] = 0LL,
        si128.m128i_i64[1] = *(_QWORD *)((v12 & 0x264) + v11 + 56),
        !ERECTL::bWrapped((ERECTL *)&v16))
    && ERECTL::bContain((ERECTL *)&si128, &v16) )
  {
    v14 = 1;
  }
  else
  {
    DbgkWerCaptureLiveKernelDump(L"win32k.sys", 400LL, 1LL, a1, v13, a2, 0LL, 0LL, 0);
    ERECTL::vOrder((ERECTL *)&v16);
    ERECTL::operator*=(&v16.left, si128.m128i_i32);
    v14 = 0;
    *a3 = v16;
  }
  SURFREF::~SURFREF((SURFREF *)&v15);
  return v14;
}

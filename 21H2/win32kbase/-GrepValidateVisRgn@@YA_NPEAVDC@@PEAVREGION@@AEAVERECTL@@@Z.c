/*
 * XREFs of ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB718
 * Callers:
 *     GreValidateVisrgn @ 0x1C00379D0 (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C0037AB0 (GreSetDCOwnerEx.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C003809C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00280D8 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002B724 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C002DBE0 (HmgShareLockCheck.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00384D4 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C007FCD4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0080294 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bEqual@ERECTL@@QEBAHAEBV1@@Z @ 0x1C00819C4 (-bEqual@ERECTL@@QEBAHAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C013F6E4 (--0SURFREF@@QEAA@XZ.c)
 */

char __fastcall GrepValidateVisRgn(struct DC *a1, struct REGION *a2, struct ERECTL *a3)
{
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // eax
  signed int v12; // r14d
  unsigned int v13; // r11d
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // r8
  int v18; // r9d
  int v19; // r10d
  int v20; // r11d
  char v21; // bl
  _BYTE v22[32]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v23; // [rsp+70h] [rbp+7h]
  __int128 v24; // [rsp+78h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+88h] [rbp+1Fh] BYREF

  if ( (*((_DWORD *)a1 + 9) & 0x100000) == 0 )
    return 1;
  v7 = *((_QWORD *)a1 + 6);
  if ( !v7 || !a2 )
    return 1;
  SURFREF::SURFREF((SURFREF *)v22);
  if ( (*((_DWORD *)a1 + 9) & 0x40000) != 0 )
  {
    v9 = *((_QWORD *)a1 + 266);
    if ( v9 )
    {
      v8 = HmgShareLockCheck(v9, 5);
      v23 = v8;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 2552);
    }
  }
  else
  {
    v8 = *((_QWORD *)a1 + 62);
  }
  if ( !v8 || (*(_DWORD *)(v7 + 40) & 0x20000) != 0 && *(int *)(v8 + 112) < 0 )
    goto LABEL_22;
  v10 = *((_DWORD *)a2 + 24);
  v11 = *((_DWORD *)a1 + 9) & 0x5000;
  v12 = *((_DWORD *)a2 + 26);
  v13 = *((_DWORD *)a2 + 27);
  *(_QWORD *)&v24 = __PAIR64__(*((_DWORD *)a2 + 25), v10);
  *((_QWORD *)&v24 + 1) = __PAIR64__(v13, v12);
  if ( v11 == 4096
    || ERECTL::bEmpty((ERECTL *)&v24)
    || (si128 = _mm_load_si128((const __m128i *)&_xmm), ERECTL::bEqual((ERECTL *)&v24, (const struct ERECTL *)&si128))
    || (v15 = -(__int64)((*(_DWORD *)(v14 + 116) & 0x800) != 0),
        si128.m128i_i64[0] = 0LL,
        si128.m128i_i64[1] = *(_QWORD *)((v15 & 0x264) + v14 + 56),
        !ERECTL::bWrapped((ERECTL *)&v24))
    && v10 >= 0
    && v16 >= v12
    && v19 >= 0
    && v18 >= v20 )
  {
LABEL_22:
    v21 = 1;
  }
  else
  {
    DbgkWerCaptureLiveKernelDump(L"win32k.sys", 400LL, 1LL, a1, v17, a2, 0LL, 0LL, 0);
    ERECTL::vOrder((ERECTL *)&v24);
    ERECTL::operator*=((int *)&v24, si128.m128i_i32);
    v21 = 0;
    *(_OWORD *)a3 = v24;
  }
  SURFREF::~SURFREF((SURFREF *)v22);
  return v21;
}

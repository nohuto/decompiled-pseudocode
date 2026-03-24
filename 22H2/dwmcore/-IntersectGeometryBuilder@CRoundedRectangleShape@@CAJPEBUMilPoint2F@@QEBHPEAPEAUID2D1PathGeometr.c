/*
 * XREFs of ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x1800174EC
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18001735C (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180017820 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::IntersectGeometryBuilder(
        const struct MilPoint2F *a1,
        const int *const a2,
        struct ID2D1PathGeometry **a3,
        char a4)
{
  __int64 v4; // rax
  unsigned int v7; // xmm0_4
  unsigned int v8; // xmm1_4
  __int64 v9; // rax
  int v10; // xmm6_4
  int v11; // xmm7_4
  __int64 v12; // rax
  int v13; // xmm8_4
  int v14; // xmm9_4
  __int64 v15; // rax
  __m128 v16; // xmm10
  __m128 v17; // xmm11
  __int64 v18; // rax
  unsigned int v19; // xmm0_4
  unsigned int v20; // xmm1_4
  __int64 v21; // rax
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm1_4
  __int64 v24; // rax
  int v25; // xmm1_4
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ebx
  int v29; // eax
  unsigned int v30; // ecx
  unsigned int v32; // [rsp+28h] [rbp-A9h]
  __int64 v33; // [rsp+48h] [rbp-89h] BYREF
  struct ID2D1PathGeometry *v34; // [rsp+50h] [rbp-81h] BYREF
  struct ID2D1PathGeometry *v35; // [rsp+58h] [rbp-79h] BYREF
  __int64 v36; // [rsp+60h] [rbp-71h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-69h]
  unsigned __int64 v38; // [rsp+70h] [rbp-61h]
  unsigned __int64 v39; // [rsp+78h] [rbp-59h]
  __int64 v40; // [rsp+80h] [rbp-51h]
  _DWORD v41[4]; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp-39h]

  v4 = *a2;
  v34 = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v7 = *((_DWORD *)a1 + 2 * v4);
  v8 = *((_DWORD *)a1 + 2 * v4 + 1);
  v9 = a2[1];
  v37 = __PAIR64__(v8, v7);
  v10 = *((_DWORD *)a1 + 2 * v9);
  v11 = *((_DWORD *)a1 + 2 * v9 + 1);
  v12 = a2[2];
  v13 = *((_DWORD *)a1 + 2 * v12);
  v14 = *((_DWORD *)a1 + 2 * v12 + 1);
  v15 = a2[3];
  v16 = (__m128)*((unsigned int *)a1 + 2 * v15);
  v17 = (__m128)*((unsigned int *)a1 + 2 * v15 + 1);
  v18 = a2[4];
  v19 = *((_DWORD *)a1 + 2 * v18);
  v20 = *((_DWORD *)a1 + 2 * v18 + 1);
  v21 = a2[5];
  v38 = __PAIR64__(v20, v19);
  v22 = *((_DWORD *)a1 + 2 * v21);
  v23 = *((_DWORD *)a1 + 2 * v21 + 1);
  v24 = a2[6];
  v39 = __PAIR64__(v23, v22);
  v25 = *((_DWORD *)a1 + 2 * v24 + 1);
  LODWORD(v40) = *((_DWORD *)a1 + 2 * v24);
  HIDWORD(v40) = v25;
  v26 = (*(__int64 (__fastcall **)(void *, struct ID2D1PathGeometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
          g_DeviceManager,
          &v34);
  v28 = v26;
  if ( v26 < 0 )
  {
    v32 = 350;
    goto LABEL_19;
  }
  v29 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v34 + 136LL))(v34, &v33);
  v28 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x160u, 0LL);
    goto LABEL_10;
  }
  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v33 + 40LL))(v33, v37, 0LL);
  v41[0] = v10;
  v41[1] = v11;
  v41[2] = v13;
  v41[3] = v14;
  v42 = _mm_unpacklo_ps(v16, v17).m128_u64[0];
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v33 + 88LL))(v33, v41);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v33 + 80LL))(v33, v38);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v33 + 80LL))(v33, v39);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 80LL))(v33, v40);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 64LL))(v33, 1LL);
  v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 72LL))(v33);
  v28 = v26;
  if ( v26 < 0 )
  {
    v32 = 362;
    goto LABEL_19;
  }
  if ( a4 )
  {
    *a3 = v34;
    v34 = 0LL;
    goto LABEL_10;
  }
  v26 = (*(__int64 (__fastcall **)(void *, struct ID2D1PathGeometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
          g_DeviceManager,
          &v35);
  v28 = v26;
  if ( v26 < 0 )
  {
    v32 = 374;
    goto LABEL_19;
  }
  v26 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v35 + 136LL))(v35, &v36);
  v28 = v26;
  if ( v26 < 0 )
  {
    v32 = 375;
    goto LABEL_19;
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry *, __int64, _QWORD, _DWORD, __int64))(*(_QWORD *)*a3 + 88LL))(
          *a3,
          v34,
          1LL,
          0LL,
          0,
          v36);
  v28 = v26;
  if ( v26 < 0 )
  {
    v32 = 384;
    goto LABEL_19;
  }
  v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 72LL))(v36);
  v28 = v26;
  if ( v26 < 0 )
  {
    v32 = 386;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, v32, 0LL);
    goto LABEL_10;
  }
  ReleaseInterface<ID2D1Geometry>(a3);
  *a3 = v35;
  v35 = 0LL;
LABEL_10:
  ReleaseInterface<ID2D1Geometry>(&v34);
  ReleaseInterface<ID2D1Geometry>(&v33);
  ReleaseInterface<ID2D1Geometry>(&v35);
  ReleaseInterface<ID2D1Geometry>(&v36);
  return v28;
}

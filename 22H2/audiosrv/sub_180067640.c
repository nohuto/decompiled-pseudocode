/*
 * XREFs of sub_180067640 @ 0x180067640
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_18012923C @ 0x18012923C (sub_18012923C.c)
 *     sub_18012952C @ 0x18012952C (sub_18012952C.c)
 *     sub_18012979C @ 0x18012979C (sub_18012979C.c)
 *     sub_180129A0C @ 0x180129A0C (sub_180129A0C.c)
 *     sub_180129C00 @ 0x180129C00 (sub_180129C00.c)
 *     sub_18012A068 @ 0x18012A068 (sub_18012A068.c)
 *     sub_18012A1A4 @ 0x18012A1A4 (sub_18012A1A4.c)
 *     sub_18012BA50 @ 0x18012BA50 (sub_18012BA50.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180067640(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // [rsp+40h] [rbp-19h] BYREF
  __int64 v26; // [rsp+48h] [rbp-11h] BYREF
  __int64 v27; // [rsp+50h] [rbp-9h] BYREF
  int v28; // [rsp+58h] [rbp-1h] BYREF
  __int64 v29; // [rsp+60h] [rbp+7h]
  __int128 v30; // [rsp+68h] [rbp+Fh] BYREF

  v29 = -2LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( !a2 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v25 = 0xC380070057LL;
      v26 = (__int64)"SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      sub_180109778((int)&dword_18019C480, (__int64)&v26, (__int64)&v25 + 4, (__int64)&v25);
    }
    v10 = -2147024809;
    goto LABEL_73;
  }
  v30 = xmmword_18015B730;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 24LL))(*(_QWORD *)(a1 + 96));
  v10 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_73;
    LODWORD(v25) = 201;
LABEL_17:
    HIDWORD(v25) = v9;
    v26 = (__int64)"SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    sub_180109778((int)&dword_18019C480, (__int64)&v26, (__int64)&v25, (__int64)&v25 + 4);
    goto LABEL_73;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 96) + 32LL))(*(_QWORD *)(a1 + 96), &v28);
  v10 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_73;
    LODWORD(v25) = 204;
    goto LABEL_17;
  }
  if ( v28 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 96) + 48LL))(*(_QWORD *)(a1 + 96), &v30);
    v10 = v9;
    if ( v9 < 0 )
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        LODWORD(v25) = 209;
        goto LABEL_17;
      }
LABEL_73:
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88));
      goto LABEL_11;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88));
  if ( !v28 && !*(_DWORD *)a2 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88));
    goto LABEL_10;
  }
  v26 = 0LL;
  v13 = v30;
  if ( !(_QWORD)v30 )
    v13 = *((_QWORD *)&v30 + 1);
  if ( !v13 )
    v30 = *(_OWORD *)(a2 + 12);
  sub_1800461B8(&v26);
  v15 = sub_18012BA50(&v30, v14, &v26);
  v10 = v15;
  if ( v15 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      HIDWORD(v25) = v15;
      LODWORD(v25) = 229;
LABEL_71:
      v27 = (__int64)"SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      sub_180109778((int)&dword_18019C480, (__int64)&v27, (__int64)&v25, (__int64)&v25 + 4);
      goto LABEL_72;
    }
    goto LABEL_72;
  }
  v16 = v30;
  v17 = v30 - 0x4831B846B53D940CLL;
  if ( (_QWORD)v30 == 0x4831B846B53D940CLL )
    v17 = *((_QWORD *)&v30 + 1) + 0x5FDA4846FD2E8961LL;
  if ( !v17 )
  {
    v18 = sub_18012A1A4(a1, v26);
LABEL_59:
    v10 = v18;
    goto LABEL_64;
  }
  v19 = v30 - 0x4E35FA3EA289735DLL;
  if ( (_QWORD)v30 == 0x4E35FA3EA289735DLL )
    v19 = *((_QWORD *)&v30 + 1) + 0x184D536907498263LL;
  if ( !v19 )
  {
    v18 = sub_18012952C(a1, v26);
    goto LABEL_59;
  }
  v20 = v30 - 0x49BF38751459AC38LL;
  if ( (_QWORD)v30 == 0x49BF38751459AC38LL )
    v20 = *((_QWORD *)&v30 + 1) - 0x5D394D0FE80F59BBLL;
  if ( !v20 )
  {
    v18 = sub_18012923C(a1, v26);
    goto LABEL_59;
  }
  v21 = v30 - 0x4AD9C8EF4C81E564LL;
  if ( (_QWORD)v30 == 0x4AD9C8EF4C81E564LL )
    v21 = *((_QWORD *)&v30 + 1) + 0x6FC8AC6A0661D361LL;
  if ( !v21 )
  {
    v18 = sub_18012979C(a1, v26);
    goto LABEL_59;
  }
  v22 = v30 - 0x4C2C8DC04444ACB0LL;
  if ( (_QWORD)v30 == 0x4C2C8DC04444ACB0LL )
    v22 = *((_QWORD *)&v30 + 1) + 0x79F0B82489D32760LL;
  if ( !v22 )
  {
    v18 = sub_180129A0C(a1, v26);
    goto LABEL_59;
  }
  v23 = v30 - 0x404AAC4CADAFD3C6LL;
  if ( (_QWORD)v30 == 0x404AAC4CADAFD3C6LL )
    v23 = *((_QWORD *)&v30 + 1) - 0x640506E915966A83LL;
  if ( !v23 )
  {
    v18 = sub_180129C00(a1, v26);
    goto LABEL_59;
  }
  v24 = v30 - 0x4AD4CAFB1304D643LL;
  if ( (_QWORD)v30 == 0x4AD4CAFB1304D643LL )
    v24 = *((_QWORD *)&v30 + 1) + 0x1CA37F27E6527B41LL;
  if ( !v24 )
  {
    v18 = sub_18012A068(a1, v26);
    goto LABEL_59;
  }
  if ( !(_QWORD)v30 )
    v16 = *((_QWORD *)&v30 + 1);
  if ( v16 || *(_DWORD *)a2 )
  {
    v10 = -2147418113;
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v25 = 0x8000FFFF0000010CuLL;
      goto LABEL_71;
    }
LABEL_72:
    sub_1800461B8(&v26);
    goto LABEL_73;
  }
LABEL_64:
  sub_1800461B8(&v26);
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      HIDWORD(v25) = v10;
      LODWORD(v25) = 272;
      v27 = (__int64)"SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      sub_180109778((int)&dword_18019C480, (__int64)&v27, (__int64)&v25, (__int64)&v25 + 4);
    }
    goto LABEL_73;
  }
LABEL_10:
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 88) + 64LL))(
          *(_QWORD *)(a1 + 88),
          a2,
          a3,
          a4);
  v10 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      HIDWORD(v25) = v11;
      LODWORD(v25) = 275;
      v27 = (__int64)"SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      sub_180109778((int)&dword_18019C480, (__int64)&v27, (__int64)&v25, (__int64)&v25 + 4);
    }
    goto LABEL_73;
  }
LABEL_11:
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88));
  return (unsigned int)v10;
}

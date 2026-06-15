/*
 * XREFs of sub_180129E00 @ 0x180129E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
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
__int64 __fastcall sub_180129E00(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+20h] BYREF
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  __int64 v22; // [rsp+88h] [rbp+38h] BYREF

  v19[1] = -2LL;
  v22 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v4 )
    LeaveCriticalSection(v4);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88));
  sub_1800461B8(&v22);
  v6 = sub_18012BA50(a2, v5, &v22);
  v9 = v6;
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v20) = v6;
      LODWORD(v21) = 138;
LABEL_38:
      v19[0] = (__int64)"SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder";
      sub_180109778((__int64)&dword_18019C480, byte_18016C0FA, v7, v8, (const CHAR **)v19, (__int64)&v21, (__int64)&v20);
      goto LABEL_39;
    }
    goto LABEL_39;
  }
  v10 = *a2 - 0x4831B846B53D940CLL;
  if ( *a2 == 0x4831B846B53D940CLL )
    v10 = a2[1] + 0x5FDA4846FD2E8961LL;
  if ( !v10 )
  {
    v11 = sub_18012A1A4(a1, v22);
LABEL_34:
    v9 = v11;
    goto LABEL_35;
  }
  v12 = *a2 - 0x4E35FA3EA289735DLL;
  if ( *a2 == 0x4E35FA3EA289735DLL )
    v12 = a2[1] + 0x184D536907498263LL;
  if ( !v12 )
  {
    v11 = sub_18012952C(a1, v22);
    goto LABEL_34;
  }
  v13 = *a2 - 0x49BF38751459AC38LL;
  if ( *a2 == 0x49BF38751459AC38LL )
    v13 = a2[1] - 0x5D394D0FE80F59BBLL;
  if ( !v13 )
  {
    v11 = sub_18012923C(a1, v22);
    goto LABEL_34;
  }
  v14 = *a2 - 0x4AD9C8EF4C81E564LL;
  if ( *a2 == 0x4AD9C8EF4C81E564LL )
    v14 = a2[1] + 0x6FC8AC6A0661D361LL;
  if ( !v14 )
  {
    v11 = sub_18012979C(a1, v22);
    goto LABEL_34;
  }
  v15 = *a2 - 0x4C2C8DC04444ACB0LL;
  if ( *a2 == 0x4C2C8DC04444ACB0LL )
    v15 = a2[1] + 0x79F0B82489D32760LL;
  if ( !v15 )
  {
    v11 = sub_180129A0C(a1, v22);
    goto LABEL_34;
  }
  v16 = *a2 - 0x404AAC4CADAFD3C6LL;
  if ( *a2 == 0x404AAC4CADAFD3C6LL )
    v16 = a2[1] - 0x640506E915966A83LL;
  if ( !v16 )
  {
    v11 = sub_180129C00(a1, v22);
    goto LABEL_34;
  }
  v17 = *a2 - 0x4AD4CAFB1304D643LL;
  if ( *a2 == 0x4AD4CAFB1304D643LL )
    v17 = a2[1] + 0x1CA37F27E6527B41LL;
  if ( !v17 )
  {
    v11 = sub_18012A068(a1, v22);
    goto LABEL_34;
  }
LABEL_35:
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v20) = v9;
      LODWORD(v21) = 175;
      goto LABEL_38;
    }
LABEL_39:
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88));
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88));
  sub_1800461B8(&v22);
  return (unsigned int)v9;
}

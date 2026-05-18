/*
 * XREFs of sub_1800F6930 @ 0x1800F6930
 * Callers:
 *     sub_1800F8650 @ 0x1800F8650 (sub_1800F8650.c)
 *     sub_1800F89F0 @ 0x1800F89F0 (sub_1800F89F0.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     sub_1800F6850 @ 0x1800F6850 (sub_1800F6850.c)
 *     sub_1800F6C10 @ 0x1800F6C10 (sub_1800F6C10.c)
 *     sub_1800F6CBC @ 0x1800F6CBC (sub_1800F6CBC.c)
 *     sub_1800F6D68 @ 0x1800F6D68 (sub_1800F6D68.c)
 *     sub_1800F6FC4 @ 0x1800F6FC4 (sub_1800F6FC4.c)
 *     sub_1801152FC @ 0x1801152FC (sub_1801152FC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     memset @ 0x18011E09A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_1800F6930(__int64 a1, _QWORD *a2, __int64 *a3, _QWORD *a4)
{
  void *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  void (__fastcall ***v19)(_QWORD, __int64); // rcx
  __int64 *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  void (__fastcall ***v26)(_QWORD, __int64); // rcx
  struct _Mtx_internal_imp_t *v27; // rbx
  int v28; // eax
  _QWORD *v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  char v33; // [rsp+30h] [rbp-D0h]
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v36; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v38; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v39; // [rsp+80h] [rbp-80h]
  _QWORD *v40; // [rsp+88h] [rbp-78h]
  char v41[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v42[5]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+C0h] [rbp-40h] BYREF
  char v44[240]; // [rsp+100h] [rbp+0h] BYREF

  v39 = a2;
  v40 = a4;
  *(_OWORD *)a2 = 0LL;
  v8 = operator new(0xB0uLL);
  v10 = (__int64)v8;
  if ( v8 )
  {
    memset(v8, 0, 0xB0uLL);
    v36 = &v34;
    v11 = *a4;
    *a4 = 0LL;
    v34 = v11;
    v12 = sub_1800F6FC4(v44, a3);
    v8 = (void *)sub_1800F6850(v10, v12, &v34);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  LOBYTE(v9) = v33;
  sub_1800F6D68(a2, v8, v9);
  v13 = *a2;
  *(_QWORD *)(v13 + 8) = *(_QWORD *)(***(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 136))(
                                      *(_QWORD *)(a1 + 136),
                                      v41);
  v14 = *a3;
  if ( *a3 )
  {
    v37 = 0LL;
    v15 = a3[1];
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v14 = *a3;
      v15 = a3[1];
    }
    *(_QWORD *)&v37 = v14;
    *((_QWORD *)&v37 + 1) = v15;
    v16 = (__int64 *)sub_1800F6C10(&v35, &v37);
    v17 = *a2;
    v18 = *v16;
    *v16 = 0LL;
    v19 = *(void (__fastcall ****)(_QWORD, __int64))(v17 + 32);
    *(_QWORD *)(v17 + 32) = v18;
    if ( v19 )
      (**v19)(v19, 1LL);
    v20 = v35;
  }
  else
  {
    v21 = a3[2];
    if ( !v21 )
      goto LABEL_28;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    v38 = 0LL;
    v22 = a3[3];
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
      v22 = a3[3];
    }
    *(_QWORD *)&v38 = a3[2];
    *((_QWORD *)&v38 + 1) = v22;
    v23 = (__int64 *)sub_1800F6CBC(&v36, &v38);
    v24 = *a2;
    v25 = *v23;
    *v23 = 0LL;
    v26 = *(void (__fastcall ****)(_QWORD, __int64))(v24 + 32);
    *(_QWORD *)(v24 + 32) = v25;
    if ( v26 )
      (**v26)(v26, 1LL);
    v20 = v36;
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64 *, __int64))*v20)(v20, 1LL);
  v27 = (struct _Mtx_internal_imp_t *)(a1 + 56);
  v28 = Mtx_lock((_Mtx_t)(a1 + 56));
  if ( v28 )
  {
    std::_Throw_C_error(v28);
    JUMPOUT(0x1800F6C0ELL);
  }
  v29 = *(_QWORD **)(a1 + 32);
  if ( *(_QWORD **)(a1 + 40) == v29 )
  {
    sub_180010F3C((_QWORD *)(a1 + 24), v29, a2);
  }
  else
  {
    *v29 = 0LL;
    v29[1] = 0LL;
    v30 = a2[1];
    if ( v30 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
      v27 = (struct _Mtx_internal_imp_t *)(a1 + 56);
    }
    *v29 = *a2;
    v29[1] = a2[1];
    *(_QWORD *)(a1 + 32) += 16LL;
  }
  v31 = Mtx_unlock(v27);
  if ( v31 )
  {
    std::_Throw_C_error(v31);
LABEL_28:
    sub_18000FD48(v42);
    sub_1801152FC(pExceptionObject, v42, 0LL);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  if ( *a4 )
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a4 + 8LL))(*a4, 1LL);
  return a2;
}

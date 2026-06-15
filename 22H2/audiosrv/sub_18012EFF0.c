/*
 * XREFs of sub_18012EFF0 @ 0x18012EFF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18012EFF0(__int64 a1, int a2, unsigned __int16 *a3, unsigned __int16 *a4, _QWORD *a5)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  void *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // r15d
  int v18; // r12d
  unsigned __int16 *v19; // rax
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF

  v8 = 0LL;
  v24 = 0LL;
  v9 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v10 = 0LL;
  v23[0] = 0LL;
  if ( a3 )
  {
    v13 = sub_18001F490(a3, (unsigned int)a3[8] + 18, &v24, 0.0, 1);
    v8 = v24;
    if ( v13 < 0 )
      goto LABEL_17;
  }
  if ( a4 && (v13 = sub_18001F490(a4, (unsigned int)a4[8] + 18, &v21, 0.0, 1), v9 = v21, v13 < 0)
    || ((v14 = a1 + 8, v15 = *(_QWORD *)(a1 + 8), a2)
      ? (v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(v15 + 64))(v14, v8, v9, &v22))
      : (v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(v15 + 56))(v14, v8, v9, &v22)),
        v13 = v16,
        v17 = v16,
        v16 < 0) )
  {
LABEL_17:
    if ( (unsigned int)dword_18019C4B8 > 2 )
    {
      LODWORD(v24) = v13;
      LODWORD(v21) = 231;
      v23[0] = (__int64)"CAPOWrapperSrv::IsAudioFormatSupportedRemote";
      sub_180109778(
        (__int64)&dword_18019C4B8,
        byte_18016C251,
        v11,
        v12,
        (const CHAR **)v23,
        (__int64)&v21,
        (__int64)&v24);
    }
    goto LABEL_19;
  }
  v18 = v16;
  if ( !v22 )
    goto LABEL_14;
  v19 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
  if ( !v19 )
  {
    v13 = -2004287480;
    goto LABEL_17;
  }
  v13 = sub_180048714(v19, v23);
  if ( v13 < 0 )
  {
    v10 = (void *)v23[0];
    goto LABEL_17;
  }
  *a5 = v23[0];
LABEL_14:
  if ( !v18 )
    v17 = v13;
  v13 = v17;
  if ( v17 < 0 )
    goto LABEL_17;
LABEL_19:
  CoTaskMemFree(v10);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v13;
}

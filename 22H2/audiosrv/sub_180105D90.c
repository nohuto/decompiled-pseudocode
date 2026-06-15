/*
 * XREFs of sub_180105D90 @ 0x180105D90
 * Callers:
 *     sub_1801060DC @ 0x1801060DC (sub_1801060DC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801061E8 @ 0x1801061E8 (sub_1801061E8.c)
 *     sub_1801068FC @ 0x1801068FC (sub_1801068FC.c)
 *     sub_180106B20 @ 0x180106B20 (sub_180106B20.c)
 *     sub_1801089FC @ 0x1801089FC (sub_1801089FC.c)
 *     sub_18010B9A0 @ 0x18010B9A0 (sub_18010B9A0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180105D90(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 result; // rax
  ATL::CAtlException *v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-98h] BYREF
  _OWORD v15[3]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v16; // [rsp+80h] [rbp-58h]
  __int64 v17; // [rsp+88h] [rbp-50h]
  __int64 v18; // [rsp+90h] [rbp-48h]
  __int64 v19; // [rsp+98h] [rbp-40h]
  __int64 v20; // [rsp+A0h] [rbp-38h]
  char v21; // [rsp+A8h] [rbp-30h]
  char v22[8]; // [rsp+B0h] [rbp-28h] BYREF
  ATL::CAtlException *v23; // [rsp+B8h] [rbp-20h] BYREF
  __int64 v25; // [rsp+F8h] [rbp+20h] BYREF

  v3 = a3;
  v5 = 0LL;
  v12 = 0LL;
  v6 = sub_1801068FC();
  sub_1801061E8(&v12, v6);
  v7 = v12;
  if ( !v12 )
    goto LABEL_11;
  v14 = v12;
  if ( sub_180106B20(a1, (unsigned int)&v14, (unsigned int)&v13, (unsigned int)&v25, (__int64)v22) )
    goto LABEL_11;
  try
  {
    memset(v15, 0, sizeof(v15));
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0;
    v13 = 0LL;
    v25 = v7;
    v9 = sub_1801089FC(a1, &v25, v15);
    v13 = v9;
  }
  catch ( ATL::CAtlException *v23 )
  {
    v11 = v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      o__resetstkoflw();
    LODWORD(v25) = *(_DWORD *)v11;
    v7 = v12;
    if ( (int)v25 >= 0 )
    {
      v3 = a3;
      v9 = v13;
      goto LABEL_6;
    }
    v5 = 0LL;
LABEL_9:
    sub_18010B9A0(v15);
    if ( *(_QWORD *)&v15[0] )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v15[0] + 16LL))(*(_QWORD *)&v15[0]);
LABEL_11:
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    result = v5;
  }
LABEL_6:
  v5 = v9 + 8;
  if ( v3 )
    *v3 = v9;
  goto LABEL_9;
}

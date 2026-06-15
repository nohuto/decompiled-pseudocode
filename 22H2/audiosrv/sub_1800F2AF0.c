/*
 * XREFs of sub_1800F2AF0 @ 0x1800F2AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C5F0 @ 0x18000C5F0 (sub_18000C5F0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C28E0 @ 0x1800C28E0 (sub_1800C28E0.c)
 *     sub_1800F2320 @ 0x1800F2320 (sub_1800F2320.c)
 *     sub_18013A4D4 @ 0x18013A4D4 (sub_18013A4D4.c)
 */

__int64 __fastcall sub_1800F2AF0(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // edi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  int v14; // esi
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // r14
  _QWORD *v20; // rdx
  unsigned __int64 v21; // rcx
  int v22; // r12d
  __int64 v23; // rbx
  bool v24; // al
  int v25; // ecx
  bool v26; // al
  __int64 v28; // [rsp+28h] [rbp-D8h]
  __int64 v29; // [rsp+28h] [rbp-D8h]
  int v30; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v31; // [rsp+48h] [rbp-B8h]
  _QWORD *v32; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-A8h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  int v35; // [rsp+68h] [rbp-98h]
  _QWORD *v36; // [rsp+70h] [rbp-90h]
  _WORD v37[462]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+41Ch] [rbp+31Ch] BYREF
  int v39; // [rsp+424h] [rbp+324h]
  _WORD v40[462]; // [rsp+430h] [rbp+330h] BYREF
  __int64 v41; // [rsp+7CCh] [rbp+6CCh] BYREF
  int v42; // [rsp+7D4h] [rbp+6D4h]

  v4 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0;
  if ( a2 && a3 && a4 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( !(unsigned __int8)sub_18013A4D4(&v32, *(_QWORD *)(v8 + 208)) )
      sub_1800B8610(-2147024882);
    v9 = *(_QWORD *)(v8 + 208);
    v10 = *(_QWORD *)(v8 + 200);
    v11 = (__int64)v32;
    if ( v9 )
    {
      v12 = v32;
      v13 = v10 - (_QWORD)v32;
      do
      {
        *v12 = *(_QWORD *)((char *)v12 + v13);
        ++v12;
        --v9;
      }
      while ( v9 );
    }
    v14 = 0;
    if ( v33 )
    {
      v39 = -1;
      v38 = 0LL;
      memset(v37, 0, sizeof(v37));
      v42 = -1;
      v41 = 0LL;
      memset(v40, 0, sizeof(v40));
      v14 = sub_18000C5F0(v15, a2, v37, v16, (__int64)&v37[201], v28, &v38);
      if ( v14 >= 0 )
      {
        v14 = sub_18000C5F0(v17, a3, v40, v18, (__int64)&v40[201], v29, &v41);
        if ( v14 >= 0 )
        {
          v19 = 0LL;
          if ( !v33 )
            goto LABEL_23;
          while ( 1 )
          {
            v20 = *(_QWORD **)(v11 + 8 * v19);
            v21 = 0LL;
            v36 = v20;
            v22 = 0;
            v30 = 0;
            v31 = 0LL;
            if ( v20[1] )
            {
              do
              {
                v23 = *(_QWORD *)(*v20 + 8 * v21);
                v24 = sub_1800F2320((__int64)v37, v23);
                v25 = v30;
                if ( v24 )
                  v25 = 1;
                v30 = v25;
                v26 = sub_1800F2320((__int64)v40, v23);
                v20 = v36;
                if ( v26 )
                  v22 = 1;
                v21 = v31 + 1;
                v31 = v21;
              }
              while ( v21 < v36[1] );
              if ( v30 )
              {
                if ( v22 )
                  v4 = 1;
                goto LABEL_23;
              }
              if ( v22 )
                goto LABEL_23;
              v11 = (__int64)v32;
            }
            if ( ++v19 >= v33 )
              goto LABEL_23;
          }
        }
      }
      if ( v14 == -2147467262 )
      {
        *a4 = 0;
        v14 = 0;
      }
    }
    else
    {
LABEL_23:
      *a4 = v4;
    }
  }
  else
  {
    v14 = -2147024809;
  }
  sub_1800C28E0((__int64 *)&v32);
  return (unsigned int)v14;
}

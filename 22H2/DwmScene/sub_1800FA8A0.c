/*
 * XREFs of sub_1800FA8A0 @ 0x1800FA8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180013E28 @ 0x180013E28 (sub_180013E28.c)
 *     sub_180013E8C @ 0x180013E8C (sub_180013E8C.c)
 *     sub_180013EF0 @ 0x180013EF0 (sub_180013EF0.c)
 *     sub_180013F64 @ 0x180013F64 (sub_180013F64.c)
 *     sub_1800194D4 @ 0x1800194D4 (sub_1800194D4.c)
 *     sub_18007FF4C @ 0x18007FF4C (sub_18007FF4C.c)
 *     sub_180080974 @ 0x180080974 (sub_180080974.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_180087518 @ 0x180087518 (sub_180087518.c)
 *     sub_180087B70 @ 0x180087B70 (sub_180087B70.c)
 *     sub_180088338 @ 0x180088338 (sub_180088338.c)
 *     sub_180088F54 @ 0x180088F54 (sub_180088F54.c)
 *     sub_1800959C0 @ 0x1800959C0 (sub_1800959C0.c)
 *     sub_1800AA0B8 @ 0x1800AA0B8 (sub_1800AA0B8.c)
 *     sub_1800AA10C @ 0x1800AA10C (sub_1800AA10C.c)
 *     sub_1800AC5F0 @ 0x1800AC5F0 (sub_1800AC5F0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall sub_1800FA8A0(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  char v4; // r15
  __int64 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rdx
  signed __int32 v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rbx
  _OWORD *v13; // rax
  float *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rbx
  __int128 v23; // [rsp+28h] [rbp-E0h]
  __int128 v24; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v27; // [rsp+60h] [rbp-A8h] BYREF
  float v28; // [rsp+70h] [rbp-98h]
  __int64 v29[4]; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v30; // [rsp+98h] [rbp-70h]
  __int64 *v31; // [rsp+A0h] [rbp-68h]
  __int64 *v32; // [rsp+A8h] [rbp-60h]
  __int64 *v33; // [rsp+B0h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v35; // [rsp+C0h] [rbp-48h]
  __int128 v36; // [rsp+C8h] [rbp-40h]
  __int128 v37; // [rsp+D8h] [rbp-30h]
  __int128 v38; // [rsp+E8h] [rbp-20h]
  __int128 v39; // [rsp+F8h] [rbp-10h]
  float v40; // [rsp+108h] [rbp+0h]
  float v41; // [rsp+10Ch] [rbp+4h]
  __int128 v42; // [rsp+118h] [rbp+10h] BYREF
  __int128 v43; // [rsp+128h] [rbp+20h]
  __int128 v44; // [rsp+138h] [rbp+30h] BYREF
  __int128 v45; // [rsp+148h] [rbp+40h] BYREF
  __int128 v46; // [rsp+158h] [rbp+50h] BYREF
  int v47; // [rsp+168h] [rbp+60h]
  int v48; // [rsp+16Ch] [rbp+64h]
  __int64 v49[4]; // [rsp+170h] [rbp+68h] BYREF
  __int128 v50; // [rsp+190h] [rbp+88h] BYREF
  __int64 v51; // [rsp+1A0h] [rbp+98h]
  _OWORD v52[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  _OWORD v53[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v54; // [rsp+208h] [rbp+100h]
  __int128 v55; // [rsp+218h] [rbp+110h]
  _OWORD v56[4]; // [rsp+228h] [rbp+120h] BYREF
  _DWORD v57[24]; // [rsp+268h] [rbp+160h] BYREF
  __int64 v58; // [rsp+2C8h] [rbp+1C0h] BYREF

  if ( *(_BYTE *)(a1 + 1953) )
  {
    v43 = 0LL;
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 )
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)(v2 + 8);
        if ( !v3 )
          break;
        if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) )
        {
          v43 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v41 = 3.4028235e38;
    v40 = -3.4028235e38;
    v4 = 0;
    v5 = (__int64 *)sub_1800AA0B8(a1);
    v6 = *v5;
    v7 = v5[1];
    if ( *v5 != v7 )
    {
      v8 = v43;
      do
      {
        v49[2] = 0LL;
        v49[3] = 0LL;
        sub_18001269C(v49, v6);
        v45 = 0LL;
        v29[2] = 0LL;
        v29[3] = 0LL;
        sub_18001269C(v29, (__int64)v49);
        v23 = 0LL;
        v9 = *(_QWORD *)(v8 + 80);
        if ( v9 )
        {
          while ( 1 )
          {
            v10 = *(_DWORD *)(v9 + 8);
            if ( !v10 )
              break;
            if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
            {
              v23 = *(_OWORD *)(v8 + 72);
              break;
            }
          }
        }
        sub_180087518(v23, (__int64 *)&v45, v29);
        if ( *((_QWORD *)&v23 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (***((void (__fastcall ****)(_QWORD))&v23 + 1))(*((_QWORD *)&v23 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 12LL), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
          }
        }
        if ( sub_180088338(v45) )
        {
          v44 = 0LL;
          sub_180087B70(v45, &v44);
          v42 = 0LL;
          if ( *((_QWORD *)&v44 + 1) )
            _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL));
          v42 = v44;
          if ( (_QWORD)v44 )
          {
            v11 = v42;
            while ( 1 )
            {
              if ( *(_DWORD *)(a1 + 1960) == 1 )
                goto LABEL_28;
              sub_1800839A4(v11);
              if ( (*(_DWORD *)(v11 + 448) & 0x10000) != 0 )
                break;
LABEL_51:
              v17 = sub_18007FF4C(v44, &v34, (__int64 *)&v42);
              std::shared_ptr<__ExceptionPtr>::operator=(&v42, v17);
              v18 = v35;
              if ( v35 )
              {
                if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
                  if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
                }
              }
              v11 = v42;
              if ( !(_QWORD)v42 )
                goto LABEL_56;
            }
            v11 = v42;
LABEL_28:
            v25 = 0LL;
            sub_1800839A4(v11);
            v26 = 0LL;
            v30 = *(__int64 **)(v11 + 384);
            v31 = *(__int64 **)(v11 + 376);
            sub_180013F64(&v26, v31, v30, 0);
            if ( v26 == *(__int64 **)(v11 + 384) )
              v25 = 0LL;
            else
              sub_180013E28((__int64 *)&v25, v26);
            v24 = 0LL;
            v12 = v42;
            sub_1800839A4(v42);
            v27 = 0LL;
            v32 = *(__int64 **)(v12 + 384);
            v33 = *(__int64 **)(v12 + 376);
            sub_180013EF0(&v27, v33, v32, 0);
            if ( v27 == *(__int64 **)(v12 + 384) )
              v24 = 0LL;
            else
              sub_180013E8C((__int64 *)&v24, v27);
            if ( (_QWORD)v25 && (_QWORD)v24 )
            {
              v50 = *(_OWORD *)(v25 + 88);
              v51 = *(_QWORD *)(v25 + 104);
              v46 = xmmword_1801C6AC0;
              v47 = 1065353216;
              v48 = 1065353216;
              v13 = (_OWORD *)sub_1800AA10C(a1, 0, 1);
              v52[0] = *v13;
              v52[1] = v13[1];
              v52[2] = v13[2];
              v52[3] = v13[3];
              sub_180080974(v42, v56);
              sub_1800194D4((__int64)v53, v56, v52);
              v36 = v53[0];
              v37 = v53[1];
              v38 = v54;
              v39 = v55;
              sub_180088F54((unsigned __int64 *)&v50, &v46, *(double *)&v54, *(double *)&v55);
              sub_1800959C0((unsigned __int64 *)&v46, v57);
              v14 = (float *)v57;
              do
              {
                v28 = v14[2];
                if ( (float)-v28 > v40 )
                  v40 = -v28;
                if ( v41 > (float)-v28 )
                  v41 = -v28;
                v14 += 3;
              }
              while ( v14 != (float *)&v58 );
              v4 = 1;
            }
            if ( *((_QWORD *)&v24 + 1) )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v24 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                v15 = *((_QWORD *)&v24 + 1);
                (***((void (__fastcall ****)(_QWORD))&v24 + 1))(*((_QWORD *)&v24 + 1));
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v24 + 1) + 8LL))(*((_QWORD *)&v24 + 1));
              }
            }
            if ( *((_QWORD *)&v25 + 1) )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                v16 = *((_QWORD *)&v25 + 1);
                (***((void (__fastcall ****)(_QWORD))&v25 + 1))(*((_QWORD *)&v25 + 1));
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
              }
            }
            goto LABEL_51;
          }
LABEL_56:
          v19 = (volatile signed __int32 *)*((_QWORD *)&v42 + 1);
          if ( *((_QWORD *)&v42 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
              if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            }
          }
          v20 = (volatile signed __int32 *)*((_QWORD *)&v44 + 1);
          if ( *((_QWORD *)&v44 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
              if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            }
          }
        }
        v21 = (volatile signed __int32 *)*((_QWORD *)&v45 + 1);
        if ( *((_QWORD *)&v45 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          }
        }
        unknown_libname_101(v49);
        v6 += 32LL;
      }
      while ( v6 != v7 );
      if ( v4 )
      {
        if ( (unsigned int)(*(_DWORD *)(a1 + 316) - 1) <= 1 )
        {
          v41 = fmaxf(0.001, v41);
          v40 = fmaxf(0.001, v40);
        }
        if ( fabs(v40 - v41) > 0.0000099999997 )
        {
          if ( v41 != *(float *)(a1 + 320) )
          {
            *(float *)(a1 + 320) = v41;
            sub_1800AC5F0(a1, 2);
          }
          if ( v40 != *(float *)(a1 + 324) )
          {
            *(float *)(a1 + 324) = v40;
            sub_1800AC5F0(a1, 2);
          }
        }
      }
    }
    if ( *((_QWORD *)&v43 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v43 + 1) + 8LL)) )
    {
      v22 = *((_QWORD *)&v43 + 1);
      (***((void (__fastcall ****)(_QWORD))&v43 + 1))(*((_QWORD *)&v43 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v22 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v43 + 1) + 8LL))(*((_QWORD *)&v43 + 1));
    }
  }
}

/*
 * XREFs of sub_180066684 @ 0x180066684
 * Callers:
 *     sub_1800670F0 @ 0x1800670F0 (sub_1800670F0.c)
 * Callees:
 *     sub_180012AA8 @ 0x180012AA8 (sub_180012AA8.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180063D50 @ 0x180063D50 (sub_180063D50.c)
 *     sub_180063DE0 @ 0x180063DE0 (sub_180063DE0.c)
 *     sub_180063E88 @ 0x180063E88 (sub_180063E88.c)
 *     sub_180064680 @ 0x180064680 (sub_180064680.c)
 *     sub_180064B64 @ 0x180064B64 (sub_180064B64.c)
 *     sub_180067D38 @ 0x180067D38 (sub_180067D38.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180066684(__int64 a1)
{
  int v2; // r13d
  _QWORD *v3; // rax
  __int64 v4; // r14
  __int64 i; // r12
  __int64 *v6; // rdi
  __int64 *v7; // rbx
  int v8; // ecx
  double v9; // xmm6_8
  double *v10; // rax
  void **v11; // rdx
  const void *v12; // rcx
  size_t v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 *j; // rax
  __int64 *k; // rcx
  __int64 *v19; // rdi
  __int64 *v20; // rbx
  _QWORD *v21; // rax
  __int64 *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int128 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 **v29; // rax
  __int64 *m; // rax
  __int64 *n; // rcx
  int v33; // [rsp+38h] [rbp-59h] BYREF
  _QWORD Src[3]; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-39h]
  __int64 v36; // [rsp+60h] [rbp-31h] BYREF
  __int128 v37; // [rsp+70h] [rbp-21h] BYREF
  __int128 v38; // [rsp+80h] [rbp-11h] BYREF
  __int128 v39; // [rsp+90h] [rbp-1h]

  v2 = 0;
  v33 = 0;
  v37 = 0LL;
  v3 = operator new(0x48uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *(_QWORD *)&v37 = v3;
  v4 = *(_QWORD *)(a1 + 416);
  for ( i = *(_QWORD *)(a1 + 424); v4 != i; v4 += 152LL )
  {
    if ( *(_BYTE *)(v4 + 120) )
    {
      sub_180063DE0(
        *(__int64 ***)(a1 + 384),
        (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
        596,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_FrameNumber",
        *(_QWORD *)(v4 + 128));
      sub_180067D38(&v37);
      v6 = *(__int64 **)(v4 + 136);
      v7 = (__int64 *)*v6;
      while ( v7 != v6 )
      {
        v8 = *((_DWORD *)v7 + 16);
        if ( v8 )
        {
          if ( v8 == 1 )
          {
            v9 = *((double *)v7 + 10) - *((double *)v7 + 9);
            v33 = 0;
            v10 = sub_180063E88((__int64)&v37, v37, (__int64)(v7 + 4), &v33);
            sub_180064B64(&v37, (__int64)&v36, 0, (size_t *)v10 + 4, v10);
            *(double *)(v36 + 64) = v9 + *(double *)(v36 + 64);
          }
        }
        else
        {
          v11 = Buf2;
          if ( *((_QWORD *)&xmmword_18020CB68 + 1) >= 0x10uLL )
            v11 = (void **)Buf2[0];
          v12 = v7 + 4;
          if ( (unsigned __int64)v7[7] >= 0x10 )
            v12 = (const void *)v7[4];
          v13 = v7[6];
          if ( v13 == (_QWORD)xmmword_18020CB68 && !memcmp(v12, v11, v13) )
          {
            sub_180063D50(
              *(__int64 ***)(a1 + 384),
              (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
              618LL,
              (__int64)"LogGpuProfilingData",
              (__int64)"GpuStats_PostStamp");
          }
          else
          {
            v14 = sub_180012AA8(Src, (__int64)&qword_180208580, (__int64)(v7 + 4));
            if ( v14[3] >= 0x10uLL )
              v14 = (_QWORD *)*v14;
            sub_180063D50(
              *(__int64 ***)(a1 + 384),
              (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
              623LL,
              (__int64)"LogGpuProfilingData",
              (__int64)v14);
            if ( v35 >= 0x10 )
            {
              v15 = Src[0];
              if ( v35 + 1 >= 0x1000 )
              {
                v15 = *(_QWORD *)(Src[0] - 8LL);
                if ( (unsigned __int64)(Src[0] - v15 - 8) > 0x1F )
                {
                  o__invalid_parameter_noinfo_noreturn(v15, v35 + 40);
LABEL_55:
                  o__invalid_parameter_noinfo_noreturn(v24, v25);
LABEL_56:
                  o__invalid_parameter_noinfo_noreturn(v27, v28);
                  JUMPOUT(0x180066C02LL);
                }
              }
              j_j__o_free(v15);
            }
          }
        }
        v16 = (__int64 **)v7[2];
        if ( *((_BYTE *)v16 + 25) )
        {
          for ( j = (__int64 *)v7[1]; !*((_BYTE *)j + 25) && v7 == (__int64 *)j[2]; j = (__int64 *)j[1] )
            v7 = j;
          v7 = j;
        }
        else
        {
          v7 = (__int64 *)v7[2];
          for ( k = *v16; !*((_BYTE *)k + 25); k = (__int64 *)*k )
            v7 = k;
        }
      }
      v19 = (__int64 *)v37;
      v20 = *(__int64 **)v37;
      while ( v20 != v19 )
      {
        v21 = sub_180012AA8(Src, (__int64)&qword_180208580, (__int64)(v20 + 4));
        v22 = &qword_18020CB38;
        if ( *((_QWORD *)&xmmword_18020CB48 + 1) >= 0x10uLL )
          v22 = (__int64 *)qword_18020CB38;
        v23 = std::string::append(v21, v22, xmmword_18020CB48);
        v39 = 0uLL;
        v38 = *(_OWORD *)v23;
        v39 = *((_OWORD *)v23 + 1);
        v23[2] = 0LL;
        v23[3] = 15LL;
        *(_BYTE *)v23 = 0;
        v2 |= 1u;
        if ( v35 >= 0x10 )
        {
          v24 = Src[0];
          if ( v35 + 1 >= 0x1000 )
          {
            v25 = v35 + 40;
            v24 = *(_QWORD *)(Src[0] - 8LL);
            if ( (unsigned __int64)(Src[0] - v24 - 8) > 0x1F )
              goto LABEL_55;
          }
          j_j__o_free(v24);
        }
        Src[2] = 0LL;
        v35 = 15LL;
        LOBYTE(Src[0]) = 0;
        v26 = &v38;
        if ( *((_QWORD *)&v39 + 1) >= 0x10uLL )
          v26 = (__int128 *)v38;
        sub_180063D50(
          *(__int64 ***)(a1 + 384),
          (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
          644LL,
          (__int64)"LogGpuProfilingData",
          (__int64)v26);
        if ( *((_QWORD *)&v39 + 1) >= 0x10uLL )
        {
          v27 = v38;
          if ( (unsigned __int64)(*((_QWORD *)&v39 + 1) + 1LL) >= 0x1000 )
          {
            v28 = *((_QWORD *)&v39 + 1) + 40LL;
            v27 = *(_QWORD *)(v38 - 8);
            if ( (unsigned __int64)(v38 - v27 - 8) > 0x1F )
              goto LABEL_56;
          }
          j_j__o_free(v27);
        }
        v29 = (__int64 **)v20[2];
        if ( *((_BYTE *)v29 + 25) )
        {
          for ( m = (__int64 *)v20[1]; !*((_BYTE *)m + 25) && v20 == (__int64 *)m[2]; m = (__int64 *)m[1] )
            v20 = m;
          v20 = m;
        }
        else
        {
          v20 = (__int64 *)v20[2];
          for ( n = *v29; !*((_BYTE *)n + 25); n = (__int64 *)*n )
            v20 = n;
        }
      }
      sub_180063D50(
        *(__int64 ***)(a1 + 384),
        (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
        648LL,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_StartTime");
      sub_180063D50(
        *(__int64 ***)(a1 + 384),
        (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
        649LL,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_PresentStamp");
      sub_180063D50(
        *(__int64 ***)(a1 + 384),
        (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
        650LL,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_EndTime");
      sub_180063D50(
        *(__int64 ***)(a1 + 384),
        (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
        651LL,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_RenderDuration");
      sub_180063D50(
        *(__int64 ***)(a1 + 384),
        (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
        652LL,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_Duration");
    }
  }
  return sub_180064680((__int64 *)&v37, (__int64)&v37);
}

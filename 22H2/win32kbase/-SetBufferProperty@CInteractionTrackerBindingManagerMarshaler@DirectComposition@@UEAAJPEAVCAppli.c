/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C022A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C003175C (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned __int32 v9; // r15d
  struct DirectComposition::CResourceMarshaler *v10; // rax
  __m128i v11; // rdi
  struct DirectComposition::CResourceMarshaler *v12; // rax
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // r12d
  int v16; // r10d
  size_t v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r11
  __m128i v20; // xmm0
  int v21; // edx
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v22; // rax
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v23; // rax
  int v24; // ecx
  __m128i *v26; // rcx
  __m128i v27; // xmm1
  __m128i Src; // [rsp+20h] [rbp-40h] BYREF
  __m128i v30; // [rsp+30h] [rbp-30h]
  int v31[4]; // [rsp+48h] [rbp-18h]

  v6 = 0;
  *a6 = 0;
  if ( !a3 && a5 == 12 )
  {
    v9 = a4[2];
    *(_QWORD *)v31 = *(_QWORD *)a4;
    v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, v31[0]);
    if ( v10 )
      v11.m128i_i64[0] = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 136LL))(v10);
    else
      v11.m128i_i64[0] = 0LL;
    v12 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, v31[1]);
    if ( v12 )
      v11.m128i_i64[1] = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v12 + 136LL))(v12);
    else
      v11.m128i_i64[1] = 0LL;
    if ( v11.m128i_i64[0] && v11.m128i_i64[1] && v11.m128i_i64[0] != v11.m128i_i64[1] )
    {
      v13 = *((_QWORD *)this + 12);
      v14 = 0LL;
      v15 = *(_DWORD *)(v11.m128i_i64[0] + 32);
      v16 = *(_DWORD *)(v11.m128i_i64[1] + 32);
      if ( v13 )
      {
        v17 = *((_QWORD *)this + 13);
        v18 = 0LL;
        v19 = *((_QWORD *)this + 9);
        while ( 1 )
        {
          v20 = *(__m128i *)(v18 * v17 + v19 + 16);
          Src = *(__m128i *)(v18 * v17 + v19);
          v30 = v20;
          v21 = *(_DWORD *)(Src.m128i_i64[0] + 32);
          if ( v21 == v15 && *(_DWORD *)(Src.m128i_i64[1] + 32) == v16 )
            break;
          if ( v21 == v16 && *(_DWORD *)(Src.m128i_i64[1] + 32) == v15 )
            break;
          v14 = (unsigned int)(v14 + 1);
          v18 = (unsigned int)v14;
          if ( (unsigned int)v14 >= v13 )
            goto LABEL_20;
        }
        v26 = (__m128i *)(v19 + v17 * v14);
        v27 = v26[1];
        Src = *v26;
        v30 = v27;
        if ( _mm_cvtsi128_si32(v27) != v9 )
        {
          v30.m128i_i32[0] = v9;
          memmove(v26, &Src, v17);
LABEL_36:
          *((_DWORD *)this + 4) |= 0x40u;
          *a6 = 1;
          return v6;
        }
        if ( v9 )
          return v6;
      }
      else
      {
LABEL_20:
        if ( v9 )
        {
          v22 = *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(v11.m128i_i64[0] + 448);
          if ( !v22 || v22 == this )
          {
            v23 = *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(v11.m128i_i64[1] + 448);
            if ( !v23 || v23 == this )
            {
              v24 = *(_DWORD *)(v11.m128i_i64[0] + 64);
              *(_DWORD *)(v11.m128i_i64[0] + 64) = v24 + 1;
              if ( v24 == -1 )
              {
                *(_DWORD *)(v11.m128i_i64[0] + 64) = -1;
              }
              else
              {
                if ( (*(_DWORD *)(v11.m128i_i64[1] + 64))++ != -1 )
                {
                  v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
                         (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)((char *)this + 72),
                         1LL,
                         0x73694344u);
                  if ( (v6 & 0x80000000) != 0 )
                  {
                    --*(_DWORD *)(v11.m128i_i64[0] + 64);
                    --*(_DWORD *)(v11.m128i_i64[1] + 64);
                    return v6;
                  }
                  Src = v11;
                  v30.m128i_i64[0] = v9;
                  DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v11.m128i_i64[0]);
                  DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v11.m128i_i64[1]);
                  memmove(
                    (void *)(*((_QWORD *)this + 9) + *((_QWORD *)this + 13) * (*((_QWORD *)this + 12) - 1LL)),
                    &Src,
                    *((_QWORD *)this + 13));
                  *(_QWORD *)(v11.m128i_i64[0] + 448) = this;
                  *(_QWORD *)(v11.m128i_i64[1] + 448) = this;
                  goto LABEL_36;
                }
                --*(_DWORD *)(v11.m128i_i64[0] + 64);
                --*(_DWORD *)(v11.m128i_i64[1] + 64);
              }
            }
          }
        }
      }
    }
    return 3221225485LL;
  }
  return (unsigned int)-1073741811;
}

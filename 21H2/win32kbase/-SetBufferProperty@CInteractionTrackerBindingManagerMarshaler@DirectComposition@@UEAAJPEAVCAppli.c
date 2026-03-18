/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0231570
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0016048 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
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
  __int32 v8; // r15d
  unsigned __int64 v9; // r8
  __int64 v10; // rdi
  unsigned __int64 v11; // r8
  __int64 v12; // rsi
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // r12d
  int v16; // r10d
  size_t v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r11
  int v20; // edx
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v21; // rax
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v22; // rax
  int v23; // ecx
  __m128i *v25; // rcx
  __m128i v26; // xmm1
  _QWORD v28[2]; // [rsp+28h] [rbp-61h] BYREF
  __int32 v29; // [rsp+38h] [rbp-51h]
  int v30; // [rsp+3Ch] [rbp-4Dh]
  char v31; // [rsp+40h] [rbp-49h]
  __m128i Src; // [rsp+48h] [rbp-41h] BYREF
  __m128i v33; // [rsp+58h] [rbp-31h]
  __int128 v34; // [rsp+68h] [rbp-21h]
  __int64 v35; // [rsp+88h] [rbp-1h]
  __int32 v36; // [rsp+90h] [rbp+7h]

  v6 = 0;
  *a6 = 0;
  if ( !a3 && a5 == 12 )
  {
    v8 = a4[2];
    v35 = *(_QWORD *)a4;
    v36 = v8;
    v9 = (unsigned int)(v35 - 1);
    if ( (_DWORD)v35 && v9 < *((_QWORD *)a2 + 10) )
    {
      _mm_lfence();
      v8 = v36;
      v10 = *(_QWORD *)(v9 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
    }
    else
    {
      v10 = 0LL;
    }
    v11 = (unsigned int)(HIDWORD(v35) - 1);
    if ( HIDWORD(v35) && v11 < *((_QWORD *)a2 + 10) )
    {
      _mm_lfence();
      v8 = v36;
      v12 = *(_QWORD *)(v11 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
    }
    else
    {
      v12 = 0LL;
    }
    if ( v10
      && v12
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 96LL))(v10, 88LL)
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 96LL))(v12, 88LL)
      && v10 != v12 )
    {
      v13 = *((_QWORD *)this + 13);
      v14 = 0LL;
      v15 = *(_DWORD *)(v10 + 32);
      v16 = *(_DWORD *)(v12 + 32);
      if ( v13 )
      {
        v17 = *((_QWORD *)this + 14);
        v18 = 0LL;
        v19 = *((_QWORD *)this + 10);
        while ( 1 )
        {
          v34 = *(_OWORD *)(v18 * v17 + v19);
          v20 = *(_DWORD *)(v34 + 32);
          if ( v20 == v15 && *(_DWORD *)(*((_QWORD *)&v34 + 1) + 32LL) == v16 )
            break;
          if ( v20 == v16 && *(_DWORD *)(*((_QWORD *)&v34 + 1) + 32LL) == v15 )
            break;
          v14 = (unsigned int)(v14 + 1);
          v18 = (unsigned int)v14;
          if ( (unsigned int)v14 >= v13 )
            goto LABEL_24;
        }
        v25 = (__m128i *)(v19 + v17 * v14);
        v26 = v25[1];
        Src = *v25;
        v33 = v26;
        if ( _mm_cvtsi128_si32(v26) == v8 )
          return v6;
        v33.m128i_i32[0] = v8;
        v33.m128i_i8[8] = 1;
        memmove(v25, &Src, v17);
LABEL_38:
        *((_DWORD *)this + 4) |= 0x40u;
        *a6 = 1;
        return v6;
      }
LABEL_24:
      if ( v8 )
      {
        v21 = *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(v10 + 456);
        if ( !v21 || v21 == this )
        {
          v22 = *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(v12 + 456);
          if ( !v22 || v22 == this )
          {
            v23 = *(_DWORD *)(v10 + 72);
            *(_DWORD *)(v10 + 72) = v23 + 1;
            if ( v23 == -1 )
            {
              *(_DWORD *)(v10 + 72) = -1;
            }
            else
            {
              if ( (*(_DWORD *)(v12 + 72))++ != -1 )
              {
                v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
                       (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)((char *)this + 80),
                       1LL,
                       0x73694344u);
                if ( (v6 & 0x80000000) != 0 )
                {
                  --*(_DWORD *)(v10 + 72);
                  --*(_DWORD *)(v12 + 72);
                  return v6;
                }
                v30 = 0;
                v28[0] = v10;
                v28[1] = v12;
                v29 = v8;
                v31 = 1;
                DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v10);
                DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v12);
                memmove(
                  (void *)(*((_QWORD *)this + 10) + *((_QWORD *)this + 14) * (*((_QWORD *)this + 13) - 1LL)),
                  v28,
                  *((_QWORD *)this + 14));
                *(_QWORD *)(v10 + 456) = this;
                *(_QWORD *)(v12 + 456) = this;
                goto LABEL_38;
              }
              --*(_DWORD *)(v10 + 72);
              --*(_DWORD *)(v12 + 72);
            }
          }
        }
      }
    }
    return 3221225485LL;
  }
  return (unsigned int)-1073741811;
}

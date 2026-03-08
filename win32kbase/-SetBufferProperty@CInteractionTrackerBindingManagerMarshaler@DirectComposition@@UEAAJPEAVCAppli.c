/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0268F70
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0069F28 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     Feature_503751999__private_IsEnabledDeviceUsage @ 0x1C00E15EC (Feature_503751999__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEAVCInteractionTrackerBindingManagerMarshaler@2@@Z @ 0x1C0267E54 (-SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicatio.c)
 *     ?HasBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEBA_NXZ @ 0x1C0268E1C (-HasBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEBA_NXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // esi
  __int32 v9; // r15d
  unsigned __int64 v10; // rdx
  _QWORD *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // r12d
  int v20; // r10d
  size_t v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r11
  int v24; // edx
  bool v25; // zf
  __m128i *v26; // rcx
  __m128i v27; // xmm1
  int v29; // ecx
  _QWORD v30[2]; // [rsp+28h] [rbp-61h] BYREF
  __int32 v31; // [rsp+38h] [rbp-51h]
  int v32; // [rsp+3Ch] [rbp-4Dh]
  __m128i Src; // [rsp+48h] [rbp-41h] BYREF
  __m128i v34; // [rsp+58h] [rbp-31h]
  __int128 v35; // [rsp+68h] [rbp-21h]
  __int64 v36; // [rsp+88h] [rbp-1h]
  __int32 v37; // [rsp+90h] [rbp+7h]

  v6 = 0;
  *a6 = 0;
  if ( !a3 && a5 == 12 )
  {
    v9 = a4[2];
    v36 = *(_QWORD *)a4;
    v37 = v9;
    v10 = (unsigned int)(v36 - 1);
    if ( (_DWORD)v36 && v10 < *((_QWORD *)a2 + 10) )
    {
      _mm_lfence();
      v11 = (_QWORD *)((char *)a2 + 88);
      v12 = *(_QWORD *)(*((_QWORD *)a2 + 11) * v10 + *((_QWORD *)a2 + 7));
      if ( v12 )
      {
        v9 = v37;
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 136LL))(v12);
LABEL_11:
        v14 = (unsigned int)(HIDWORD(v36) - 1);
        if ( HIDWORD(v36) && v14 < *((_QWORD *)a2 + 10) )
        {
          _mm_lfence();
          v15 = *(_QWORD *)(*v11 * v14 + *((_QWORD *)a2 + 7));
          if ( v15 )
          {
            v9 = v37;
            v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 136LL))(v15);
LABEL_17:
            if ( !v13 || !v16 || v13 == v16 )
              return 3221225485LL;
            v17 = *((_QWORD *)this + 12);
            v18 = 0LL;
            v19 = *(_DWORD *)(v13 + 32);
            v20 = *(_DWORD *)(v16 + 32);
            if ( v17 )
            {
              v21 = *((_QWORD *)this + 13);
              v22 = 0LL;
              v23 = *((_QWORD *)this + 9);
              while ( 1 )
              {
                v35 = *(_OWORD *)(v22 * v21 + v23);
                v24 = *(_DWORD *)(v35 + 32);
                if ( v24 == v19 && *(_DWORD *)(*((_QWORD *)&v35 + 1) + 32LL) == v20 )
                  break;
                if ( v24 == v20 && *(_DWORD *)(*((_QWORD *)&v35 + 1) + 32LL) == v19 )
                  break;
                v18 = (unsigned int)(v18 + 1);
                v22 = (unsigned int)v18;
                if ( (unsigned int)v18 >= v17 )
                  goto LABEL_27;
              }
              v26 = (__m128i *)(v23 + v21 * v18);
              v27 = v26[1];
              Src = *v26;
              v34 = v27;
              if ( _mm_cvtsi128_si32(v27) != v9 )
              {
                v34.m128i_i32[0] = v9;
                memmove(v26, &Src, v21);
LABEL_50:
                *((_DWORD *)this + 4) |= 0x40u;
                *a6 = 1;
                return v6;
              }
              if ( v9 )
                return v6;
              return 3221225485LL;
            }
LABEL_27:
            if ( !v9 )
              return 3221225485LL;
            if ( (unsigned int)Feature_503751999__private_IsEnabledDeviceUsage() )
            {
              if ( DirectComposition::CInteractionTrackerMarshaler::HasBindingManagerMarshaler((DirectComposition::CInteractionTrackerMarshaler *)v13)
                && *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(v13 + 448) != this )
              {
                return 3221225485LL;
              }
              if ( DirectComposition::CInteractionTrackerMarshaler::HasBindingManagerMarshaler((DirectComposition::CInteractionTrackerMarshaler *)v16) )
              {
                v25 = *(_QWORD *)(v16 + 448) == (_QWORD)this;
LABEL_41:
                if ( !v25 )
                  return 3221225485LL;
              }
            }
            else
            {
              if ( DirectComposition::CInteractionTrackerMarshaler::HasBindingManagerMarshaler((DirectComposition::CInteractionTrackerMarshaler *)v13)
                && *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(v13 + 456) != this )
              {
                return 3221225485LL;
              }
              if ( DirectComposition::CInteractionTrackerMarshaler::HasBindingManagerMarshaler((DirectComposition::CInteractionTrackerMarshaler *)v16) )
              {
                v25 = *(_QWORD *)(v16 + 456) == (_QWORD)this;
                goto LABEL_41;
              }
            }
            v29 = *(_DWORD *)(v13 + 64);
            *(_DWORD *)(v13 + 64) = v29 + 1;
            if ( v29 == -1 )
            {
              *(_DWORD *)(v13 + 64) = -1;
            }
            else
            {
              v25 = (*(_DWORD *)(v16 + 64))++ == -1;
              if ( !v25 )
              {
                v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
                       (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)((char *)this + 72),
                       1LL,
                       0x73694344u);
                if ( (v6 & 0x80000000) != 0 )
                {
                  --*(_DWORD *)(v13 + 64);
                  --*(_DWORD *)(v16 + 64);
                  return v6;
                }
                v32 = 0;
                v30[0] = v13;
                v30[1] = v16;
                v31 = v9;
                DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v13);
                DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v16);
                memmove(
                  (void *)(*((_QWORD *)this + 9) + *((_QWORD *)this + 13) * (*((_QWORD *)this + 12) - 1LL)),
                  v30,
                  *((_QWORD *)this + 13));
                if ( (unsigned int)Feature_503751999__private_IsEnabledDeviceUsage() )
                {
                  *(_QWORD *)(v13 + 448) = this;
                  *(_QWORD *)(v16 + 448) = this;
                }
                else
                {
                  DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(
                    (struct DirectComposition::CResourceMarshaler **)v13,
                    a2,
                    this);
                  DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(
                    (struct DirectComposition::CResourceMarshaler **)v16,
                    a2,
                    this);
                }
                goto LABEL_50;
              }
              --*(_DWORD *)(v13 + 64);
              --*(_DWORD *)(v16 + 64);
            }
            return 3221225485LL;
          }
          v9 = v37;
        }
        v16 = 0LL;
        goto LABEL_17;
      }
      v9 = v37;
    }
    else
    {
      v11 = (_QWORD *)((char *)a2 + 88);
    }
    v13 = 0LL;
    goto LABEL_11;
  }
  return (unsigned int)-1073741811;
}

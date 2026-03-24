/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01F1720
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0029644 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D47C4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // edi
  __int32 v8; // r15d
  unsigned __int64 v9; // r8
  __int64 v10; // rbx
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
  bool v23; // zf
  __m128i *v25; // rcx
  __m128i v26; // xmm1
  _QWORD v27[2]; // [rsp+28h] [rbp-61h] BYREF
  __int32 v28; // [rsp+38h] [rbp-51h]
  int v29; // [rsp+3Ch] [rbp-4Dh]
  char v30; // [rsp+40h] [rbp-49h]
  __m128i Src; // [rsp+48h] [rbp-41h] BYREF
  __m128i v32; // [rsp+58h] [rbp-31h]
  __int128 v33; // [rsp+68h] [rbp-21h]
  __int64 v34; // [rsp+88h] [rbp-1h]
  __int32 v35; // [rsp+90h] [rbp+7h]

  v6 = 0;
  *a6 = 0;
  if ( !a3 && a5 == 12 )
  {
    v8 = a4[2];
    v34 = *(_QWORD *)a4;
    v35 = v8;
    v9 = (unsigned int)(v34 - 1);
    if ( (_DWORD)v34 && v9 < *((_QWORD *)a2 + 10) )
    {
      _mm_lfence();
      v8 = v35;
      v10 = *(_QWORD *)(v9 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
    }
    else
    {
      v10 = 0LL;
    }
    v11 = (unsigned int)(HIDWORD(v34) - 1);
    if ( HIDWORD(v34) && v11 < *((_QWORD *)a2 + 10) )
    {
      _mm_lfence();
      v8 = v35;
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
      v13 = *((_QWORD *)this + 12);
      v14 = 0LL;
      v15 = *(_DWORD *)(v10 + 24);
      v16 = *(_DWORD *)(v12 + 24);
      if ( v13 )
      {
        v17 = *((_QWORD *)this + 13);
        v18 = 0LL;
        v19 = *((_QWORD *)this + 9);
        while ( 1 )
        {
          v33 = *(_OWORD *)(v18 * v17 + v19);
          v20 = *(_DWORD *)(v33 + 24);
          if ( v20 == v15 && *(_DWORD *)(*((_QWORD *)&v33 + 1) + 24LL) == v16 )
            break;
          if ( v20 == v16 && *(_DWORD *)(*((_QWORD *)&v33 + 1) + 24LL) == v15 )
            break;
          v14 = (unsigned int)(v14 + 1);
          v18 = (unsigned int)v14;
          if ( (unsigned int)v14 >= v13 )
            goto LABEL_24;
        }
        v25 = (__m128i *)(v19 + v17 * v14);
        v26 = v25[1];
        Src = *v25;
        v32 = v26;
        if ( _mm_cvtsi128_si32(v26) != v8 )
        {
          v32.m128i_i32[0] = v8;
          v32.m128i_i8[8] = 1;
          memmove(v25, &Src, v17);
          *((_DWORD *)this + 4) |= 0x40u;
          *a6 = 1;
        }
        return (unsigned int)v6;
      }
LABEL_24:
      if ( v8 )
      {
        v21 = *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(v10 + 448);
        if ( !v21 || v21 == this )
        {
          v22 = *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(v12 + 448);
          if ( !v22 || v22 == this )
          {
            v23 = (*(_DWORD *)(v10 + 64))++ == -1;
            if ( v23 )
            {
              *(_DWORD *)(v10 + 64) = -1;
            }
            else
            {
              v23 = (*(_DWORD *)(v12 + 64))++ == -1;
              if ( !v23 )
              {
                v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
                       (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)((char *)this + 72),
                       1LL,
                       0x73694344u);
                if ( v6 < 0 )
                {
                  --*(_DWORD *)(v10 + 64);
                  --*(_DWORD *)(v12 + 64);
                }
                else
                {
                  v29 = 0;
                  v27[0] = v10;
                  v27[1] = v12;
                  v28 = v8;
                  v30 = 1;
                  DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v10);
                  DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v12);
                  memmove(
                    (void *)(*((_QWORD *)this + 9) + *((_QWORD *)this + 13) * (*((_QWORD *)this + 12) - 1LL)),
                    v27,
                    *((_QWORD *)this + 13));
                  *(_QWORD *)(v10 + 448) = this;
                  *(_QWORD *)(v12 + 448) = this;
                  *((_DWORD *)this + 4) |= 0x40u;
                  *a6 = 1;
                }
                return (unsigned int)v6;
              }
              --*(_DWORD *)(v10 + 64);
              --*(_DWORD *)(v12 + 64);
            }
          }
        }
      }
    }
    return 3221225485LL;
  }
  return (unsigned int)-1073741811;
}

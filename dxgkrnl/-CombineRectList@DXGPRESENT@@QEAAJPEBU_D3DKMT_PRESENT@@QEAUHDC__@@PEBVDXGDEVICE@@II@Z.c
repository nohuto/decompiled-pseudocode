/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C0338EE0
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C03380B0 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C000122C (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C0163DD8 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C03395D4 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C033A200 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x1C033C950 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
 */

__int64 __fastcall DXGPRESENT::CombineRectList(
        DXGPRESENT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        const struct DXGDEVICE *a4,
        unsigned int a5,
        unsigned int a6)
{
  const struct _D3DKMT_PRESENT *v7; // rsi
  unsigned int i; // edx
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 result; // rax
  const struct tagRECT *v14; // r13
  int v15; // r14d
  int v16; // r10d
  int v17; // r15d
  int v18; // r11d
  int v19; // r9d
  int v20; // r8d
  const struct tagRECT *v21; // r12
  int v22; // edx
  int v23; // ecx
  char v24; // al
  LONG left; // ecx
  LONG v26; // edx
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  LONG v31; // ecx
  LONG top; // edx
  LONG right; // r8d
  LONG bottom; // r9d
  int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rcx
  LONG v38; // r8d
  LONG v39; // r9d
  LONG v40; // r10d
  __int64 v41; // rdx
  LONG v42; // eax
  LONG v43; // eax
  LONG v44; // eax
  LONG v45; // eax
  LONG v46; // ecx
  __int64 v47; // rdx
  unsigned int v48; // r12d
  int v49; // ecx
  struct tagRECT *v50; // rdx
  __m128i v51; // xmm0
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // edx
  unsigned int v53; // edi
  const struct _D3DKMT_PRESENT *v54; // r13
  const struct DXGDEVICE *v55; // r12
  __int64 v56; // rax
  __int64 v57; // r15
  struct tagRECT *v58; // rsi
  _DWORD *v59; // r8
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v61; // rax
  char v62; // [rsp+50h] [rbp-89h]
  struct tagRECT v63; // [rsp+58h] [rbp-81h] BYREF
  __int64 v64; // [rsp+68h] [rbp-71h] BYREF
  unsigned int v65; // [rsp+70h] [rbp-69h]
  unsigned int v66; // [rsp+74h] [rbp-65h]
  unsigned int v67; // [rsp+78h] [rbp-61h]
  int v68; // [rsp+7Ch] [rbp-5Dh]
  int v69; // [rsp+80h] [rbp-59h]
  struct tagRECT v70; // [rsp+88h] [rbp-51h] BYREF
  const struct DXGDEVICE *v71; // [rsp+98h] [rbp-41h]
  const struct _D3DKMT_PRESENT *v72; // [rsp+A0h] [rbp-39h]
  const struct tagRECT *v73; // [rsp+A8h] [rbp-31h]
  struct tagRECT v74; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v75; // [rsp+C0h] [rbp-19h]
  struct tagRECT v76; // [rsp+C8h] [rbp-11h] BYREF

  v71 = a4;
  v7 = a2;
  v72 = a2;
  if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a5, a6) )
  {
    if ( !*((_DWORD *)this + 29) )
    {
      WdLogSingleEntry1(1LL, 11117LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SubRectCnt", 11117LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( !*((_QWORD *)this + 2) )
    {
      WdLogSingleEntry1(1LL, 11118LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pVisRgnData", 11118LL, 0LL, 0LL, 0LL, 0LL);
    }
    for ( i = 0; ; ++i )
    {
      v10 = 1;
      if ( *((_DWORD *)this + 17) )
        v10 = *((_DWORD *)this + 17);
      if ( i >= v10 )
        break;
      v11 = i;
      *((_DWORD *)this + v11 + 88) = 0;
    }
    v12 = *(unsigned int *)(*((_QWORD *)this + 2) + 8LL) * (unsigned __int64)*((unsigned int *)this + 29);
    if ( v12 > 0xFFFFFFFF )
    {
      WdLogSingleEntry4(
        2LL,
        -1073741675LL,
        this,
        *((unsigned int *)this + 29),
        *(unsigned int *)(*((_QWORD *)this + 2) + 8LL));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x from 0x%I64x due to multiplication overflow 0x%I64d x 0x%I64d",
        -1073741675LL,
        (__int64)this,
        *((unsigned int *)this + 29),
        *(unsigned int *)(*((_QWORD *)this + 2) + 8LL),
        0LL);
      return 3221225621LL;
    }
    if ( (_DWORD)v12 )
    {
      result = DXGPRESENT::GrowRectList(this, v12);
      if ( (int)result < 0 )
        return result;
      v14 = (const struct tagRECT *)((char *)this + 128);
      v15 = 0;
      v16 = *((_DWORD *)this + 37);
      v17 = 0;
      v18 = *((_DWORD *)this + 33);
      v19 = *((_DWORD *)this + 39) - v16;
      v20 = *((_DWORD *)this + 35) - v18;
      v68 = 0;
      v69 = 0;
      v66 = 0;
      v65 = 0;
      if ( v20 == v19
        && (v21 = (const struct tagRECT *)((char *)this + 144),
            v22 = *((_DWORD *)this + 38) - *((_DWORD *)this + 36),
            v23 = *((_DWORD *)this + 34) - v14->left,
            v73 = (const struct tagRECT *)((char *)this + 128),
            v23 == v22) )
      {
        v24 = 0;
      }
      else
      {
        v24 = 1;
        v73 = (const struct tagRECT *)((char *)this + 128);
        v21 = (const struct tagRECT *)((char *)this + 144);
      }
      left = v14->left;
      v26 = v21->left;
      v62 = v24;
      if ( v24 )
      {
        v66 = ((*((_DWORD *)this + 34) - left) << 16) / (*((_DWORD *)this + 38) - v26);
        v65 = (v20 << 16) / v19;
      }
      else
      {
        v15 = left - v26;
        v17 = v18 - v16;
        v68 = left - v26;
        v69 = v18 - v16;
      }
      v27 = v7->Flags.Value & 0x10100;
      v63 = 0LL;
      if ( v27 == 65792 )
      {
        v28 = *((_QWORD *)v71 + 5);
        v63 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v71 + 235) + 2920LL) + 128LL)
                                + 4000LL * v7->VidPnSourceId
                                + 628);
        v29 = *(_QWORD *)(v28 + 88);
        v64 = 0LL;
        v30 = (*(__int64 (__fastcall **)(HDC, __int64 *))(v29 + 312))(a3, &v64);
        v31 = v63.left;
        top = v63.top;
        right = v63.right;
        bottom = v63.bottom;
        if ( v30 )
        {
          v31 = v63.left - v64;
          top = v63.top - HIDWORD(v64);
          right = v63.right - v64;
          bottom = v63.bottom - HIDWORD(v64);
          v63.bottom -= HIDWORD(v64);
          v63.left -= v64;
          v63.top -= HIDWORD(v64);
          v63.right -= v64;
        }
        v35 = *((unsigned __int16 *)this + 214);
        if ( (unsigned __int16)v35 > 1u )
        {
          v63.left = v35 * v31;
          v63.top = v35 * top;
          v63.right = v35 * right;
          v63.bottom = v35 * bottom;
        }
      }
      v36 = 0;
      for ( LODWORD(v64) = 0; v36 < *((_DWORD *)this + 29); LODWORD(v64) = v36 )
      {
        v37 = *((_QWORD *)this + 15);
        v38 = v21->left;
        v39 = *((_DWORD *)this + 38);
        v40 = *((_DWORD *)this + 37);
        v41 = 2LL * v36;
        v76 = 0LL;
        v42 = *(_DWORD *)(v37 + 16LL * v36);
        if ( v42 > v38 )
          v38 = v42;
        v43 = *(_DWORD *)(v37 + 8 * v41 + 8);
        v76.left = v38;
        if ( v43 < v39 )
          v39 = v43;
        v44 = *(_DWORD *)(v37 + 8 * v41 + 4);
        v76.right = v39;
        if ( v44 > v40 )
          v40 = v44;
        v45 = *(_DWORD *)(v37 + 8 * v41 + 12);
        v46 = *((_DWORD *)this + 39);
        v76.top = v40;
        if ( v45 < v46 )
          v46 = v45;
        v76.bottom = v46;
        if ( v46 > v40 && v39 > v38 )
        {
          v70 = 0LL;
          if ( v62 )
          {
            DXGPRESENT::XformRect(v14, v21, &v70, &v76, v66, v65);
          }
          else
          {
            v70.left = v38 + v15;
            v70.right = v39 + v15;
            v70.top = v40 + v17;
            v70.bottom = v46 + v17;
          }
          v47 = *((_QWORD *)this + 2);
          v75 = v47;
          v48 = 0;
          v67 = 0;
          if ( *(_DWORD *)(v47 + 8) )
          {
            while ( 1 )
            {
              v49 = *((unsigned __int16 *)this + 214);
              v50 = (struct tagRECT *)(16LL * v48 + v47 + 32);
              v76 = 0LL;
              v74 = 0LL;
              if ( (unsigned __int16)v49 > 1u )
              {
                v51 = *(__m128i *)v50;
                v50 = &v76;
                v76.left = v49 * _mm_cvtsi128_si32(v51);
                v76.top = v49 * v51.m128i_i32[1];
                v76.right = v49 * v51.m128i_i32[2];
                v76.bottom = v49 * v51.m128i_i32[3];
              }
              if ( !DXGPRESENT::IntersectRect(&v74, v50, &v70) )
                goto LABEL_65;
              Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v7->Flags.Value;
              if ( (*(_DWORD *)&Value & 0x10000) == 0 )
              {
                v53 = 0;
                if ( *((_DWORD *)this + 17) )
                {
                  v54 = v72;
                  v55 = v71;
                  do
                  {
                    v56 = *((_QWORD *)v55 + 235);
                    if ( !v56 || !*(_QWORD *)(v56 + 2920) )
                    {
                      WdLogSingleEntry1(1LL, 11276LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"(pDevice->GetDisplayAdapter(VidPnSourceId) != NULL) && pDevice->GetDisplayAdapter(VidPn"
                                  "SourceId)->IsDisplayAdapter()",
                        11276LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    v57 = *(_QWORD *)(*((_QWORD *)v55 + 235) + 2920LL);
                    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v57 + 16)) )
                    {
                      WdLogSingleEntry1(1LL, 11279LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"pDisplayCore->IsCoreResourceSharedOwner()",
                        11279LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    v58 = (struct tagRECT *)(*((_QWORD *)this + v53 + 28) + 16LL * *((unsigned int *)this + v53 + 88));
                    if ( DXGPRESENT::IntersectRect(
                           v58,
                           &v74,
                           (const struct tagRECT *)(4000LL * v53 + *(_QWORD *)(v57 + 128) + 628LL))
                      && ((v54->Flags.Value & 0x100) == 0 || v53 == v54->VidPnSourceId) )
                    {
                      v58->top -= v59[1];
                      v58->bottom -= v59[1];
                      v58->left -= *v59;
                      v58->right -= *v59;
                      CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)v57, v53);
                      if ( CddInterface )
                        (*((void (__fastcall **)(_QWORD, struct tagRECT *))CddInterface + 1))(
                          *(_QWORD *)CddInterface,
                          v58);
                      ++*((_DWORD *)this + v53 + 88);
                      *((_DWORD *)this + 1) &= ~2u;
                    }
                    ++v53;
                  }
                  while ( v53 < *((_DWORD *)this + 17) );
                  v48 = v67;
                  v7 = v54;
                }
                goto LABEL_65;
              }
              if ( (*(_WORD *)&Value & 0x100) == 0 )
                break;
              if ( DXGPRESENT::IntersectRect(
                     (struct tagRECT *)(*((_QWORD *)this + 28) + 16LL * *((unsigned int *)this + 88)),
                     &v74,
                     &v63) )
              {
                goto LABEL_49;
              }
LABEL_65:
              v61 = *((_QWORD *)this + 2);
              ++v48;
              v47 = v75;
              v67 = v48;
              if ( v48 >= *(_DWORD *)(v61 + 8) )
              {
                v14 = v73;
                goto LABEL_67;
              }
            }
            *(struct tagRECT *)(*((_QWORD *)this + 28) + 16LL * *((unsigned int *)this + 88)) = v74;
LABEL_49:
            ++*((_DWORD *)this + 88);
            *((_DWORD *)this + 1) &= ~2u;
            goto LABEL_65;
          }
LABEL_67:
          v21 = (const struct tagRECT *)((char *)this + 144);
        }
        v15 = v68;
        v36 = v64 + 1;
        v17 = v69;
      }
    }
  }
  *((_DWORD *)this + 1) &= 0xFFFFFEF7;
  return 0LL;
}

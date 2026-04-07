/*
 * XREFs of ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x1800A3078
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800A4684 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A3A0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z @ 0x1800A2F3C (-GetMidPoint@CTouchDragVisualHelper@@CA-AUTOUCH_DRAG_POINT@@PEBU2@0@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x1800A2FCC (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 */

void __fastcall CTouchDragVisualHelper::SmoothTouchDragPath(__int64 *a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int i; // ebx
  __int128 *v6; // r10
  __int128 v7; // xmm0
  __int128 *v8; // rax
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  __int128 v11; // xmm4
  __int64 v12; // xmm0_8
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  __int128 *v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  int v19; // eax
  __int64 v20; // rax
  __int128 v21; // xmm4
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // xmm1_8
  __int128 *v25; // rdx
  __int128 v26; // xmm0
  int v27; // eax
  __int64 v28; // xmm1_8
  __int128 v29; // xmm0
  __int128 *MidPoint; // rax
  __int128 *v31; // r10
  __int128 v32; // xmm4
  __int64 v33; // r9
  __int64 v34; // xmm1_8
  __int64 v35; // rax
  __int128 v36; // xmm4
  __int64 v37; // xmm0_8
  float v38; // xmm12_4
  float v39; // xmm14_4
  float v40; // xmm11_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm7_4
  float v44; // xmm8_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm3_4
  float v48; // xmm4_4
  float v49; // xmm0_4
  float v50; // xmm0_4
  float v51; // xmm2_4
  float v52; // xmm7_4
  float v53; // xmm8_4
  float v54; // xmm0_4
  float v55; // xmm3_4
  float v56; // xmm4_4
  float v57; // xmm0_4
  __int64 v58; // rax
  unsigned int v59; // r8d
  __int64 v60; // rcx
  __int64 v61; // rdx
  int v62; // eax
  _BYTE v63[24]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v64; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+68h] [rbp-A0h]
  int v66; // [rsp+70h] [rbp-98h]
  __int128 v67; // [rsp+78h] [rbp-90h] BYREF
  __int64 v68; // [rsp+88h] [rbp-80h] BYREF
  int v69; // [rsp+90h] [rbp-78h]
  __int128 v70; // [rsp+98h] [rbp-70h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-60h]
  int v72; // [rsp+B0h] [rbp-58h]
  __int128 v73; // [rsp+B8h] [rbp-50h]
  __int128 v74; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v75; // [rsp+E8h] [rbp-20h]
  int v76; // [rsp+F0h] [rbp-18h]
  __int128 v77; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v78; // [rsp+108h] [rbp+0h]
  int v79; // [rsp+110h] [rbp+8h]

  v2 = *((_DWORD *)a1 + 6);
  *(_DWORD *)(a2 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a2, 0x1Cu);
  for ( i = 0; i < v2; i += 2 )
  {
    v6 = (__int128 *)*a1;
    if ( i + 4 <= v2 )
    {
      if ( i )
      {
        MidPoint = (__int128 *)CTouchDragVisualHelper::GetMidPoint(
                                 (__int64)v63,
                                 (__int64)v6 + 28 * i,
                                 (__int64)v6 + 28 * i + 28);
        v31 = (__int128 *)*a1;
        v32 = *MidPoint;
        v34 = *(_QWORD *)(*a1 + v33 + 16);
        LODWORD(MidPoint) = *(_DWORD *)(*a1 + v33 + 24);
        v25 = (__int128 *)(*a1 + 28LL * (i + 2));
        v70 = *(_OWORD *)(*a1 + v33);
        v29 = *v25;
        v71 = v34;
        v28 = *((_QWORD *)v25 + 2);
        v22 = (__int64)v31 + 28 * i + 84;
        v72 = (int)MidPoint;
        v27 = *((_DWORD *)v25 + 6);
        v73 = v32;
      }
      else
      {
        v22 = (__int64)v6 + 84;
        v23 = *((_DWORD *)v6 + 13);
        v24 = *(_QWORD *)((char *)v6 + 44);
        v25 = &v74;
        v73 = *v6;
        v72 = v23;
        v26 = *(__int128 *)((char *)v6 + 28);
        v27 = *((_DWORD *)v6 + 20);
        v71 = v24;
        v28 = *((_QWORD *)v6 + 9);
        v70 = v26;
        v29 = *(__int128 *)((char *)v6 + 56);
      }
      v75 = v28;
      v74 = v29;
      v76 = v27;
      v35 = CTouchDragVisualHelper::GetMidPoint((__int64)v63, (__int64)v25, v22);
      v36 = *(_OWORD *)v35;
      v37 = *(_QWORD *)(v35 + 16);
      LODWORD(v35) = *(_DWORD *)(v35 + 24);
      v64 = v36;
      v66 = v35;
      v65 = v37;
    }
    else
    {
      if ( i )
      {
        v10 = CTouchDragVisualHelper::GetMidPoint((__int64)v63, (__int64)v6 + 28 * i, (__int64)v6 + 28 * i + 28);
        v6 = (__int128 *)*a1;
        v11 = *(_OWORD *)v10;
        v12 = *(_QWORD *)(v10 + 16);
        v79 = *(_DWORD *)(v10 + 24);
        v8 = &v77;
        v77 = v11;
        v78 = v12;
      }
      else
      {
        v7 = *v6;
        v69 = *((_DWORD *)v6 + 6);
        v8 = &v67;
        v9 = *((_QWORD *)v6 + 2);
        v67 = v7;
        v68 = v9;
      }
      v13 = i + 1;
      v73 = *v8;
      v14 = *(__int128 *)((char *)v6 + 28 * v13);
      v15 = *(_QWORD *)((char *)v6 + 28 * v13 + 16);
      v72 = *((_DWORD *)v6 + 7 * v13 + 6);
      v71 = v15;
      v70 = v14;
      if ( i + 3 <= v2 )
        v16 = (__int128 *)((char *)v6 + 28 * i + 56);
      else
        v16 = &v70;
      v17 = *v16;
      v18 = *((_QWORD *)v16 + 2);
      v19 = *((_DWORD *)v16 + 6);
      v64 = v17;
      v66 = v19;
      v65 = v18;
      v20 = CTouchDragVisualHelper::GetMidPoint((__int64)v63, (__int64)&v70, (__int64)&v64);
      i = v2;
      v21 = *(_OWORD *)v20;
      *(_QWORD *)&v17 = *(_QWORD *)(v20 + 16);
      LODWORD(v20) = *(_DWORD *)(v20 + 24);
      v74 = v21;
      v76 = v20;
      v75 = v17;
    }
    v38 = 0.0;
    v39 = (float)(v73 - v64);
    do
    {
      v40 = 1.0 - v38;
      HIDWORD(v67) = 1056964608;
      v41 = (float)(1.0 - v38) * 3.0;
      v42 = v40 * (float)(v40 * v40);
      v43 = *((float *)&v73 + 1) * v42;
      v44 = *((float *)&v73 + 2) * v42;
      v45 = (float)((float)(1.0 - v38) * v41) * v38;
      v46 = (float)(v41 * v38) * v38;
      v47 = *((float *)&v70 + 1) * v45;
      v48 = *((float *)&v70 + 2) * v45;
      v49 = v38 * (float)(v38 * v38);
      *((float *)&v67 + 1) = (float)(*((float *)&v64 + 1) * v49)
                           + (float)((float)(*((float *)&v74 + 1) * v46) + (float)(v43 + v47));
      *((float *)&v67 + 2) = (float)(*((float *)&v64 + 2) * v49)
                           + (float)((float)(*((float *)&v74 + 2) * v46) + (float)(v44 + v48));
      v50 = (float)((float)(v38 - 1.0) * 3.0) * (float)(1.0 - v38);
      v51 = (float)((float)((float)((float)(v38 - 1.0) + (float)(v38 - 1.0)) * v38) + (float)(v40 * v40)) * 3.0;
      v52 = (float)(*((float *)&v73 + 1) * v50) + (float)(*((float *)&v70 + 1) * v51);
      v53 = (float)(*((float *)&v73 + 2) * v50) + (float)(*((float *)&v70 + 2) * v51);
      v54 = (float)((float)((float)((float)(1.0 - v38) + (float)(1.0 - v38)) * v38) - (float)(v38 * v38)) * 3.0;
      v55 = *((float *)&v74 + 1) * v54;
      v56 = *((float *)&v74 + 2) * v54;
      v57 = (float)(v38 * 3.0) * v38;
      v69 = 0;
      LODWORD(v68) = COERCE_UNSIGNED_INT((float)(*((float *)&v64 + 2) * v57) + (float)(v56 + v53)) ^ _xmm;
      *((float *)&v68 + 1) = (float)(*((float *)&v64 + 1) * v57) + (float)(v55 + v52);
      CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v68);
      LODWORD(v67) = v64 + (int)(float)((float)(1.0 - v38) * v39);
      v58 = *(unsigned int *)(a2 + 24);
      v59 = v58 + 1;
      if ( (int)v58 + 1 >= (unsigned int)v58 )
      {
        if ( v59 > *(_DWORD *)(a2 + 20) )
        {
          v62 = DynArrayImpl<0>::AddMultipleAndSet(a2, 0x1Cu, 1, &v67);
          if ( v62 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v62, 0xC0u);
        }
        else
        {
          v60 = *(_QWORD *)a2;
          v61 = 28 * v58;
          *(_OWORD *)(v61 + v60) = v67;
          *(_QWORD *)(v61 + v60 + 16) = v68;
          *(_DWORD *)(v61 + v60 + 24) = v69;
          *(_DWORD *)(a2 + 24) = v59;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      v38 = v38 + 0.2;
    }
    while ( v38 < 1.0 );
  }
}

/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YA?AU?$pair@PEAUInstance_Pos4_QRot_ColorDW_Size2@@PEAU1@@0@PEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU2@1@Z@Z @ 0x180204C48
 * Callers:
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x18020525C (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Guess_median_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@00P6A_NAEBU1@1@Z@Z @ 0x180204868 (--$_Guess_median_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInst.c)
 */

_QWORD *__fastcall std::_Partition_by_median_guess_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        _QWORD *a1,
        unsigned __int64 a2,
        _OWORD *a3,
        unsigned __int8 (__fastcall *a4)(_OWORD *, _OWORD *))
{
  _OWORD *v7; // rbx
  _OWORD *v8; // rdi
  _OWORD *v9; // rsi
  _OWORD *v10; // rsi
  _OWORD *v11; // rbp
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  bool v15; // zf
  _OWORD *v16; // r14
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // xmm4
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int128 v25; // xmm4
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  __int128 v28; // xmm4
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  __int128 v32; // xmm2
  __int128 v33; // xmm3
  __int128 v34; // xmm4
  _QWORD *result; // rax

  v7 = (_OWORD *)(a2 + 48 * ((__int64)(0xAAAAAAAAAAAAAAABuLL * ((__int64)((__int64)a3 - a2) >> 4)) >> 1));
  std::_Guess_median_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
    a2,
    (__int64)v7,
    (__int64)(a3 - 3));
  v8 = v7 + 3;
  if ( a2 < (unsigned __int64)v7 )
  {
    do
    {
      v9 = v7 - 3;
      if ( a4(v7 - 3, v7) )
        break;
      if ( a4(v7, v7 - 3) )
        break;
      v7 -= 3;
    }
    while ( a2 < (unsigned __int64)v9 );
  }
  while ( v8 < a3 && !a4(v8, v7) && !a4(v7, v8) )
    v8 += 3;
  v10 = v8;
  v11 = v7;
  while ( 1 )
  {
    while ( v10 < a3 )
    {
      if ( a4(v7, v10) )
        goto LABEL_16;
      if ( a4(v10, v7) )
        break;
      if ( v8 != v10 )
      {
        v12 = *v8;
        v13 = v8[1];
        v14 = v8[2];
        *v8 = *v10;
        v8[1] = v10[1];
        v8[2] = v10[2];
        *v10 = v12;
        v10[1] = v13;
        v10[2] = v14;
      }
      v8 += 3;
LABEL_16:
      v10 += 3;
    }
    v15 = v11 == (_OWORD *)a2;
    if ( (unsigned __int64)v11 > a2 )
    {
      v16 = v11 - 3;
      do
      {
        if ( !a4(v16, v7) )
        {
          if ( a4(v7, v16) )
            break;
          v7 -= 3;
          if ( v7 != v16 )
          {
            v17 = *v7;
            v18 = v7[1];
            v19 = v7[2];
            *v7 = *v16;
            v7[1] = v16[1];
            v7[2] = v16[2];
            *v16 = v17;
            v16[1] = v18;
            v16[2] = v19;
          }
        }
        v11 -= 3;
        v16 -= 3;
      }
      while ( a2 < (unsigned __int64)v11 );
      v15 = v11 == (_OWORD *)a2;
    }
    if ( v15 )
      break;
    v11 -= 3;
    if ( v10 != a3 )
    {
      v32 = *v10;
      v33 = v10[1];
      v34 = v10[2];
      *v10 = *v11;
      v10[1] = v11[1];
      v10[2] = v11[2];
      *v11 = v32;
      v11[1] = v33;
      v11[2] = v34;
      goto LABEL_16;
    }
    v7 -= 3;
    if ( v11 != v7 )
    {
      v26 = *v11;
      v27 = v11[1];
      v28 = v11[2];
      *v11 = *v7;
      v11[1] = v7[1];
      v11[2] = v7[2];
      *v7 = v26;
      v7[1] = v27;
      v7[2] = v28;
    }
    v29 = *v7;
    v8 -= 3;
    v30 = v7[1];
    v31 = v7[2];
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    *v8 = v29;
    v8[1] = v30;
    v8[2] = v31;
  }
  if ( v10 != a3 )
  {
    if ( v8 != v10 )
    {
      v20 = *v7;
      v21 = v7[1];
      v22 = v7[2];
      *v7 = *v8;
      v7[1] = v8[1];
      v7[2] = v8[2];
      *v8 = v20;
      v8[1] = v21;
      v8[2] = v22;
    }
    v8 += 3;
    v23 = *v7;
    v24 = v7[1];
    v25 = v7[2];
    *v7 = *v10;
    v7[1] = v10[1];
    v7[2] = v10[2];
    v7 += 3;
    *v10 = v23;
    v10[1] = v24;
    v10[2] = v25;
    goto LABEL_16;
  }
  result = a1;
  *a1 = v7;
  a1[1] = v8;
  return result;
}

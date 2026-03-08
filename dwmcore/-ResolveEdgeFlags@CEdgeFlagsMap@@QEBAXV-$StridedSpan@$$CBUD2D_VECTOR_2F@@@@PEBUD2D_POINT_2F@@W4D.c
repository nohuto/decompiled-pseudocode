/*
 * XREFs of ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$StridedSpan@$$CBUD2D_VECTOR_2F@@@@PEBUD2D_POINT_2F@@W4D2D1_EDGE_FLAGS@@PEAUResolveEdgeFlagsResult@1@M@Z @ 0x1800D3FA4
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?TryGetValue@?$CConvexPolygonEdgeMap@I@@QEBA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@PEAIM@Z @ 0x1801FE028 (-TryGetValue@-$CConvexPolygonEdgeMap@I@@QEBA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@PEAIM@Z.c)
 */

char __fastcall CEdgeFlagsMap::ResolveEdgeFlags(__int64 a1, _DWORD *a2, float *a3, char a4, __int64 a5, float a6)
{
  unsigned __int64 v7; // rax
  int v8; // r14d
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  float v14; // xmm5_4
  int v15; // xmm4_4
  int v16; // edx
  char Value; // al
  float v18; // xmm1_4
  float v19; // xmm0_4
  int v20; // eax
  bool v21; // zf
  float v22; // xmm0_4
  int v23; // eax
  int v24; // eax
  unsigned int v25; // r8d
  __int64 v26; // rdx
  int v28; // [rsp+98h] [rbp+20h] BYREF

  LOBYTE(v7) = *(_BYTE *)(a1 + 24);
  v8 = a4 & 3;
  v10 = a1;
  if ( !(_BYTE)v7 )
  {
    a1 = a5;
    v25 = 0;
    LOBYTE(v7) = v8 == 3;
    *(_BYTE *)(a5 + 32) = 1;
    for ( *(_BYTE *)(a1 + 33) = v8 == 3; v25 < a2[3]; *(_BYTE *)(v26 + v7) = 0 )
    {
      v26 = v25;
      if ( (unsigned __int64)v25 >= *(_QWORD *)a1
        || (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL * v25) = v8, (unsigned __int64)v25 >= *(_QWORD *)(a1 + 16)) )
      {
LABEL_53:
        gsl::details::terminate((gsl::details *)a1);
        JUMPOUT(0x1800D429DLL);
      }
      v7 = *(_QWORD *)(a1 + 24);
      ++v25;
    }
    return v7;
  }
  if ( (_BYTE)v7 == 1 )
  {
    v11 = a1;
LABEL_4:
    v10 = 0LL;
    goto LABEL_5;
  }
  v11 = 0LL;
  if ( (_BYTE)v7 != 2 )
    goto LABEL_4;
LABEL_5:
  v12 = a5;
  v13 = 0LL;
  *(_WORD *)(a5 + 32) = 0;
  if ( a2[3] )
  {
    v14 = a6;
    v15 = _xmm;
    do
    {
      v16 = v8;
      Value = 0;
      v28 = v8;
      if ( !v11 )
      {
        if ( v10 )
        {
          Value = CConvexPolygonEdgeMap<unsigned int>::TryGetValue(
                    v10,
                    *a2 + a2[2] * (int)v13,
                    (_DWORD)a3,
                    (unsigned int)&v28,
                    LODWORD(v14));
          v16 = v28;
        }
        goto LABEL_12;
      }
      a1 = *(_QWORD *)a2 + a2[2] * (int)v13;
      v18 = *(float *)a1;
      if ( *(float *)a1 == 0.0 && *(float *)(a1 + 4) == 0.0 )
      {
LABEL_11:
        Value = 0;
        goto LABEL_12;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v18) & v15) - 1.0) & v15) < 0.000081380211 )
      {
        v22 = a3[1];
        if ( v18 <= 0.0 )
        {
          if ( v14 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 - *(float *)(v11 + 12)) & v15) )
            goto LABEL_11;
          v24 = *(_DWORD *)(v11 + 16) & 0x30000;
          if ( v24 == 0x10000 )
          {
LABEL_54:
            v16 = 1;
            goto LABEL_29;
          }
          if ( v24 != 0x20000 )
          {
            v21 = v24 == 196608;
LABEL_27:
            v16 = 3;
            if ( !v21 )
              v16 = 0;
            goto LABEL_29;
          }
        }
        else
        {
          if ( v14 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 - *(float *)(v11 + 4)) & v15) )
            goto LABEL_11;
          a1 = (*(_DWORD *)(v11 + 16) & 3u) - 1;
          if ( (*(_DWORD *)(v11 + 16) & 3) == 1 )
            goto LABEL_54;
          a1 = (*(_DWORD *)(v11 + 16) & 3u) - 2;
          if ( (*(_DWORD *)(v11 + 16) & 3) != 2 )
          {
            if ( (*(_DWORD *)(v11 + 16) & 3) == 3 )
              v16 = 3;
            else
              v16 = 0;
            goto LABEL_29;
          }
        }
      }
      else
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(*(_DWORD *)(a1 + 4) & v15) - 1.0) & v15) >= 0.000081380211 )
          goto LABEL_11;
        v19 = *a3;
        if ( *(float *)(a1 + 4) <= 0.0 )
        {
          if ( v14 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - *(float *)v11) & v15) )
            goto LABEL_11;
          v23 = *(_DWORD *)(v11 + 16) & 0x3000000;
          if ( v23 == 0x1000000 )
            goto LABEL_54;
          if ( v23 != 0x2000000 )
          {
            v21 = v23 == 50331648;
            goto LABEL_27;
          }
        }
        else
        {
          if ( v14 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - *(float *)(v11 + 8)) & v15) )
            goto LABEL_11;
          v20 = *(_DWORD *)(v11 + 16) & 0x300;
          if ( v20 == 256 )
            goto LABEL_54;
          if ( v20 != 512 )
          {
            v21 = v20 == 768;
            goto LABEL_27;
          }
        }
      }
      v16 = 2;
LABEL_29:
      Value = 1;
LABEL_12:
      if ( v13 >= *(_QWORD *)v12 )
        goto LABEL_53;
      a1 = *(_QWORD *)(v12 + 8);
      *(_DWORD *)(a1 + 4 * v13) = v16;
      if ( v13 >= *(_QWORD *)(v12 + 16) )
        goto LABEL_53;
      a1 = *(_QWORD *)(v12 + 24);
      *(_BYTE *)(v13 + a1) = Value;
      if ( v16 == 3 )
        *(_BYTE *)(v12 + 33) = 1;
      if ( !Value )
        *(_BYTE *)(v12 + 32) = 1;
      v7 = (unsigned int)a2[3];
      ++v13;
      a3 += 2;
    }
    while ( v13 < v7 );
  }
  return v7;
}

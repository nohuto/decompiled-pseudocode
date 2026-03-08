/*
 * XREFs of ?vGetCoefficient@EXFORMOBJ@@QEAAXPEAUtagFLOATOBJ_XFORM@@@Z @ 0x1C00CE440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vGetCoefficient(EXFORMOBJ *this, struct tagFLOATOBJ_XFORM *a2)
{
  _OWORD *v3; // rcx
  int v4; // eax
  __int128 v5; // xmm3
  __int128 v6; // xmm3
  FLOATOBJ v7; // xmm0_4
  FLOATOBJ v8; // xmm1_4
  __int64 i; // rcx
  FLOATOBJ v10; // [rsp+0h] [rbp-30h]
  __int128 v11; // [rsp+0h] [rbp-30h]
  FLOATOBJ v12; // [rsp+8h] [rbp-28h]
  FLOATOBJ v13; // [rsp+Ch] [rbp-24h]

  v3 = *(_OWORD **)this;
  v4 = *((_DWORD *)v3 + 8);
  if ( (v4 & 8) != 0 )
  {
    v5 = v3[1];
    v10 = COERCE_FLOAT(*v3) * 0.0625;
    v12 = COERCE_FLOAT(*((_QWORD *)v3 + 1)) * 0.0625;
    v13 = COERCE_FLOAT(HIDWORD(*v3)) * 0.0625;
    a2->eM12 = COERCE_FLOAT(HIDWORD(*(_QWORD *)v3)) * 0.0625;
    a2->eM11 = v10;
    a2->eM21 = v12;
    a2->eM22 = v13;
    a2->eDx = *(float *)&v5 * 0.0625;
    a2->eDy = *((float *)&v5 + 1) * 0.0625;
  }
  else if ( (v4 & 0x10) != 0 )
  {
    v6 = v3[1];
    v11 = *v3;
    v7 = COERCE_FLOAT(*v3) * 16.0;
    v8 = COERCE_FLOAT(*((_QWORD *)v3 + 1)) * 16.0;
    a2->eDy = *((FLOATOBJ *)&v6 + 1);
    LODWORD(a2->eDx) = v6;
    a2->eM12 = *((float *)&v11 + 1) * 16.0;
    a2->eM11 = v7;
    a2->eM21 = v8;
    a2->eM22 = *((float *)&v11 + 3) * 16.0;
  }
  else
  {
    for ( i = 0LL; i < 24; i += 4LL )
      *(FLOATOBJ *)((char *)&a2->eM11 + i) = *(FLOATOBJ *)(i + *(_QWORD *)this);
  }
}

/*
 * XREFs of ?vGetCoefficient@EXFORMOBJ@@QEAAXPEAU_FD_XFORM@@@Z @ 0x1C0180190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vGetCoefficient(FLOATL **this, struct _FD_XFORM *a2)
{
  FLOATL *v2; // rax
  int v4; // ecx
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8[12]; // [rsp+0h] [rbp-30h]

  v2 = *this;
  v4 = *((_DWORD *)*this + 8);
  if ( (v4 & 8) != 0 )
  {
    v5 = FLOAT_0_0625;
LABEL_5:
    v8[0] = COERCE_FLOAT(*(_OWORD *)v2) * v5;
    v6 = COERCE_FLOAT(*((_QWORD *)v2 + 1));
    v8[1] = COERCE_FLOAT(HIDWORD(*(_QWORD *)v2)) * v5;
    LODWORD(v7) = HIDWORD(*(_OWORD *)v2);
    *(_QWORD *)&a2->eXX = *(_QWORD *)v8;
    a2->eYX = v6 * v5;
    a2->eYY = v7 * v5;
    return;
  }
  if ( (v4 & 0x10) != 0 )
  {
    v5 = FLOAT_16_0;
    goto LABEL_5;
  }
  a2->eXX = *v2;
  a2->eXY = (*this)[1];
  a2->eYX = (*this)[2];
  a2->eYY = (*this)[3];
}

char __fastcall CVisualTree::_IsInTree(const struct CVisualTree *a1, __int64 a2, int a3)
{
  char v3; // si
  float v5; // xmm7_4
  __int64 v6; // rbx
  __int64 v8; // rdi
  float VisualAlpha; // xmm6_4

  v3 = 0;
  v5 = *(float *)&FLOAT_1_0;
  v6 = a2;
  v8 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( (unsigned int)(a3 - 1) <= 1 )
      {
        if ( (*(_BYTE *)(v6 + 103) & 1) == 0 )
          break;
        if ( (*(_BYTE *)(v6 + 102) & 2) != 0 )
          break;
        if ( a3 == 2 )
        {
          VisualAlpha = CVisual::GetVisualAlpha((CVisual *)v6, a1);
          v5 = v5 * (float)(VisualAlpha * CVisual::GetEffectAlpha((CVisual *)v6));
          if ( COERCE_FLOAT(LODWORD(v5) & _xmm) < 0.0000011920929 )
            break;
        }
      }
      if ( v6 == *((_QWORD *)a1 + 8) )
        return 1;
      if ( !v8 || (v8 = *(_QWORD *)(v8 + 88)) == 0 || v6 != v8 && (v8 = *(_QWORD *)(v8 + 88), v6 != v8) )
      {
        v6 = *(_QWORD *)(v6 + 88);
        if ( v6 )
          continue;
      }
      return v3;
    }
  }
  return v3;
}

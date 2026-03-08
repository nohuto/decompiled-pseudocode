/*
 * XREFs of ?AddChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@H1PEA_N@Z @ 0x1C00A7190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::AddChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        int a4,
        struct DirectComposition::CVisualMarshaler *a5,
        bool *a6)
{
  unsigned int v6; // r10d
  _QWORD *i; // rax

  v6 = 0;
  *a6 = 0;
  if ( *((_QWORD *)a3 + 24) || a5 && *((DirectComposition::CVisualMarshaler **)a5 + 24) != this )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( a4 )
    {
      if ( a5 )
      {
        *((_QWORD *)a3 + 23) = *((_QWORD *)a5 + 23);
        *((_QWORD *)a5 + 23) = a3;
      }
      else
      {
        *((_QWORD *)a3 + 23) = *((_QWORD *)this + 22);
        *((_QWORD *)this + 22) = a3;
      }
    }
    else
    {
      for ( i = (_QWORD *)((char *)this + 176);
            (struct DirectComposition::CVisualMarshaler *)*i != a5;
            i = (_QWORD *)(*i + 184LL) )
      {
        ;
      }
      *((_QWORD *)a3 + 23) = a5;
      *i = a3;
    }
    if ( (*((_QWORD *)a3 + 3))++ == -1LL )
      KeBugCheck(0xC01E0103);
    *((_QWORD *)a3 + 24) = this;
    *((_DWORD *)this + 4) |= 0x4000u;
    *a6 = 1;
  }
  return v6;
}

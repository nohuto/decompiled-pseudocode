/*
 * XREFs of ?AddChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@H1PEA_N@Z @ 0x1C009A140
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::AddChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        int a4,
        struct DirectComposition::CVisualMarshaler *a5,
        bool *a6)
{
  unsigned int v6; // edi
  _QWORD *i; // rax

  v6 = 0;
  *a6 = 0;
  if ( *((_QWORD *)a3 + 25) || a5 && *((DirectComposition::CVisualMarshaler **)a5 + 25) != this )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( a4 )
    {
      if ( a5 )
      {
        *((_QWORD *)a3 + 24) = *((_QWORD *)a5 + 24);
        *((_QWORD *)a5 + 24) = a3;
      }
      else
      {
        *((_QWORD *)a3 + 24) = *((_QWORD *)this + 23);
        *((_QWORD *)this + 23) = a3;
      }
    }
    else
    {
      for ( i = (_QWORD *)((char *)this + 184);
            (struct DirectComposition::CVisualMarshaler *)*i != a5;
            i = (_QWORD *)(*i + 192LL) )
      {
        ;
      }
      *((_QWORD *)a3 + 24) = a5;
      *i = a3;
    }
    DirectComposition::CResourceMarshaler::AddRef(a3);
    *((_QWORD *)a3 + 25) = this;
    *((_DWORD *)this + 4) |= 0x4000u;
    *a6 = 1;
  }
  return v6;
}

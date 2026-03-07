char __fastcall CCustomKernelEffect::IsUVClampingRequired(
        CCustomKernelEffect *this,
        __int64 a2,
        __int64 a3,
        enum Windows::UI::Composition::SampleEdgeMode *a4,
        enum Windows::UI::Composition::SampleEdgeMode *a5)
{
  int v5; // eax

  v5 = *((unsigned __int8 *)this + 9);
  if ( !(_BYTE)v5 )
    return 0;
  if ( v5 == 1 )
  {
    if ( a4 )
      *(_BYTE *)a4 = 1;
    if ( a5 )
      *(_BYTE *)a5 = 1;
  }
  else if ( v5 == 3 )
  {
    if ( a4 )
      *(_BYTE *)a4 = 3;
    if ( a5 )
      *(_BYTE *)a5 = 3;
  }
  return 1;
}

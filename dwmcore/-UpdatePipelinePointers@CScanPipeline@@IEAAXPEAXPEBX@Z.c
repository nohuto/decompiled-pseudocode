void __fastcall CScanPipeline::UpdatePipelinePointers(CScanPipeline *this, void *a2, const void *a3)
{
  int v3; // r10d
  __int64 *i; // r11
  __int64 v7; // rcx
  int v8; // edx
  __int64 *j; // r8
  __int64 v10; // rcx

  v3 = *((_DWORD *)this + 140);
  for ( i = (__int64 *)*((_QWORD *)this + 67); v3; --v3 )
  {
    v7 = *i++;
    *(_QWORD *)(v7 + *((_QWORD *)this + 1)) = a2;
  }
  if ( a3 )
  {
    v8 = *((_DWORD *)this + 154);
    for ( j = (__int64 *)*((_QWORD *)this + 74); v8; --v8 )
    {
      v10 = *j++;
      *(_QWORD *)(v10 + *((_QWORD *)this + 1)) = a3;
    }
  }
}

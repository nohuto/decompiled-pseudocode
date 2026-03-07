void __fastcall KeCopyXfdMaskToPeb(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 *v3; // rax

  if ( _bittest64(&KeFeatureBits, 0x37u) )
  {
    v1 = a1[170];
    if ( v1 )
    {
      v2 = 0LL;
      v3 = (__int64 *)a1[176];
      if ( v3 )
        v2 = *v3;
      *(_QWORD *)(v1 + 1992) = a1[129];
      if ( v2 )
        *(_QWORD *)(v2 + 1152) = a1[129];
    }
  }
}

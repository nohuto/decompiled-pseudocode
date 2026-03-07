__int64 __fastcall MiFindLargestLoaderDescriptor(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  ULONG_PTR v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx
  _BYTE v14[512]; // [rsp+20h] [rbp-218h] BYREF

  qword_140C6F340 = -1LL;
  MxComputeFreeNodeDescriptorRequirements(a1, v14);
  v2 = a1 + 352;
  v3 = *(_QWORD *)(v2 + 8);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      return 1LL;
    v4 = v3 ^ (v2 | 1);
  }
  else
  {
    v4 = *(_QWORD *)(v2 + 8);
  }
  while ( v4 )
  {
    v6 = *(int *)(v4 + 24);
    if ( (unsigned int)v6 > 0x2A || (v7 = 0x5C5C0C00048LL, !_bittest64(&v7, v6)) )
    {
      v8 = *(_QWORD *)(v4 + 32);
      v9 = *(_QWORD *)(v4 + 40);
      if ( v9 + v8 > qword_140C6F348 )
        qword_140C6F348 = v9 + v8 - 1;
      qword_140C6F350 += v9;
      if ( v8 < qword_140C6F340 )
        qword_140C6F340 = v8;
      v10 = *(_DWORD *)(v4 + 24);
      if ( v10 == 2 || v10 == 24 )
        MxInitializeFreeNodeDescriptors(v4, v14);
    }
    v11 = *(_QWORD **)(v4 + 8);
    v12 = v4;
    if ( v11 )
    {
      v5 = (_QWORD *)*v11;
      v4 = *(_QWORD *)(v4 + 8);
      if ( *v11 )
      {
        do
        {
          v4 = (unsigned __int64)v5;
          v5 = (_QWORD *)*v5;
        }
        while ( v5 );
      }
    }
    else
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v4 || *(_QWORD *)v4 == v12 )
          break;
        v12 = v4;
      }
    }
  }
  return 1LL;
}

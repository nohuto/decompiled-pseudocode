DDisplayPrimaryBufferResources *__fastcall std::_Uninitialized_move<DDisplayPrimaryBufferResources *>(
        __int64 a1,
        __int64 a2,
        DDisplayPrimaryBufferResources *a3)
{
  __int64 v4; // r8
  char *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( a1 != a2 )
  {
    v4 = a1 + 16;
    v5 = (char *)a3 - a1;
    do
    {
      v6 = *(_QWORD *)(v4 - 16);
      *(_QWORD *)(v4 - 16) = 0LL;
      *(_QWORD *)a3 = v6;
      a3 = (DDisplayPrimaryBufferResources *)((char *)a3 + 32);
      *(_QWORD *)&v5[v4 - 8] = *(_QWORD *)(v4 - 8);
      *(_QWORD *)(v4 - 8) = 0LL;
      v7 = *(_QWORD *)v4;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)&v5[v4] = v7;
      v5[v4 + 8] = *(_BYTE *)(v4 + 8);
      v4 += 32LL;
    }
    while ( v4 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(a3, a3);
  return a3;
}

void __fastcall DestroyHandleFirstPass(struct _HANDLEENTRY *a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int i; // r8d
  __int64 v7; // rcx

  v1 = gpKernelHandleTable;
  v3 = (unsigned int)((a1 - qword_1C02D0E08) >> 5);
  v4 = 3 * v3;
  if ( *((_BYTE *)a1 + 24) == 22 )
    HMUnlockObject(*(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * v3) + 16LL));
  v5 = v1[v4];
  if ( *(_DWORD *)(v5 + 8) )
  {
    if ( *((_BYTE *)a1 + 24) == 13 )
    {
      *(_QWORD *)(v5 + 48) = 0LL;
      *(_QWORD *)(v5 + 56) = 0LL;
      if ( *(_QWORD *)(v5 + 96) )
      {
        for ( i = 0; i < *(_DWORD *)(v5 + 88); *(_QWORD *)(*(_QWORD *)(v5 + 96) + 8 * v7) = 0LL )
          v7 = i++;
      }
      *(_DWORD *)(v5 + 88) = 0;
    }
  }
  else
  {
    HMDestroyObject((void *)v1[v4]);
  }
}

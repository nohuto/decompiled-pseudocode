void __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v3; // rcx
  unsigned __int64 v4; // r8
  void *v5; // rdi
  HANDLE ProcessHeap; // rax
  int v7; // eax
  LPVOID v8; // rax

  v3 = *(void **)(a1 + 8);
  if ( *(void **)a1 != v3 )
  {
    v4 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v3, *(const void **)a1, (unsigned int)v4);
        v5 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v5);
        }
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        v7 = *(_DWORD *)(a1 + 16);
        goto LABEL_8;
      }
      v8 = DefaultHeap::Realloc(*(void **)a1, (unsigned int)v4);
      if ( v8 )
      {
        *(_QWORD *)a1 = v8;
        v7 = *(_DWORD *)(a1 + 24);
LABEL_8:
        *(_DWORD *)(a1 + 20) = v7;
      }
    }
  }
}

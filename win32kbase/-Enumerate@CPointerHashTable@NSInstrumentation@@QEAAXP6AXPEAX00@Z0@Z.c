void __fastcall NSInstrumentation::CPointerHashTable::Enumerate(
        NSInstrumentation::CPointerHashTable *this,
        void (*a2)(void *, void *, void *),
        void *a3)
{
  unsigned int v3; // edi
  unsigned int v7; // ebp
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx

  v3 = *((_DWORD *)this + 12);
  if ( v3 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v8 >= *((_DWORD *)this + 10) )
        break;
      v9 = *((_QWORD *)this + 4);
      v10 = *(_QWORD *)(v9 + 16LL * v8);
      if ( v10 )
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a2)(v10, *(_QWORD *)(v9 + 16LL * v8 + 8), a3);
        ++v7;
      }
      ++v8;
    }
    while ( v7 < v3 );
  }
}

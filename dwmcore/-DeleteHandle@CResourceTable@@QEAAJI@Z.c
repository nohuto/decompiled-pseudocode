__int64 __fastcall CResourceTable::DeleteHandle(CResourceTable *this, unsigned int a2)
{
  unsigned int v4; // r8d
  unsigned int *v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r8d

  if ( (unsigned int)HANDLE_TABLE::ValidEntry((CResourceTable *)((char *)this + 16), a2) )
  {
    v5 = (unsigned int *)(*((_QWORD *)this + 5) + *((_DWORD *)this + 6) * a2);
    if ( v5 )
    {
      if ( *v5 )
      {
        if ( *((_QWORD *)v5 + 1) )
        {
          v6 = AddToResourceCount(*((_QWORD *)this + 7) + 44LL, *v5, 0xFFFFFFFFLL);
          anonymous_namespace_::AddToResourceCount(v6, v7);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 1) + 16LL))(*((_QWORD *)v5 + 1));
          *((_QWORD *)v5 + 1) = 0LL;
        }
        memset_0((void *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
        return 0;
      }
    }
  }
  return v4;
}

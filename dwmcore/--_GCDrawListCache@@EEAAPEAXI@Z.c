CDrawListCache *__fastcall CDrawListCache::`scalar deleting destructor'(CDrawListCache *this, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rbx
  int Current; // eax
  struct CThreadContext *v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v18; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CDrawListCache::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  *((_QWORD *)this + 2) = &CDrawListCache::`vftable'{for `IDeviceResourceNotify'};
  CDrawListCache::ReleaseDrawListEntries(this);
  v4 = 8 * detail::pointer_buffer_impl<IDeviceResource *>::size((char *)this + 56);
  v5 = detail::pointer_buffer_impl<IDeviceResource *>::first((char *)this + 56) + v4;
  v7 = (v5 - detail::pointer_buffer_impl<IDeviceResource *>::first((char *)this + 56)) >> 3;
  if ( v7 )
    detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::clear_region(
      (char *)this + 56,
      v6,
      v7);
  if ( (*((_BYTE *)this + 56) & 3) == 1 )
  {
    v16 = detail::pointer_buffer_impl<IDeviceResource *>::first((char *)this + 56);
    operator delete((void *)(v16 - 16));
  }
  v8 = 8 * detail::pointer_buffer_impl<CDrawListEntry *>::size((char *)this + 48);
  v9 = detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 48) + v8;
  v11 = (v9 - detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 48)) >> 3;
  if ( v11 )
    detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear_region(
      (char *)this + 48,
      v10,
      v11);
  if ( (*((_BYTE *)this + 48) & 3) == 1 )
  {
    v15 = detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 48);
    operator delete((void *)(v15 - 16));
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x68uLL);
    }
    else
    {
      Current = CThreadContext::GetCurrent(&v18);
      if ( Current < 0 )
        ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      v13 = v18;
      if ( *((_DWORD *)v18 + 29) >= *((_DWORD *)v18 + 28) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)v18 + 15);
        ++*((_DWORD *)v13 + 29);
        *((_QWORD *)v13 + 15) = this;
      }
    }
  }
  return this;
}

unsigned __int64 __fastcall detail::pointer_buffer_impl<IDeviceResource *>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  void *v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r15
  _QWORD *v9; // rax
  const void *v10; // rax
  int v11; // eax
  int v12; // eax
  __int128 v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = 0LL;
  v5 = detail::pointer_buffer_impl<IDeviceResource *>::size(a1);
  if ( (*(_DWORD *)a1 & 3) == 0 )
  {
LABEL_10:
    v6 = 1LL;
    goto LABEL_5;
  }
  if ( (*(_DWORD *)a1 & 3) != 1 )
  {
    if ( (*(_DWORD *)a1 & 3) == 2 )
    {
      v6 = 0LL;
      goto LABEL_5;
    }
    if ( (*(_DWORD *)a1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_10;
  }
  v6 = *(_QWORD *)(detail::pointer_buffer_impl<IDeviceResource *>::first(a1) - 8);
LABEL_5:
  result = v6 - v5;
  if ( result >= a2 )
    return result;
  v8 = v5 + a2;
  if ( v5 + a2 < v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_17;
  }
  if ( v8 != 1 )
  {
    v9 = operator new(8 * v8 + 16);
    *v9 = 0LL;
    a2 = (unsigned __int64)(v9 + 2);
    v9[1] = 0LL;
    v10 = (const void *)detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
    *(_QWORD *)&v13 = a2;
    *((_QWORD *)&v13 + 1) = v5;
    v14 = 0LL;
    v15 = v13;
    v16 = 0LL;
    std::uninitialized_copy<std::move_iterator<IDeviceResource * *>,stdext::checked_array_iterator<IDeviceResource * *>>(
      (__int64)&v13,
      v10,
      (__int64)v10 + 8 * v5,
      (__int64 *)&v15);
    v11 = *(_DWORD *)a1 & 3;
    if ( !v11 )
    {
LABEL_12:
      *a1 = a2 | 1;
      operator delete(v4);
      *(_QWORD *)(detail::pointer_buffer_impl<IDeviceResource *>::first(a1) - 16) = v5;
      result = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
      *(_QWORD *)(result - 8) = v8;
      return result;
    }
LABEL_17:
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( (unsigned int)(v12 - 1) >= 2 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
    else
    {
      v4 = (void *)(detail::pointer_buffer_impl<IDeviceResource *>::first(a1) - 16);
    }
    goto LABEL_12;
  }
  *a1 = 3LL;
  return result;
}

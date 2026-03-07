void __fastcall CRenderTargetManager::RemoveRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  struct CRenderTarget **v2; // r8
  struct CRenderTarget **v4; // rcx
  struct CRenderTarget **i; // rdi
  struct CRenderTarget **v7; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  struct CRenderTarget *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (struct CRenderTarget **)*((_QWORD *)this + 5);
  v4 = (struct CRenderTarget **)*((_QWORD *)this + 4);
  if ( v4 == v2 )
  {
LABEL_2:
    if ( *((_BYTE *)this + 576) )
    {
      v8 = (_QWORD *)*((_QWORD *)this + 8);
      if ( v8 == *((_QWORD **)this + 9) )
      {
        std::vector<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<CRenderTarget * &>(
          (char *)this + 56,
          v8,
          &v10,
          a2);
      }
      else
      {
        *v8 = a2;
        if ( a2 )
          (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
        *((_QWORD *)this + 8) += 8LL;
      }
    }
    else
    {
      for ( i = (struct CRenderTarget **)*((_QWORD *)this + 1); i != *((struct CRenderTarget ***)this + 2); ++i )
      {
        if ( *i == a2 )
        {
          v9 = 0LL;
          if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(
                      (__int64)a2,
                      &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
                      &v9) >= 0 )
          {
            *((_BYTE *)this + 578) = 1;
            *((_BYTE *)this + 580) = 1;
          }
          memmove_0(i, i + 1, *((_QWORD *)this + 2) - (_QWORD)(i + 1));
          *((_QWORD *)this + 2) -= 8LL;
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v9);
          return;
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = v4 + 1;
      if ( *v4 == a2 )
        break;
      ++v4;
      if ( v7 == v2 )
        goto LABEL_2;
    }
    memmove_0(v4, v7, (char *)v2 - (char *)v7);
    *((_QWORD *)this + 5) -= 8LL;
  }
}

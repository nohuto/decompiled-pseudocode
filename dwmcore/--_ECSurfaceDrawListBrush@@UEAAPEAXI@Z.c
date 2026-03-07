CSurfaceDrawListBrush *__fastcall CSurfaceDrawListBrush::`vector deleting destructor'(
        CSurfaceDrawListBrush *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *Value; // rbx
  __int64 v9; // rcx
  CThreadContext *v10; // rax
  __int64 v11; // rcx
  CThreadContext *v12; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    v5 = *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + v4 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
  {
    v9 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x98uLL);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v10 = (CThreadContext *)operator new(0x190uLL);
        if ( !v10 || (v12 = CThreadContext::CThreadContext(v10), (Value = v12) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v12);
      }
      if ( *((_DWORD *)Value + 69) >= *((_DWORD *)Value + 68) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = Value[35];
        ++*((_DWORD *)Value + 69);
        Value[35] = this;
      }
    }
  }
  return this;
}

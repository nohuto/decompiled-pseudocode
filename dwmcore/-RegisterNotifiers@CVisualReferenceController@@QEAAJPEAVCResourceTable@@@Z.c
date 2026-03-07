__int64 __fastcall CVisualReferenceController::RegisterNotifiers(
        CVisualReferenceController *this,
        struct CResourceTable *a2)
{
  unsigned int v2; // edi
  __int64 *v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  CVisualReferenceController **v8; // rax
  __int64 v9; // rcx
  CVisualReferenceController **i; // rdx
  _QWORD *v11; // rdx
  struct CResourceTable *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = 0;
  if ( *((_QWORD *)this + 8) )
  {
    v4 = (__int64 *)((char *)this + 72);
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset((char *)this + 72);
    v5 = CWeakReference<CVisual>::Create(*((_QWORD *)this + 8), v4);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x13u, 0LL);
    }
    else
    {
      v7 = *v4;
      v13 = this;
      v8 = *(CVisualReferenceController ***)(v7 + 32);
      v9 = v7 + 24;
      for ( i = *(CVisualReferenceController ***)v9; i != v8; ++i )
      {
        if ( *i == this )
          goto LABEL_7;
      }
      v11 = *(_QWORD **)(v9 + 8);
      if ( v11 == *(_QWORD **)(v9 + 16) )
      {
        std::vector<CResource *>::_Emplace_reallocate<CResource * const &>(v9, v11, &v13);
      }
      else
      {
        *v11 = this;
        *(_QWORD *)(v9 + 8) += 8LL;
      }
LABEL_7:
      *((_QWORD *)this + 8) = 0LL;
    }
  }
  return v2;
}

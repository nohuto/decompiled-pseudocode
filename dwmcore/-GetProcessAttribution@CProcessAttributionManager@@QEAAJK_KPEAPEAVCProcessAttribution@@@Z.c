__int64 __fastcall CProcessAttributionManager::GetProcessAttribution(
        CProcessAttributionManager *this,
        unsigned int a2,
        unsigned __int64 a3,
        struct CProcessAttribution **a4)
{
  unsigned int v8; // esi
  char *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rcx
  CProcessAttributionManager::Record *v13; // rax
  unsigned int v14; // ecx
  void *v15; // rax
  const struct CProcessAttributionManager::ProcessAttributionRecord *v16; // rbp
  char *v17; // rcx
  int ProcessAttribution; // eax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-38h]
  void *Src; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  v22 = a3;
  v8 = 0;
  std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
    &Src,
    *(_QWORD *)this,
    *((_QWORD *)this + 1),
    &v22);
  v9 = (char *)Src;
  if ( Src == *((void **)this + 1) || (v10 = *(_QWORD *)Src, **(_QWORD **)Src != a3) )
  {
    v13 = (CProcessAttributionManager::Record *)DefaultHeap::Alloc(0xA8uLL);
    if ( !v13
      || (v15 = (void *)CProcessAttributionManager::Record::Record(
                          v13,
                          a2,
                          a3,
                          (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3),
          Src = v15,
          (v16 = (const struct CProcessAttributionManager::ProcessAttributionRecord *)v15) == 0LL) )
    {
      v8 = -2147024882;
      v19 = -2147024882;
      v20 = 229;
      goto LABEL_21;
    }
    v17 = (char *)*((_QWORD *)this + 1);
    if ( v17 == *((char **)this + 2) )
    {
      std::vector<CProcessAttributionManager::Record *>::_Emplace_reallocate<CProcessAttributionManager::Record * const &>(
        this,
        v9,
        &Src);
      v16 = (const struct CProcessAttributionManager::ProcessAttributionRecord *)Src;
    }
    else if ( v9 == v17 )
    {
      *(_QWORD *)v17 = v15;
      *((_QWORD *)this + 1) += 8LL;
    }
    else
    {
      *(_QWORD *)v17 = *((_QWORD *)v17 - 1);
      *((_QWORD *)this + 1) += 8LL;
      memmove_0(v9 + 8, v9, v17 - v9 - 8);
      *(_QWORD *)v9 = v16;
    }
    ProcessAttribution = CProcessAttributionManager::CreateProcessAttribution(this, a2, v16, 1, a4);
    v8 = ProcessAttribution;
    if ( ProcessAttribution >= 0 )
    {
      *((_QWORD *)v16 + 14) = *a4;
      *((_DWORD *)v16 + 40) = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3;
      return v8;
    }
    v20 = 236;
LABEL_19:
    v19 = ProcessAttribution;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v19, v20, 0LL);
    return v8;
  }
  v11 = *(_QWORD *)(v10 + 112);
  if ( !v11 )
  {
    ProcessAttribution = CProcessAttributionManager::CreateProcessAttribution(
                           this,
                           a2,
                           (const struct CProcessAttributionManager::ProcessAttributionRecord *)v10,
                           1,
                           a4);
    v8 = ProcessAttribution;
    if ( ProcessAttribution >= 0 )
    {
      *(_QWORD *)(v10 + 112) = *a4;
      *(_DWORD *)(v10 + 160) = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3;
      return v8;
    }
    v20 = 217;
    goto LABEL_19;
  }
  *a4 = (struct CProcessAttribution *)v11;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 8));
  return v8;
}

__int64 __fastcall CEffectBrush::ProcessSetPropertySet(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EFFECTBRUSH_SETPROPERTYSET *a3)
{
  char *v3; // rdi
  __int64 Resource; // rax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  v3 = (char *)this + 104;
  if ( *((_QWORD *)this + 13) )
  {
    v7 = -2003303422;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303422, 0x8Fu, 0LL);
  }
  else
  {
    Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 135LL);
    if ( Resource )
    {
      Microsoft::WRL::ComPtr<CPropertySet>::operator=(v3, Resource);
      if ( CEffectBrush::HasValidTemplate(this) )
        *(_QWORD *)(*(_QWORD *)v3 + 80LL) = ((unsigned __int64)this + 88) & -(__int64)(this != 0LL);
      return 0;
    }
    else
    {
      v7 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x95u, 0LL);
    }
  }
  return v7;
}

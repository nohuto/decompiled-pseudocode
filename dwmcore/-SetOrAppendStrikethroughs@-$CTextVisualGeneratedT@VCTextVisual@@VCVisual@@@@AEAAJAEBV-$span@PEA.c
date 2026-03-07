__int64 __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::SetOrAppendStrikethroughs(
        CResource *this,
        __int64 a2,
        char a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v6 = CResource::RegisterNNotifiersInternal(this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x27A5u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CKeyframeAnimation>(this, (struct CResource ***)this + 91);
    std::vector<CCompositionTextLine *>::insert<CCompositionTextLine * *,0>(
      (_QWORD *)this + 91,
      &v10,
      *((_BYTE **)this + 92),
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    CResource::NotifyOnChanged(*((_QWORD *)this + 32), 0, 0LL);
  }
  return v8;
}

void __fastcall CCompositionTextLine::OnBrushChanged(CCompositionTextLine *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 13);
  v2 = *((_QWORD *)this + 10);
  if ( v2 != *(_QWORD *)(v1 + 88) )
  {
    if ( v2 )
    {
      v3 = CResource::RegisterNotifier(*((CResource **)this + 13), *((struct CResource **)this + 10));
      if ( v3 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v3, retaddr);
    }
    CResource::UnRegisterNotifierInternal((CResource *)v1, *(struct CResource **)(v1 + 88));
    *(_QWORD *)(v1 + 88) = v2;
    *(_BYTE *)(v1 + 80) = CClipBrush::IsBrushGraphRequired((CClipBrush *)v1);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 72LL))(v1, 14LL);
  }
}

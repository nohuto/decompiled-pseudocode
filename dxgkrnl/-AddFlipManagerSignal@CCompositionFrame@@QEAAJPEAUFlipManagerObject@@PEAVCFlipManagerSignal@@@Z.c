NTSTATUS __fastcall CCompositionFrame::AddFlipManagerSignal(
        CCompositionFrame *this,
        struct FlipManagerObject *a2,
        struct CFlipManagerSignal *a3)
{
  NTSTATUS result; // eax
  CCompositionFrame *v7; // r8
  CCompositionFrame **v8; // r9

  result = ObReferenceObjectByPointer(a2, 3u, g_pDxgkCompositionObjectType, 0);
  if ( result >= 0 )
  {
    *((_QWORD *)a3 + 5) = a2;
    v7 = (CCompositionFrame *)(((unsigned __int64)a3 + 8) & -(__int64)(a3 != 0LL));
    v8 = (CCompositionFrame **)*((_QWORD *)this + 24);
    if ( *v8 != (CCompositionFrame *)((char *)this + 184) )
      __fastfail(3u);
    *(_QWORD *)v7 = (char *)this + 184;
    *(_QWORD *)((((unsigned __int64)a3 + 8) & -(__int64)(a3 != 0LL)) + 8) = v8;
    *v8 = v7;
    *((_QWORD *)this + 24) = v7;
  }
  return result;
}

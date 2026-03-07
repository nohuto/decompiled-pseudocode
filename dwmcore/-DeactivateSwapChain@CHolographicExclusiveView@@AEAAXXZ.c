void __fastcall CHolographicExclusiveView::DeactivateSwapChain(CHolographicExclusiveView *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 82) )
  {
    v2 = *((_QWORD *)this + 12);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 104);
      if ( v3 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 400LL))(v3, 0LL);
    }
    if ( *((_BYTE *)this + 81) )
      CHolographicExclusiveView::CloseSurfaceHandles((HANDLE *)this);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_BYTE *)this + 80) = 0;
  }
}

void __fastcall CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(__int64 a1)
{
  unsigned int v2; // edi

  operator delete(*(void **)a1);
  operator delete(*(void **)(a1 + 8));
  operator delete(*(void **)(a1 + 16));
  operator delete(*(void **)(a1 + 24));
  operator delete(*(void **)(a1 + 32));
  v2 = 0;
  if ( *(_QWORD *)(a1 + 48) && *(_DWORD *)(a1 + 64) )
  {
    do
      operator delete(*(void **)(*(_QWORD *)(a1 + 48) + 8LL * v2++));
    while ( v2 < *(_DWORD *)(a1 + 64) );
  }
  operator delete(*(void **)(a1 + 48));
  operator delete(*(void **)(a1 + 40));
  operator delete(*(void **)(a1 + 56));
}

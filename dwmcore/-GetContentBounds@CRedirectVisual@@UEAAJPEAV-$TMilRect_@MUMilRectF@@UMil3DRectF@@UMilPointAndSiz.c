__int64 __fastcall CRedirectVisual::GetContentBounds(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  void (__fastcall ***v4)(_QWORD, char *, _QWORD *); // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 256);
  if ( v2 )
  {
    CRedirectedVisualContent::ComputeBounds(*(CRedirectedVisualContent **)(a1 + 256));
    v4 = (void (__fastcall ***)(_QWORD, char *, _QWORD *))(v2 + *(int *)(*(_QWORD *)(v2 + 64) + 8LL) + 64LL);
    (**v4)(v4, &v6, a2);
  }
  else
  {
    a2[1] = 0LL;
    *a2 = 0LL;
  }
  return 0LL;
}

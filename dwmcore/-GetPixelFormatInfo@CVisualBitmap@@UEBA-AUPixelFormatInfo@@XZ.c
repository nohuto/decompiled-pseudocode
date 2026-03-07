_DWORD *__fastcall CVisualBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  void (__fastcall ***v4)(_QWORD, _DWORD *); // rcx

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    v4 = (void (__fastcall ***)(_QWORD, _DWORD *))(v3 + 64 + *(int *)(*(_QWORD *)(v3 + 64) + 8LL));
    (**v4)(v4, a2);
  }
  else
  {
    *a2 = 87;
    a2[1] = 1;
    a2[2] = 0;
  }
  return a2;
}

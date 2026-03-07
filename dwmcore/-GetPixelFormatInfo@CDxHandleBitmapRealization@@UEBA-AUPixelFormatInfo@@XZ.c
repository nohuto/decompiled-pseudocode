_DWORD *__fastcall CDxHandleBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  void (__fastcall ***v5)(_QWORD, _DWORD *); // rcx
  int v7; // ecx

  v2 = *(_QWORD *)(a1 - 64);
  if ( v2 )
  {
    v5 = (void (__fastcall ***)(_QWORD, _DWORD *))(v2 + 16 + *(int *)(*(_QWORD *)(v2 + 16) + 12LL));
    (**v5)(v5, a2);
  }
  else
  {
    *a2 = 0;
    v7 = 3;
    if ( *(_DWORD *)(a1 - 344) )
      v7 = *(_DWORD *)(a1 - 344);
    a2[1] = v7;
    a2[2] = *(_DWORD *)(a1 - 296);
  }
  return a2;
}

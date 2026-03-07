_DWORD *__fastcall CColorKeyBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  void (__fastcall ***v3)(_QWORD); // rcx

  v3 = (void (__fastcall ***)(_QWORD))(*(_QWORD *)(a1 - 144)
                                     + 8LL
                                     + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 - 144) + 8LL) + 8LL));
  (**v3)(v3);
  if ( *a2 == 88 )
    *a2 = 87;
  a2[1] = 1;
  return a2;
}

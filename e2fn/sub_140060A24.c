_QWORD *__fastcall sub_140060A24(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1[49];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( a1[60] )
  {
    sub_1400A27D4(v6, a1[56] + 16LL);
    if ( a1[60] )
      sub_1400A2D78(a1 + 55);
    a2[1] = v6[1];
    *a2 = v6[0];
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  return a2;
}

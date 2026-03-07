__int64 __fastcall sub_14006FF90(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 344);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  while ( *(_QWORD *)(a1 + 400) )
    sub_1400A2D78(a1 + 360);
  *(_BYTE *)(a1 + 216) = 1;
  *(_QWORD *)(a1 + 232) = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
}

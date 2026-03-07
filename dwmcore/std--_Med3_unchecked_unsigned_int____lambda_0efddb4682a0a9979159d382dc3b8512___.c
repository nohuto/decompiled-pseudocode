__int64 __fastcall std::_Med3_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r8

  v5 = (unsigned int)*a2;
  v7 = (unsigned int)*a1;
  if ( *(float *)(*(_QWORD *)(a4 + 1064) + 4 * v7) > *(float *)(*(_QWORD *)(a4 + 1064) + 4 * v5) )
  {
    *a2 = v7;
    *a1 = v5;
  }
  v8 = (unsigned int)*a3;
  result = *(_QWORD *)(a4 + 1064);
  v10 = (unsigned int)*a2;
  if ( *(float *)(result + 4 * v10) > *(float *)(result + 4 * v8) )
  {
    *a3 = v10;
    *a2 = v8;
    result = *(_QWORD *)(a4 + 1064);
    v11 = (unsigned int)*a1;
    if ( *(float *)(result + 4 * v11) > *(float *)(result + 4 * v8) )
    {
      *a2 = v11;
      *a1 = v8;
    }
  }
  return result;
}

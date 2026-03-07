__int64 __fastcall RtlGetFirstRange(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  unsigned int v4; // r11d
  __int64 v5; // r10
  __int64 result; // rax

  *(_QWORD *)a2 = a1;
  v3 = 0LL;
  v4 = 0;
  *(_DWORD *)(a2 + 24) = *((_DWORD *)a1 + 6);
  v5 = *a1;
  if ( (__int64 *)*a1 == a1 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    v4 = -2147483622;
  }
  else
  {
    if ( (*(_BYTE *)(v5 - 6) & 1) != 0 )
    {
      *(_QWORD *)(a2 + 8) = v5 - 24;
      v5 = *(_QWORD *)(v5 - 24);
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0LL;
    }
    v3 = v5 - 40;
  }
  *(_QWORD *)(a2 + 16) = v3;
  result = v4;
  *a3 = v3;
  return result;
}

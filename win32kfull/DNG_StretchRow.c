__int64 __fastcall DNG_StretchRow(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rdi
  unsigned int v5; // esi
  unsigned int v6; // ebx
  _DWORD *v7; // r10
  unsigned __int64 v8; // r11
  _DWORD *v9; // r9
  __int64 result; // rax
  unsigned __int64 v11; // r8
  bool v12; // cf

  v4 = a4[3];
  v5 = a4[2];
  v6 = a4[1];
  v7 = (_DWORD *)(a2 + 4LL * (int)a4[6]);
  v8 = a2 + 4LL * (int)a4[7];
  v9 = (_DWORD *)(a3 + 4LL * *a4);
  result = *(_DWORD *)(a1 + 52) - *(_DWORD *)(a1 + 56);
  v11 = a3 + 4 * result;
  if ( *(_QWORD *)(a1 + 216) <= (unsigned __int64)v7
    && v8 <= *(_QWORD *)(a1 + 224)
    && *(_QWORD *)(a1 + 232) <= (unsigned __int64)v9
    && v11 <= *(_QWORD *)(a1 + 240) )
  {
    while ( (unsigned __int64)v7 < v8 && (unsigned __int64)v9 < v11 )
    {
      v12 = v6 + v5 < v6;
      *v7 = *v9;
      v6 += v5;
      result = v12 + v4;
      ++v7;
      v9 += result;
    }
  }
  return result;
}

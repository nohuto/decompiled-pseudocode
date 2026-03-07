__int64 __fastcall IvtBuildContextEntry(__int64 a1, char a2, unsigned __int16 a3, __int64 a4, __int64 *a5)
{
  __int64 result; // rax

  *a5 = 0LL;
  result = *(_DWORD *)a5 & 0xFF2;
  a5[1] = ((unsigned __int64)a3 << 8) | *(_DWORD *)(a1 + 248) & 7;
  *a5 = result | (4 * ((a4 << 10) | a2 & 3)) | 1;
  return result;
}

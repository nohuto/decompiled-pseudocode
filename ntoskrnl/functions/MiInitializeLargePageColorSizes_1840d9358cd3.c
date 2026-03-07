__int64 MiInitializeLargePageColorSizes()
{
  __int64 result; // rax
  unsigned __int64 v1; // rdi
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdi
  int v4; // [rsp+30h] [rbp-48h] BYREF
  int (__fastcall *v5)(_QWORD, __int64, __int128 *); // [rsp+38h] [rbp-40h] BYREF
  __int128 v6; // [rsp+40h] [rbp-38h] BYREF
  __int128 v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-18h]

  dword_140C65804 = 17;
  v5 = 0LL;
  v4 = 0;
  v6 = 0LL;
  dword_140C65800[0] = 4;
  v7 = 0LL;
  v8 = 0LL;
  result = ((__int64 (__fastcall *)(__int64, __int64, int (__fastcall **)(_QWORD, __int64, __int128 *), int *))off_140C020E8[0])(
             49LL,
             8LL,
             &v5,
             &v4);
  if ( (int)result >= 0 )
  {
    v1 = -1LL;
    v2 = 0;
    if ( KeNumberNodes )
    {
      do
      {
        if ( v5(v2, 1LL, &v6) >= 0 && *((_QWORD *)&v6 + 1) && DWORD2(v7) == 1 && *((_QWORD *)&v6 + 1) < v1 )
          v1 = *((_QWORD *)&v6 + 1);
        result = (unsigned __int16)KeNumberNodes;
        ++v2;
      }
      while ( v2 < (unsigned __int16)KeNumberNodes );
      if ( v1 != -1LL )
      {
        v3 = v1 >> 30;
        if ( (_DWORD)v3 )
        {
          dword_140C65800[0] = v3;
          dword_140C65804 = v3;
        }
      }
    }
  }
  return result;
}

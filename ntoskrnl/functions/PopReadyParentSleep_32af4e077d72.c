bool __fastcall PopReadyParentSleep(__int64 *a1, __int64 a2, unsigned __int8 a3, char a4)
{
  char v4; // r11
  __int64 *v7; // rax
  __int64 **v8; // rcx
  __int64 v9; // rax
  __int64 **v10; // rcx

  v4 = 0;
  if ( (!a4 || (a1[75] & 0x30000) != 0) && (*((_DWORD *)a1 + 23))-- == 1 )
  {
    v7 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1
      || (v8 = (__int64 **)a1[1], *v8 != a1)
      || (*v8 = v7,
          v7[1] = (__int64)v8,
          v9 = a2 + 8 * (*((unsigned __int8 *)a1 + 56) + 8LL * *((unsigned __int8 *)a1 + 56) + 5),
          v10 = *(__int64 ***)(v9 + 8),
          *v10 != (__int64 *)v9) )
    {
      __fastfail(3u);
    }
    *a1 = v9;
    a1[1] = (__int64)v10;
    *v10 = a1;
    *(_QWORD *)(v9 + 8) = a1;
    return *((_BYTE *)a1 + 56) == a3;
  }
  return v4;
}

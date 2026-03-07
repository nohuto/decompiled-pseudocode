const void *__fastcall CDirectFlipInfo::UpdateHDRMetaData(CDirectFlipInfo *this)
{
  __int64 v2; // rcx
  const void *v3; // rdi
  int v4; // esi
  char *v5; // rbx
  const void *result; // rax
  int v7; // ecx
  __int64 v8; // xmm1_8
  __int128 Buf2; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h]
  int v11; // [rsp+38h] [rbp-30h]

  v2 = *((_QWORD *)this + 2);
  Buf2 = 0LL;
  v10 = 0LL;
  v3 = 0LL;
  v11 = 0;
  v4 = (*(unsigned __int8 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v2 + 392LL))(v2, &Buf2) != 0;
  if ( *((_DWORD *)this + 18) == v4 )
  {
    if ( v4 != 1 )
      return 0LL;
    v5 = (char *)this + 76;
    if ( !memcmp_0((char *)this + 76, &Buf2, 0x1CuLL) )
      return 0LL;
  }
  else
  {
    v5 = (char *)this + 76;
  }
  v7 = v11;
  v8 = v10;
  *(_OWORD *)v5 = Buf2;
  if ( v4 == 1 )
    v3 = v5;
  *((_DWORD *)this + 18) = v4;
  *((_QWORD *)v5 + 2) = v8;
  result = v3;
  *((_DWORD *)v5 + 6) = v7;
  return result;
}

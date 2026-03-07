bool __fastcall wil::details_abi::UsageIndexProperty::Write(
        wil::details_abi::UsageIndexProperty *this,
        char **a2,
        char *a3)
{
  char *v4; // rbx
  unsigned __int16 *v7; // r14
  rsize_t v8; // r9
  bool result; // al
  char *v10; // r14
  char *p_Source; // r8
  rsize_t v12; // r9
  rsize_t v13; // rdx
  __int16 Source; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a2;
  if ( *((_BYTE *)this + 2) == 1 )
  {
    v10 = v4 + 2;
    if ( v4 + 2 > a3 )
      return 0;
    p_Source = (char *)&Source;
    v12 = 2LL;
    Source = *((_WORD *)this + 2);
    v13 = 2LL;
    goto LABEL_9;
  }
  if ( *((_BYTE *)this + 2) == 2 )
  {
    v10 = v4 + 4;
    if ( v4 + 4 > a3 )
      return 0;
    v13 = 4LL;
    p_Source = (char *)this + 4;
    v12 = 4LL;
LABEL_9:
    memcpy_s(v4, v13, p_Source, v12);
    v4 = v10;
  }
  if ( *(_WORD *)this )
  {
    v7 = (unsigned __int16 *)((char *)this + 8);
  }
  else
  {
    if ( v4 + 2 > a3 )
      return 0;
    v7 = (unsigned __int16 *)((char *)this + 8);
    memcpy_s(v4, a3 - v4, (char *)this + 8, 2uLL);
    v4 += 2;
  }
  v8 = *v7;
  if ( &v4[v8] <= a3 )
  {
    memcpy_s(v4, a3 - v4, *((const void *const *)this + 3), v8);
    result = 1;
    *a2 = &v4[*v7];
    return result;
  }
  return 0;
}

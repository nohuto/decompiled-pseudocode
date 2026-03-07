__int64 __fastcall RtlStringCchCopyA(char *a1, __int64 a2, const char *a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // al
  char *v6; // rax

  v3 = 15LL;
  v4 = a3 - a1;
  do
  {
    if ( v3 == -2147483631 )
      break;
    v5 = a1[v4];
    if ( !v5 )
      break;
    *a1++ = v5;
    --v3;
  }
  while ( v3 );
  v6 = a1 - 1;
  if ( v3 )
    v6 = a1;
  *v6 = 0;
  return v3 == 0 ? 0x80000005 : 0;
}

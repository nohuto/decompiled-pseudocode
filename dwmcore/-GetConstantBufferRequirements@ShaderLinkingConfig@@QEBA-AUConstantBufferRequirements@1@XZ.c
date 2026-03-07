int *__fastcall ShaderLinkingConfig::GetConstantBufferRequirements(_BYTE *a1, int *a2)
{
  int v2; // r8d
  int v3; // eax
  int *v4; // rcx
  __int64 v5; // rax
  int *result; // rax
  int v7; // [rsp+8h] [rbp+8h] BYREF
  char v8; // [rsp+Ch] [rbp+Ch] BYREF

  v2 = 0;
  if ( a1[23] || a1[18] || (v3 = 0, a1[19]) )
    v3 = 1;
  v7 = v3;
  if ( a1[55] || a1[50] || a1[51] )
    v3 |= 2u;
  if ( a1[87] || a1[82] || a1[83] )
    v3 |= 4u;
  if ( a1[119] || a1[114] || a1[115] )
    v3 |= 8u;
  v7 = v3;
  v4 = &v7;
  *a2 = v3;
  do
  {
    v5 = *(unsigned __int8 *)v4;
    v4 = (int *)((char *)v4 + 1);
    v2 += byte_180338DE0[v5];
  }
  while ( v4 != (int *)&v8 );
  result = a2;
  a2[1] = 32 * v2;
  return result;
}

unsigned __int64 __fastcall MmGetNodeFastLargePageCounts(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 *v4; // rcx
  void ***v5; // rax
  __int64 *v6; // r11
  void **v7; // r9
  unsigned __int64 i; // rdi
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v10 = 0;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  v3 = !_bittest64(&KeFeatureBits, 0x25u);
  v4 = &MiLargePageSizes[v3];
  do
  {
    if ( *v4 == 512 )
      break;
    v3 = (unsigned int)(v3 + 1);
    ++v4;
  }
  while ( (unsigned int)v3 < 3 );
  if ( (_DWORD)v3 == 3 )
    return 0LL;
  v5 = MiPartitionObjectToPartition((void **)0xFFFFFFFFFFFFFFFFLL, 0, &v10);
  if ( !v5 )
    return 0LL;
  v6 = &MiLargePageSizes[v3];
  v7 = &v5[2][3176 * v2] + 134 * (unsigned int)v3;
  for ( i = ((unsigned __int64)*v6 >> 9) * ((unsigned __int64)v7[1] + (_QWORD)*v7); (_DWORD)v3; LODWORD(v3) = v3 - 1 )
  {
    v7 -= 134;
    i += ((unsigned __int64)*--v6 >> 9) * ((unsigned __int64)v7[1] + (_QWORD)*v7);
  }
  if ( v10 )
    PsDereferencePartition((__int64)v5[25]);
  return i;
}

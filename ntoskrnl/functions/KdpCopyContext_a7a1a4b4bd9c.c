__int64 __fastcall KdpCopyContext(char *a1, int a2, _BYTE *a3)
{
  char *v3; // r10
  int v4; // r9d
  _BYTE *v5; // rcx
  _BYTE *v6; // r11
  char *v7; // rdx
  int v8; // r8d
  __int64 result; // rax
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // r8

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a3;
  v7 = (char *)(v3 - a3);
  v8 = 1232;
  do
  {
    v5[(_QWORD)v7] = *v5;
    ++v5;
    --v8;
  }
  while ( v8 );
  *((_DWORD *)v3 + 12) = v4;
  if ( (v4 & 0x100040) == 0x100040 )
  {
    v10 = *((_DWORD *)v3 + 313);
    v11 = *((unsigned int *)v6 + 313);
    if ( v10 <= (unsigned int)v11 )
      v11 = v10;
    KdpQuickMoveMemory(&v3[*((int *)v3 + 312) + 1232], &v6[*((int *)v6 + 312) + 1232], v11);
  }
  result = 1048704LL;
  if ( (v4 & 0x100080) == 0x100080 )
  {
    v12 = *((_DWORD *)v3 + 315);
    v13 = *((unsigned int *)v6 + 315);
    if ( v12 <= (unsigned int)v13 )
      v13 = v12;
    return KdpQuickMoveMemory(&v3[*((int *)v3 + 314) + 1232], &v6[*((int *)v6 + 314) + 1232], v13);
  }
  return result;
}

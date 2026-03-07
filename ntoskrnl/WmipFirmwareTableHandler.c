__int64 __fastcall WmipFirmwareTableHandler(_DWORD *a1)
{
  unsigned int v1; // edi
  unsigned int v3; // r10d
  int v4; // eax
  unsigned int v5; // eax
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v10; // r11d
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // eax
  size_t v15; // rsi
  void *v16; // rax
  void *v17; // rbp

  v1 = 0;
  v3 = 0;
  if ( !a1 )
    return 3221225711LL;
  v4 = a1[1];
  if ( !v4 )
  {
    v5 = a1[3];
    a1[3] = 8;
    if ( v5 >= 8 )
    {
      v6 = a1 + 4;
      v7 = 2LL;
      do
      {
        v8 = v1;
        v1 += 2;
        *v6++ = *((_DWORD *)WmipFirmwareTableArray + v8);
        --v7;
      }
      while ( v7 );
      return 0LL;
    }
    return 3221225507LL;
  }
  if ( v4 != 1 )
    return 3221225711LL;
  v10 = a1[2];
  v11 = 2;
  v12 = 0;
  v13 = 0;
  while ( LODWORD(WmipFirmwareTableArray[v12]) != v10 )
  {
    ++v13;
    ++v12;
    if ( v13 >= 2 )
      goto LABEL_15;
  }
  v3 = HIDWORD(WmipFirmwareTableArray[v12]);
  v14 = a1[3];
  a1[3] = v3;
  if ( v14 < v3 )
    return 3221225507LL;
  v11 = v12 * 2;
LABEL_15:
  if ( v13 == 2 )
    return 3221225711LL;
  v15 = v3;
  v16 = (void *)MmMapIoSpaceEx(*((unsigned int *)WmipFirmwareTableArray + v11), v3, 0x204u);
  v17 = v16;
  if ( v16 )
  {
    memmove(a1 + 4, v16, v15);
    MmUnmapIoSpace(v17, v15);
    return 0LL;
  }
  return 3221226021LL;
}

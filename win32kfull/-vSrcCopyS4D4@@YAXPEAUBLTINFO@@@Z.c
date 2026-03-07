void __fastcall vSrcCopyS4D4(struct BLTINFO *a1)
{
  int v1; // ebp
  _BYTE *v2; // r9
  __int64 v3; // r14
  unsigned __int8 *v4; // rbx
  _BYTE *v5; // r10
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  unsigned __int8 *v9; // rsi
  int v10; // r11d
  unsigned __int64 v11; // rax
  int v12; // r11d

  v1 = *((_DWORD *)a1 + 8);
  v2 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)*((int *)a1 + 14) >> 1));
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v4 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1));
  while ( 1 )
  {
    v5 = v2;
    v6 = *((_DWORD *)a1 + 12);
    v7 = *((_DWORD *)a1 + 14) & 1;
    v8 = *((_DWORD *)a1 + 13) - v6;
    v9 = v4;
    if ( (((unsigned __int8)v6 ^ *((_BYTE *)a1 + 56)) & 1) != 0 )
    {
      if ( v7 && v8 )
      {
        v5 = v2 + 1;
        *v2 = *(_BYTE *)(v3 + 4 * ((unsigned __int64)*v4 >> 4)) | *v2 & 0xF0;
        --v8;
      }
      v10 = v8 >> 1;
      while ( --v10 >= 0 )
      {
        *v5++ = *(_BYTE *)(v3 + 4 * ((unsigned __int64)v9[1] >> 4)) | (16 * *(_BYTE *)(v3 + 4LL * (*v9 & 0xF)));
        ++v9;
      }
      if ( (v8 & 1) != 0 )
      {
        v11 = *v9 & 0xF;
LABEL_19:
        *v5 = *v5 & 0xF | (16 * *(_BYTE *)(v3 + 4 * v11));
      }
    }
    else
    {
      if ( v7 && v8 )
      {
        v9 = v4 + 1;
        v5 = v2 + 1;
        *v2 = *(_BYTE *)(v3 + 4LL * (*v4 & 0xF)) | *v2 & 0xF0;
        --v8;
      }
      v12 = v8 >> 1;
      while ( --v12 >= 0 )
      {
        *v5++ = *(_BYTE *)(v3 + 4LL * (*v9 & 0xF)) | (16 * *(_BYTE *)(v3 + 4 * ((unsigned __int64)*v9 >> 4)));
        ++v9;
      }
      if ( (v8 & 1) != 0 )
      {
        v11 = (unsigned __int64)*v9 >> 4;
        goto LABEL_19;
      }
    }
    if ( !--v1 )
      break;
    v4 += *((int *)a1 + 10);
    v2 += *((int *)a1 + 11);
  }
}

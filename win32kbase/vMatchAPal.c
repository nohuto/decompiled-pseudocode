_DWORD *vMatchAPal(__int64 a1, ...)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // ecx
  _DWORD *v5; // rdi
  __int64 v6; // r13
  int v7; // ebp
  int v8; // esi
  __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 i; // r11
  char *v13; // rcx
  __int64 v14; // r15
  __int64 v15; // r12
  int v16; // eax
  int v17; // ebx
  _DWORD *result; // rax
  int v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+20h] [rbp-48h]
  int v21; // [rsp+24h] [rbp-44h]
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  va_list va; // [rsp+78h] [rbp+10h]
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF
  va_list va1; // [rsp+80h] [rbp+18h]
  _DWORD *v26; // [rsp+88h] [rbp+20h]
  _DWORD *v27; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v22 = va_arg(va1, _QWORD);
  v1 = v22;
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  v2 = v24;
  v26 = va_arg(va2, _DWORD *);
  v27 = va_arg(va2, _DWORD *);
  v3 = *(_DWORD *)(v22 + 24);
  if ( (v3 & 0x1000) != 0 )
  {
    v4 = 1;
  }
  else if ( (v3 & 0x10000) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v4 = *(_DWORD *)(v22 + 60) >> 1;
  }
  v5 = *(_DWORD **)(v24 + 72);
  v6 = *(_QWORD *)(v24 + 80);
  v7 = 0;
  v8 = 0;
  if ( v4 < 256 - v4 )
  {
    v9 = 256 - v4 - v4;
    v10 = 4LL * v4;
    do
    {
      v11 = *(_QWORD *)(v1 + 112);
      v19 = *(_DWORD *)(v10 + v11);
      HIBYTE(v19) &= 0xDEu;
      *(_DWORD *)(v10 + v11) = v19;
      v10 += 4LL;
      --v9;
    }
    while ( v9 );
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v2 + 28); i = (unsigned int)(i + 1) )
  {
    v13 = (char *)v5 + i;
    if ( !v6 || *(_BYTE *)(i + v6 + 4) != v13[4] )
      ++v8;
    v14 = (unsigned __int8)v13[4];
    v15 = *(_QWORD *)(v1 + 112);
    v16 = *(_DWORD *)(v15 + 4 * v14);
    v20 = v16;
    if ( (v16 & 0x20000000) == 0 )
    {
      v17 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 4 * i);
      v21 = v17;
      if ( (v17 & 0x2000000) == 0
        && ((_WORD)v17 != (_WORD)v16 || BYTE2(v17) != BYTE2(v16) || ((HIBYTE(v16) ^ HIBYTE(v17)) & 1) != 0) )
      {
        HIBYTE(v21) = HIBYTE(v17) & 1;
        ++v7;
        HIBYTE(v16) = HIBYTE(v17) & 1;
        v20 = v21;
      }
      HIBYTE(v20) = HIBYTE(v16) | 0x30;
      *(_DWORD *)(v15 + 4 * v14) = v20;
    }
  }
  XEPALOBJ::vUpdateTime((XEPALOBJ *)va);
  XEPALOBJ::vUpdateTime((XEPALOBJ *)va1);
  *v5 = XEPALOBJ::ulTime((XEPALOBJ *)va);
  *v26 = v7;
  result = v27;
  *v27 = v8;
  return result;
}

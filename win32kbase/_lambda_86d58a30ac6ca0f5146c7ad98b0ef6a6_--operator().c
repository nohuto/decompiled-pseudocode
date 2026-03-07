__int64 __fastcall lambda_86d58a30ac6ca0f5146c7ad98b0ef6a6_::operator()(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // r9
  unsigned int v3; // ebx
  int *v4; // rax
  int v5; // r8d
  _OWORD **v6; // rax
  _OWORD *v7; // r8
  __int128 v8; // xmm0
  _OWORD *v9; // r8
  const struct _UNICODE_STRING **v10; // rdx
  int v11; // eax

  v2 = (unsigned __int16 *)(a2 + 72);
  v3 = 0;
  v4 = *(int **)(a1 + 8);
  *(_DWORD *)(a2 + 68) = **(_BYTE **)a1 != 0;
  v5 = *v4;
  v6 = *(_OWORD ***)(a1 + 16);
  *(_DWORD *)(a2 + 64) = v5;
  v7 = *v6;
  if ( *v6 )
  {
    *(_OWORD *)v2 = *v7;
    *(_OWORD *)(a2 + 88) = v7[1];
    *(_OWORD *)(a2 + 104) = v7[2];
    *(_OWORD *)(a2 + 120) = v7[3];
    *(_OWORD *)(a2 + 136) = v7[4];
    *(_OWORD *)(a2 + 152) = v7[5];
    *(_OWORD *)(a2 + 168) = v7[6];
    v8 = v7[7];
    v9 = v7 + 8;
    *(_OWORD *)(a2 + 184) = v8;
    *(_OWORD *)(a2 + 200) = *v9;
    *(_OWORD *)(a2 + 216) = v9[1];
    *(_OWORD *)(a2 + 232) = v9[2];
    *(_OWORD *)(a2 + 248) = v9[3];
    *(_OWORD *)(a2 + 264) = v9[4];
    *(_QWORD *)(a2 + 280) = *((_QWORD *)v9 + 10);
    *(_DWORD *)(a2 + 288) = *((_DWORD *)v9 + 22);
  }
  v10 = *(const struct _UNICODE_STRING ***)(a1 + 24);
  if ( !*v10 )
    return 0LL;
  v11 = RtlStringCchCopyUnicodeString(v2, (unsigned __int64)v10, *v10);
  if ( v11 < 0 )
    return (unsigned int)v11;
  return v3;
}

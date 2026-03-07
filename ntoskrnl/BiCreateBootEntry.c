__int64 __fastcall BiCreateBootEntry(void *a1, void **a2)
{
  _DWORD *v2; // rdi
  void *v3; // rsi
  unsigned int *v4; // r14
  void *v5; // r12
  _DWORD *Pool2; // r15
  int Element; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  size_t v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  int KeyName; // eax
  int v20; // ebx
  int v21; // r8d
  unsigned int v22; // ecx
  _DWORD *v23; // rax
  _DWORD *v24; // rdx
  size_t v25; // r8
  unsigned int v26; // eax
  int v27; // ecx
  __int64 v28; // rax
  char *v29; // rbx
  char *v30; // rax
  unsigned __int64 v32; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-30h] BYREF
  void *v34; // [rsp+40h] [rbp-28h] BYREF
  void *Src; // [rsp+48h] [rbp-20h] BYREF
  void *v36; // [rsp+50h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-10h] BYREF
  size_t v40; // [rsp+C0h] [rbp+58h] BYREF
  size_t Size; // [rsp+C8h] [rbp+60h] BYREF

  LODWORD(v40) = 0;
  LODWORD(Size) = 0;
  v33 = 0;
  v2 = 0LL;
  P[0] = 0LL;
  v3 = 0LL;
  v32 = 0LL;
  v4 = 0LL;
  Src = 0LL;
  v5 = 0LL;
  v34 = 0LL;
  Pool2 = 0LL;
  v36 = 0LL;
  Element = BiGetElement((__int64)a1, 0x12000004u, P, (unsigned int *)&v40);
  v9 = Element;
  if ( Element < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application description. Status: %x",
      (unsigned int)Element);
    goto LABEL_25;
  }
  v10 = BiGetElement((__int64)a1, 0x11000001u, &v32, (unsigned int *)&Size);
  v9 = v10;
  if ( v10 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application device. Status: %x",
      (unsigned int)v10);
    v2 = (_DWORD *)v32;
    goto LABEL_25;
  }
  v11 = BiGetElement((__int64)a1, 0x12000002u, &Src, &v33);
  v9 = v11;
  if ( v11 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application path. Status: %x",
      (unsigned int)v11);
    v2 = (_DWORD *)v32;
    v3 = Src;
    goto LABEL_25;
  }
  v2 = (_DWORD *)v32;
  v3 = Src;
  if ( *(_DWORD *)v32 != 2 )
  {
    v9 = -1073741637;
    goto LABEL_25;
  }
  v12 = -1LL;
  v13 = -1LL;
  do
    ++v13;
  while ( *((_WORD *)Src + v13) );
  v14 = 2 * v13 + 2;
  v15 = -1LL;
  LODWORD(Size) = v14;
  do
    ++v15;
  while ( *(_WORD *)(v32 + 2 * v15 + 20) );
  v16 = (unsigned int)(2 * v15 + 2);
  v17 = v14 + v16;
  if ( v14 + (int)v16 < (unsigned int)v16 )
    goto LABEL_24;
  v18 = v17 + 12;
  if ( v17 + 12 < v17 )
    goto LABEL_24;
  v32 = v18;
  Pool2 = (_DWORD *)ExAllocatePool2(258LL, v18, 1262764866LL);
  if ( !Pool2 )
  {
LABEL_16:
    v9 = -1073741670;
    goto LABEL_25;
  }
  Pool2[1] = v32;
  *Pool2 = 1;
  Pool2[2] = 3;
  memmove(Pool2 + 3, v2 + 5, v16);
  memmove((char *)Pool2 + v16 + 12, v3, (unsigned int)Size);
  v9 = BiTranslateFilePath((__int64)Pool2, 4u, &v34);
  if ( v9 < 0 || (KeyName = BiGetKeyName(a1, &v36), v5 = v36, v9 = KeyName, KeyName < 0) )
  {
    v4 = (unsigned int *)v34;
    goto LABEL_25;
  }
  do
    ++v12;
  while ( *((_WORD *)v36 + v12) );
  v4 = (unsigned int *)v34;
  LODWORD(v32) = (2 * v12 + 45) & 0xFFFFFFFC;
  v20 = v32 + 16;
  LODWORD(Src) = v32 + 16;
  v21 = *((_DWORD *)v34 + 1);
  v22 = (v32 + 47) & 0xFFFFFFFC;
  LODWORD(v36) = v22;
  if ( (unsigned int)v40 + v22 + v21 + 4 < (unsigned int)v40 )
  {
LABEL_24:
    v9 = -1073741675;
  }
  else
  {
    LODWORD(Size) = (v22 + v40 + 3) & 0xFFFFFFFC;
    v33 = v21 + Size;
    v23 = (_DWORD *)ExAllocatePool2(258LL, (unsigned int)(v21 + Size), 1262764866LL);
    v34 = v23;
    v24 = v23;
    if ( !v23 )
      goto LABEL_16;
    v23[2] = -1;
    v25 = (unsigned int)v40;
    *v23 = 1;
    v26 = v33;
    v24[3] = 1;
    v27 = Size;
    v24[1] = v26;
    v28 = (unsigned int)v36;
    v24[5] = v27;
    v24[4] = v28;
    v24[6] = v20;
    memmove((char *)v24 + v28, P[0], v25);
    v29 = (char *)v34;
    memmove((char *)v34 + (unsigned int)Size, v4, v4[1]);
    v29 += 28;
    *(_QWORD *)v29 = 0x53574F444E4957LL;
    *((_DWORD *)v29 + 3) = (_DWORD)Src;
    *((_DWORD *)v29 + 4) = v32;
    *((_DWORD *)v29 + 2) = 1;
    swprintf_s((wchar_t *)v29 + 10, (unsigned int)v12 + 11LL, L"%s%s", L"BCDOBJECT=", v5);
    v30 = &v29[*((unsigned int *)v29 + 4)];
    v9 = 0;
    *(_DWORD *)v30 = 1;
    *((_DWORD *)v30 + 1) = 16;
    *((_DWORD *)v30 + 2) = 4;
    *((_DWORD *)v30 + 3) = 327551;
    *a2 = v34;
  }
LABEL_25:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  return (unsigned int)v9;
}

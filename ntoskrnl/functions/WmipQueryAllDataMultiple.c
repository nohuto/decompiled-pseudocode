__int64 __fastcall WmipQueryAllDataMultiple(
        int a1,
        PVOID *a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        _DWORD *a5,
        unsigned int a6,
        unsigned int *a7,
        int *a8)
{
  _DWORD *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 Pool2; // rax
  char *v13; // r15
  _QWORD *v14; // rcx
  char v15; // r12
  _BYTE *v16; // r13
  _BYTE *v17; // rbp
  _BYTE *v18; // rbx
  char *v21; // r15
  unsigned int v22; // esi
  bool v23; // zf
  PVOID *v24; // rax
  PVOID v25; // rax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  __int64 v32; // [rsp+34h] [rbp-F4h] BYREF
  int v33; // [rsp+3Ch] [rbp-ECh]
  PVOID *v34; // [rsp+40h] [rbp-E8h]
  PVOID *v35; // [rsp+48h] [rbp-E0h]
  PVOID Object; // [rsp+50h] [rbp-D8h]
  __int64 v37; // [rsp+58h] [rbp-D0h]
  char *v38; // [rsp+60h] [rbp-C8h]
  IRP *v39; // [rsp+70h] [rbp-B8h]
  _DWORD *v40; // [rsp+78h] [rbp-B0h]
  int *v41; // [rsp+80h] [rbp-A8h]
  _BYTE v42[80]; // [rsp+90h] [rbp-98h] BYREF

  v9 = a5;
  LODWORD(v10) = a1;
  v35 = a2;
  v39 = a3;
  v40 = a5;
  v41 = a8;
  memset(v42, 0, 0x48uLL);
  v32 = 0LL;
  v33 = 0;
  Object = 0LL;
  if ( a2 )
  {
    v13 = 0LL;
    v38 = 0LL;
LABEL_9:
    LODWORD(v11) = 0;
    v15 = 0;
    v17 = 0LL;
    v16 = a5;
    v18 = a5;
    if ( !(_DWORD)v10 )
      goto LABEL_33;
    goto LABEL_10;
  }
  v10 = *a7;
  v11 = v10;
  Pool2 = ExAllocatePool2(256LL, 8 * v10, 1885957463LL);
  v38 = (char *)Pool2;
  v13 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( !(_DWORD)v10 )
    goto LABEL_9;
  v14 = (_QWORD *)Pool2;
  do
  {
    *v14 = *(_QWORD *)((char *)v14 + (_QWORD)a7 - Pool2 + 8);
    ++v14;
    --v11;
  }
  while ( v11 );
  v15 = 0;
  v16 = a5;
  v17 = 0LL;
  v18 = a5;
LABEL_10:
  v21 = (char *)(v13 - (char *)v35);
  v34 = v35;
  v37 = (unsigned int)v10;
  do
  {
    if ( v18 == v42 || a6 < 0x48 )
    {
      v18 = v42;
      v22 = 72;
      v17 = 0LL;
    }
    else
    {
      v18 = v16;
      v22 = a6;
    }
    memset(v18, 0, 0x48uLL);
    v23 = v35 == 0LL;
    v24 = v34;
    *((_DWORD *)v18 + 11) = 1;
    *(_DWORD *)v18 = 48;
    if ( v23 )
    {
      *((_QWORD *)v18 + 2) = *(PVOID *)((char *)v24 + (_QWORD)v21);
      v25 = Object;
    }
    else
    {
      v25 = *v24;
      Object = v25;
    }
    if ( (int)WmipQueryAllData(v25, v39, a4, (__int64)v18, v22, &v32) >= 0 )
    {
      v26 = *((_DWORD *)v18 + 11);
      if ( (v26 & 0x100) == 0 )
      {
        ++HIDWORD(v32);
        if ( (v26 & 0x20) != 0 )
        {
          v27 = *((_DWORD *)v18 + 12);
          v18 = v42;
LABEL_22:
          v15 = 1;
          LODWORD(v11) = ((v27 + 7) & 0xFFFFFFF8) + v11;
          goto LABEL_31;
        }
        if ( v18 == v42 )
        {
          v27 = v32;
          goto LABEL_22;
        }
        if ( v17 )
          *((_DWORD *)v17 + 3) = v33;
        v28 = *((unsigned int *)v18 + 3);
        v17 = v18;
        while ( (_DWORD)v28 )
        {
          v17 += v28;
          v28 = *((unsigned int *)v17 + 3);
        }
        v29 = ((_DWORD)v32 + 7) & 0xFFFFFFF8;
        v16 += v29;
        LODWORD(v11) = v29 + v11;
        a6 -= v29;
        v33 = (_DWORD)v16 - (_DWORD)v17;
      }
    }
LABEL_31:
    ++v34;
    --v37;
  }
  while ( v37 );
  v9 = v40;
  v13 = v38;
LABEL_33:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( !HIDWORD(v32) )
    return 3221226133LL;
  if ( v15 )
  {
    v30 = 56;
    v9[11] = 32;
    *v9 = 56;
    v9[12] = v11;
  }
  else
  {
    v30 = v11;
  }
  *v41 = v30;
  return 0LL;
}

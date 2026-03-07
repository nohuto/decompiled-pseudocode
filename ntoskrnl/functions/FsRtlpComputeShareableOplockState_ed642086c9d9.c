char __fastcall FsRtlpComputeShareableOplockState(_QWORD *a1)
{
  _UNKNOWN **v1; // rax
  int *v2; // rbx
  _QWORD *v4; // r9
  int v5; // esi
  _QWORD *v6; // rdx
  __int64 ***v7; // r11
  int v8; // ecx
  bool v9; // zf
  int v10; // ecx
  __int64 **v11; // r10
  int v12; // r8d
  char v13; // r8
  char v14; // dl
  int v15; // ecx
  int v17; // [rsp+3Ch] [rbp-35h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-31h] BYREF
  __int64 v19; // [rsp+48h] [rbp-29h] BYREF
  __int64 v20; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v21[32]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp+7h]
  int v23; // [rsp+80h] [rbp+Fh]
  int v24; // [rsp+84h] [rbp+13h]
  int *v25; // [rsp+88h] [rbp+17h]
  int v26; // [rsp+90h] [rbp+1Fh]
  int v27; // [rsp+94h] [rbp+23h]
  __int64 *v28; // [rsp+98h] [rbp+27h]
  int v29; // [rsp+A0h] [rbp+2Fh]
  int v30; // [rsp+A4h] [rbp+33h]
  __int64 *v31; // [rsp+A8h] [rbp+37h]
  int v32; // [rsp+B0h] [rbp+3Fh]
  int v33; // [rsp+B4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  v2 = (int *)(a1 + 18);
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v24 = 0;
    v27 = 0;
    v22 = &v18;
    v17 = *v2;
    v18 = a1;
    v25 = &v17;
    v23 = 8;
    v26 = 4;
    LOBYTE(v1) = tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, byte_14003A468, 0LL, 0LL, 4, v21);
  }
  v4 = (_QWORD *)a1[5];
  v5 = *v2 & 0x1010000;
  if ( v4 == a1 + 5 )
  {
    v6 = a1 + 7;
    if ( (_QWORD *)*v6 == v6 )
    {
      v1 = (_UNKNOWN **)(a1 + 9);
      if ( *v1 == (_UNKNOWN *)v1 )
      {
        v8 = *v2 & 0x20 | 1;
        goto LABEL_10;
      }
    }
    v7 = (__int64 ***)(a1 + 9);
    v8 = *v2 & 0x20 | 0x3000;
    v9 = *v6 == (_QWORD)v6;
    *v2 = v8;
    if ( v9 )
    {
      v11 = *v7;
      v12 = 0;
      while ( v11 != (__int64 **)v7 )
      {
        if ( v12 )
        {
          LODWORD(v1) = (_DWORD)v11[6] & 0xF00000;
          if ( (_DWORD)v1 != v12 )
          {
            v8 = v8 & 0x20 | 0x3000;
            goto LABEL_10;
          }
        }
        v12 = (_DWORD)v11[6] & 0xF00000;
        v8 |= v12;
        *v2 = v8;
        v11 = (__int64 **)*v11;
      }
    }
    goto LABEL_6;
  }
  v1 = (_UNKNOWN **)(a1 + 7);
  if ( *v1 != (_UNKNOWN *)v1 || (v1 = (_UNKNOWN **)(a1 + 9), *v1 != (_UNKNOWN *)v1) )
  {
    v8 = *v2 & 0x20 | 0xB000;
    goto LABEL_10;
  }
  v13 = 0;
  v14 = 0;
  do
  {
    v1 = (_UNKNOWN **)v4[2];
    if ( *((_DWORD *)v1 + 6) == 590400 )
    {
      v13 = 1;
    }
    else
    {
      v14 = 1;
      if ( !v13 )
        goto LABEL_24;
    }
    if ( v14 )
      goto LABEL_27;
LABEL_24:
    v4 = (_QWORD *)*v4;
    LOBYTE(v1) = v13;
  }
  while ( v4 != a1 + 5 );
  if ( v13 && v14 )
  {
LABEL_27:
    v8 = *v2 & 0x20 | 0x1010;
    goto LABEL_10;
  }
  v15 = *v2 & 0x20;
  if ( v13 )
    v8 = v15 | 0x1000;
  else
    v8 = v15 | 0x10;
LABEL_10:
  *v2 = v8;
LABEL_6:
  v10 = v5 | v8;
  *v2 = v10;
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v22 = &v18;
    v25 = &v17;
    v19 = a1[11];
    v28 = &v19;
    v20 = a1[12];
    v31 = &v20;
    v17 = v10;
    v18 = a1;
    v23 = 8;
    v26 = 4;
    v29 = 8;
    v32 = 8;
    LOBYTE(v1) = tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, word_14003A3E2, 0LL, 0LL, 6, v21);
  }
  return (char)v1;
}

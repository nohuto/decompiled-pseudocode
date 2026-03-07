int __fastcall DNG_StretchCol(struct _DNGINTERNALDATA *a1, _DWORD *a2)
{
  __int64 v2; // r15
  int v4; // r8d
  __int64 v5; // r12
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rsi
  int v14; // [rsp+70h] [rbp+8h]
  int v15; // [rsp+78h] [rbp+10h]
  __int64 v16; // [rsp+80h] [rbp+18h]

  v4 = *((_DWORD *)a1 + 4);
  v5 = *((_QWORD *)a1 + 4);
  v6 = a2[1];
  v7 = 0;
  v16 = *((_QWORD *)a1 + 1);
  v2 = v16;
  v8 = v16 - 4LL * a2[6] * v4;
  v14 = a2[3];
  v9 = v16 - 4LL * a2[7] * v4;
  v15 = a2[2];
  LODWORD(v10) = *a2 * *((_DWORD *)a1 + 10);
  v11 = 1;
  v12 = v5 - 4LL * (int)v10;
  if ( v8 != v9 )
  {
    do
    {
      if ( v11 )
      {
        *((_QWORD *)a1 + 1) = v8;
        *((_QWORD *)a1 + 4) = v12;
        DNG_DrawRow(a1);
      }
      else
      {
        LODWORD(v10) = DNG_CopyMemory(
                         a1,
                         (void *)(v8 + 4LL * *(int *)a1),
                         (void *)(v8 + 4 * (*(int *)a1 + (__int64)v4)),
                         4 * *((_DWORD *)a1 + 6));
        if ( !(_DWORD)v10 )
          break;
      }
      v11 = (v6 + v15 < v6) + v14;
      v7 += v11;
      if ( v7 < *((_DWORD *)a1 + 12) )
        v12 -= 4LL * *((_DWORD *)a1 + 10) * v11;
      v4 = *((_DWORD *)a1 + 4);
      v6 += v15;
      v10 = -(__int64)v4;
      v8 -= 4LL * v4;
    }
    while ( v8 != v9 );
    v2 = v16;
  }
  *((_QWORD *)a1 + 1) = v2;
  *((_QWORD *)a1 + 4) = v5;
  return v10;
}

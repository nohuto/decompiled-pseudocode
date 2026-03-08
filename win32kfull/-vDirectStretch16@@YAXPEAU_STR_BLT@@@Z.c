/*
 * XREFs of ?vDirectStretch16@@YAXPEAU_STR_BLT@@@Z @ 0x1C0304410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vDirectStretch16(struct _STR_BLT *a1)
{
  __int64 v1; // r8
  __int64 v3; // rdi
  int v4; // r9d
  int v5; // r14d
  unsigned __int16 *v6; // rbx
  unsigned int v7; // ebp
  int v8; // edx
  unsigned __int16 *v9; // r10
  int v10; // r8d
  int v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // r12d
  signed int v14; // edx
  int v15; // ecx
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // r8
  unsigned int v19; // edi
  unsigned int v20; // r15d
  unsigned __int16 *v21; // r14
  bool v22; // cf
  unsigned __int16 *v23; // r13
  int v24; // r9d
  unsigned int v25; // r8d
  unsigned __int16 *v26; // rcx
  bool v27; // zf
  int v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+10h] [rbp-68h]
  __int64 v31; // [rsp+18h] [rbp-60h]
  int v32; // [rsp+80h] [rbp+8h]
  int v33; // [rsp+88h] [rbp+10h]
  unsigned int v34; // [rsp+90h] [rbp+18h]
  unsigned int v35; // [rsp+98h] [rbp+20h]

  v1 = *((int *)a1 + 7);
  v3 = *((unsigned int *)a1 + 10);
  v4 = *((_DWORD *)a1 + 6);
  v5 = *((_DWORD *)a1 + 13);
  v6 = (unsigned __int16 *)(*(_QWORD *)a1 + 2LL * *((int *)a1 + 3));
  v7 = *((_DWORD *)a1 + 15);
  v8 = *((_DWORD *)a1 + 8) - v1;
  v33 = *((_DWORD *)a1 + 9);
  v9 = (unsigned __int16 *)(*((_QWORD *)a1 + 2) + 2 * v1);
  v28 = v5;
  v10 = *((_DWORD *)a1 + 12);
  v11 = 2 * v8;
  v32 = *((_DWORD *)a1 + 11);
  v12 = ((unsigned int)((_DWORD)v9 - 2 * v8) >> 1) & 1;
  v13 = ((unsigned int)v9 >> 1) & 1;
  v34 = v12;
  v35 = v13;
  v14 = v8 - v12 - v13;
  v15 = 0;
  LODWORD(v16) = v4 - v11;
  if ( v33 > 0 )
  {
    if ( v10 )
      v15 = *((_DWORD *)a1 + 2) * v10;
    v17 = v14;
    v18 = v3;
    v16 = (int)v16;
    v31 = v15;
    v30 = (int)v16;
    v29 = v3;
    do
    {
      v19 = *((_DWORD *)a1 + 14);
      v20 = v5 + v7;
      v21 = v6;
      if ( v13 )
      {
        v22 = v19 + v32 < v19;
        *v9 = *v6;
        v19 += v32;
        ++v9;
        v21 = &v6[v22 + v18];
      }
      v23 = &v9[v17];
      if ( v9 != v23 )
      {
        do
        {
          v24 = *v21;
          v25 = v32 + v19;
          v22 = v32 + v19 < v19;
          v19 += v32 + v32;
          v26 = &v21[v22 + v29];
          v21 = &v26[(v19 < v25) + v29];
          *(_DWORD *)v9 = v24 | (*v26 << 16);
          v9 += 2;
        }
        while ( v9 != v23 );
        v12 = v34;
        v13 = v35;
        v18 = v29;
        v16 = v30;
      }
      if ( v12 )
        *v9++ = *v21;
      v6 = (unsigned __int16 *)((char *)v6 + v31);
      if ( v20 < v7 )
        v6 = (unsigned __int16 *)((char *)v6 + *((int *)a1 + 2));
      v17 = v14;
      v9 = (unsigned __int16 *)((char *)v9 + v16);
      v27 = v33-- == 1;
      v7 = v20;
      v5 = v28;
    }
    while ( !v27 );
  }
}

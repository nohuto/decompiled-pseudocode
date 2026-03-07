void __fastcall vGradientFill1(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // esi
  char *v3; // r15
  __int64 v4; // rbx
  struct _TRIANGLEDATA *v5; // rdi
  __int64 v6; // r14
  int v7; // ebp
  int v8; // edx
  int v9; // r12d
  int v10; // r13d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  int v14; // ecx
  int v15; // ebp
  char v16; // dl
  _BYTE *v17; // rdi
  int v18; // ebx
  int v19; // edx
  unsigned __int64 v20; // rcx
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // eax
  bool v24; // zf
  _BYTE *v25; // rax
  int v26; // [rsp+20h] [rbp-A8h]
  int v27; // [rsp+24h] [rbp-A4h]
  __int64 v28; // [rsp+28h] [rbp-A0h]
  int v29; // [rsp+30h] [rbp-98h]
  __int64 v30; // [rsp+38h] [rbp-90h]
  __int64 v31; // [rsp+40h] [rbp-88h]
  __int64 v32; // [rsp+48h] [rbp-80h]
  char *v33; // [rsp+50h] [rbp-78h]
  unsigned __int8 *Xlate555; // [rsp+60h] [rbp-68h]
  char *v35; // [rsp+68h] [rbp-60h]
  __int64 v36; // [rsp+70h] [rbp-58h]
  int v37; // [rsp+D0h] [rbp+8h]
  int v39; // [rsp+E0h] [rbp+18h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a2;
  v37 = v2;
  v33 = (char *)a2 + 168;
  v6 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v28 = *((_QWORD *)a2 + 2);
  v30 = *((_QWORD *)a2 + 3);
  v31 = *((_QWORD *)a2 + 4);
  v32 = v6;
  Xlate555 = XLATEOBJ_pGetXlate555(*((struct _XLATEOBJ **)a2 + 19));
  if ( Xlate555 )
  {
    v7 = *((_DWORD *)v5 + 3);
    v8 = *((_DWORD *)v5 + 33);
    if ( v7 >= *((_DWORD *)v5 + 29) )
      v7 = *((_DWORD *)v5 + 29);
    v26 = v7;
    v27 = *((_DWORD *)v5 + 33);
    v39 = *((_DWORD *)v5 + 32);
    if ( v2 < v7 )
    {
      v36 = v4;
      do
      {
        v9 = *(_DWORD *)v3;
        v10 = *((_DWORD *)v3 + 1);
        v11 = *((_QWORD *)v3 + 1);
        if ( *(_DWORD *)v3 <= *(_DWORD *)v5 )
          v9 = *(_DWORD *)v5;
        v12 = *((_QWORD *)v3 + 2);
        v13 = *((_QWORD *)v3 + 3);
        if ( v10 >= *((_DWORD *)v5 + 2) )
          v10 = *((_DWORD *)v5 + 2);
        v35 = (char *)&unk_1C032B300 + 16 * (((_BYTE)v8 + (_BYTE)v2) & 0xFu);
        if ( v9 < v10 )
        {
          v14 = *(_DWORD *)v5 - *(_DWORD *)v3;
          if ( v14 > 0 )
          {
            v11 += v28 * v14;
            v12 += v30 * v14;
            v13 += v31 * v14;
          }
          v15 = v9 & 7;
          v16 = v9 + v39;
          v17 = (_BYTE *)(v6 + v9 / 8);
          v29 = v9 + v39;
          do
          {
            v18 = v15;
            v19 = (unsigned __int8)(2 * v35[v16 & 0xF]);
            v20 = (v19 + HIBYTE(v13) >= 0xFFu ? 0x1F : 0) | (unsigned __int64)(v19 + HIBYTE(v12) >= 0xFFu ? 0x3E0 : 0);
            v21 = v19 + HIBYTE(v11);
            v12 += v30;
            v13 += v31;
            ++v9;
            v11 += v28;
            LOBYTE(v19) = *v17 & ~(1 << (7 - v15)) | (byte_1C032B680[Xlate555[(v21 >= 0xFF ? 0x7C00 : 0) | v20]] << (7 - v15));
            v22 = v15 + 1;
            v23 = v15;
            *v17 = v19;
            v15 = 0;
            v16 = v29 + 1;
            v24 = v23 == 7;
            ++v29;
            v25 = v17 + 1;
            if ( !v24 )
              v15 = v22;
            if ( v18 != 7 )
              v25 = v17;
            v17 = v25;
          }
          while ( v9 < v10 );
          v5 = a2;
          v2 = v37;
          v7 = v26;
          v6 = v32;
          v3 = v33;
          LOBYTE(v8) = v27;
        }
        v6 += v36;
        v3 += 40;
        ++v2;
        v32 = v6;
        v33 = v3;
        v37 = v2;
      }
      while ( v2 < v7 );
    }
  }
}

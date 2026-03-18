/*
 * XREFs of ?greenloop@@YAHH@Z @ 0x1C00DAFC0
 * Callers:
 *     ?redloop@@YAHXZ @ 0x1C00DAE7C (-redloop@@YAHXZ.c)
 * Callees:
 *     ?blueloop@@YAHH@Z @ 0x1C00DB4F0 (-blueloop@@YAHH@Z.c)
 */

__int64 __fastcall greenloop(int a1)
{
  int v1; // ebp
  int v2; // r14d
  int v3; // eax
  int v4; // ecx
  int v5; // r12d
  int v6; // r8d
  unsigned int v7; // edx
  int v8; // r13d
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // eax
  int v12; // ebp
  char v13; // r11
  int v14; // edi
  int v15; // r10d
  int v16; // eax
  int v17; // r8d
  int v18; // edx
  int v19; // ebx
  int v20; // r12d
  int v21; // esi
  unsigned int v22; // ecx
  unsigned int *v23; // rax
  _BYTE *v24; // r9
  unsigned int *v25; // rcx
  _BYTE *v26; // r9
  int v27; // r8d
  int v28; // edx
  unsigned int v29; // eax
  int v30; // r15d
  int v31; // ecx
  int v32; // ecx
  int v33; // ebx
  int v34; // r12d
  __int64 v35; // rdi
  int v36; // r14d
  __int64 v37; // rsi
  int v38; // ebp
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v43; // [rsp+20h] [rbp-68h]
  __int64 v44; // [rsp+28h] [rbp-60h]
  __int64 v45; // [rsp+30h] [rbp-58h]
  int v46; // [rsp+90h] [rbp+8h]
  int v47; // [rsp+98h] [rbp+10h]
  int v48; // [rsp+A0h] [rbp+18h]
  int v49; // [rsp+A8h] [rbp+20h]

  if ( a1 )
  {
    v1 = dword_1C0336010;
    v4 = 0;
    v2 = dword_1C0336028;
    v3 = 31;
    dword_1C03363C0 = 0;
    dword_1C03363C4 = 31;
    dword_1C03363CC = 0;
    dword_1C03363BC = dword_1C0336010;
    dword_1C03363C8 = dword_1C0336028;
    dword_1C03363D0 = 32;
  }
  else
  {
    v1 = dword_1C03363BC;
    v2 = dword_1C03363C8;
    v3 = dword_1C03363C4;
    v4 = dword_1C03363C0;
  }
  v5 = dword_1C033601C;
  v6 = v3;
  v49 = v3;
  v7 = 0;
  v8 = v2;
  v9 = qword_1C0336038;
  v44 = qword_1C0336038;
  v43 = v4;
  v10 = qword_1C0336050;
  v45 = qword_1C0336050;
  v46 = 0;
  v11 = 1;
  v47 = v1;
  v12 = dword_1C033601C;
  v48 = dword_1C033601C;
  if ( v47 <= v6 )
  {
    v13 = dword_1C0336074;
    v14 = dword_1C03363F4;
    v15 = dword_1C03363F8;
    while ( 1 )
    {
      if ( v11 )
      {
        v16 = dword_1C033600C;
        v14 = 0;
        v15 = 31;
        dword_1C03363F4 = 0;
        dword_1C03363F8 = 31;
        dword_1C0336404 = 0;
        dword_1C03363F0 = dword_1C033600C;
        dword_1C03363FC = dword_1C0336024;
        dword_1C0336400 = 32;
      }
      else
      {
        v16 = dword_1C03363F0;
      }
      v17 = dword_1C03363FC;
      v18 = v16;
      v19 = 0;
      v20 = v14;
      v21 = v15;
      v22 = v12;
      v23 = (unsigned int *)v9;
      v24 = (_BYTE *)v10;
      if ( v18 > v15 )
        goto LABEL_57;
      while ( *v23 <= v22 )
      {
        v22 += v17;
        ++v18;
        v17 += 128;
        ++v23;
        ++v24;
        if ( v18 > v15 )
        {
          v25 = (unsigned int *)(v9 - 4);
          v26 = (_BYTE *)(v10 - 1);
          v27 = dword_1C03363FC - 128;
          v28 = dword_1C03363F0 - 1;
          v29 = v12 - (dword_1C03363FC - 128);
          goto LABEL_11;
        }
      }
      if ( v18 > dword_1C03363F0 )
      {
        dword_1C03363F0 = v18;
        v9 = (__int64)v23;
        v10 = (__int64)v24;
        dword_1C03363FC = v17;
        v12 = v22;
        v20 = v18;
      }
      v19 = 1;
      if ( v18 > v15 )
      {
LABEL_57:
        v25 = (unsigned int *)(v9 - 4);
        v26 = (_BYTE *)(v10 - 1);
        v27 = dword_1C03363FC - 128;
        v29 = v12 - (dword_1C03363FC - 128);
        v28 = dword_1C03363F0 - 1;
        if ( !v19 )
        {
LABEL_11:
          if ( v28 < v14 )
          {
LABEL_14:
            v7 = v46;
            if ( v46 )
            {
              v5 = dword_1C033601C;
              v30 = v47 - 1;
              goto LABEL_35;
            }
            goto LABEL_32;
          }
          while ( *v25 <= v29 )
          {
            v27 -= 128;
            --v28;
            v29 -= v27;
            --v25;
            --v26;
            if ( v28 < v14 )
              goto LABEL_14;
          }
          dword_1C03363F0 = v28;
          v9 = (__int64)v25;
          v10 = (__int64)v26;
          dword_1C03363FC = v27;
          v12 = v29;
          v21 = v28;
        }
      }
      else
      {
        while ( *v23 > v22 )
        {
          *v23 = v22;
          ++v18;
          v22 += v17;
          *v24++ = v13;
          v17 += 128;
          ++v23;
          if ( v18 > v15 )
            goto LABEL_21;
        }
        v21 = v18 - 1;
LABEL_21:
        v25 = (unsigned int *)(v9 - 4);
        v26 = (_BYTE *)(v10 - 1);
        v27 = dword_1C03363FC - 128;
        v28 = dword_1C03363F0 - 1;
        v29 = v12 - (dword_1C03363FC - 128);
      }
      if ( v28 >= v14 )
      {
        while ( *v25 > v29 )
        {
          *v25 = v29;
          v27 -= 128;
          *v26 = v13;
          v29 -= v27;
          --v26;
          --v28;
          --v25;
          if ( v28 < v14 )
            goto LABEL_27;
        }
        v20 = v28 + 1;
      }
LABEL_27:
      v7 = v46;
      if ( v21 < dword_1C0336404 )
        v15 = v21;
      dword_1C0336404 = v21;
      dword_1C03363F8 = v15;
      if ( v20 > dword_1C0336400 )
        v14 = v20;
      dword_1C0336400 = v20;
      dword_1C03363F4 = v14;
      if ( !v46 )
      {
        v31 = v47;
        if ( v47 > dword_1C03363BC )
        {
          qword_1C0336038 = v44;
          qword_1C0336050 = v45;
          dword_1C033601C = v48;
          dword_1C03363BC = v47;
          dword_1C03363C8 = v8;
          v43 = v47;
        }
        v7 = 1;
        v46 = 1;
        goto LABEL_33;
      }
LABEL_32:
      v31 = v47;
LABEL_33:
      v48 += v8;
      v12 += v8;
      v44 += 128LL;
      v45 += 32LL;
      v8 += 128;
      v9 += 128LL;
      v47 = v31 + 1;
      v10 += 32LL;
      v11 = 0;
      if ( v31 + 1 > dword_1C03363C4 )
      {
        v5 = dword_1C033601C;
        v30 = v49;
        goto LABEL_35;
      }
    }
  }
  v30 = v6;
LABEL_35:
  v32 = 1;
  v33 = dword_1C03363C8 - 128;
  v34 = v5 - (dword_1C03363C8 - 128);
  v35 = qword_1C0336038 - 128;
  v36 = dword_1C03363C0;
  v37 = qword_1C0336050 - 32;
  v38 = dword_1C03363BC - 1;
  dword_1C03363D8 = dword_1C03363C8 - 128;
  dword_1C0336018 = v34;
  dword_1C03363D4 = v34;
  qword_1C0336030 = qword_1C0336038 - 128;
  qword_1C03363E0 = qword_1C0336038 - 128;
  qword_1C0336048 = qword_1C0336050 - 32;
  for ( qword_1C03363E8 = qword_1C0336050 - 32; v38 >= v36; dword_1C03363D4 = v34 )
  {
    v39 = blueloop(v32);
    v7 = v46;
    if ( v39 )
    {
      if ( !v46 )
      {
        v7 = 1;
        dword_1C03363BC = v38;
        v46 = 1;
        v30 = v38;
        qword_1C0336038 = v35;
        qword_1C0336050 = v37;
        dword_1C033601C = v34;
        dword_1C03363C8 = v33;
      }
    }
    else if ( v46 )
    {
      v40 = v38 + 1;
      goto LABEL_44;
    }
    qword_1C0336030 -= 128LL;
    v33 -= 128;
    dword_1C0336018 -= v33;
    v34 -= v33;
    qword_1C0336048 -= 32LL;
    v35 -= 128LL;
    v37 -= 32LL;
    qword_1C03363E0 = v35;
    --v38;
    qword_1C03363E8 = v37;
    v32 = 0;
    dword_1C03363D8 = v33;
  }
  if ( v7 )
  {
    v40 = v43;
LABEL_44:
    v41 = dword_1C03363C4;
    if ( v30 < dword_1C03363CC )
      v41 = v30;
    dword_1C03363CC = v30;
    dword_1C03363C4 = v41;
    if ( v40 > dword_1C03363D0 )
      v36 = v40;
    dword_1C03363D0 = v40;
    dword_1C03363C0 = v36;
  }
  return v7;
}

void __fastcall XCLIPOBJ::vSetup(XCLIPOBJ *this, struct REGION *a2, struct ERECTL *a3, int a4)
{
  int v5; // r14d
  int *v6; // rsi
  int v8; // r11d
  int v10; // r10d
  int v11; // ecx
  int v12; // r8d
  unsigned int v13; // eax
  int v14; // r9d
  int *v15; // r8
  char v16; // r15
  int v17; // r12d
  int v18; // r13d
  int v19; // edx
  int v20; // r11d
  int v21; // r10d
  __int64 v22; // rcx
  bool v23; // cc
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  ERECTL *v27; // rcx
  __int128 i; // [rsp+20h] [rbp-48h] BYREF
  int v29; // [rsp+70h] [rbp+8h]
  int v30; // [rsp+78h] [rbp+10h]

  *((_QWORD *)this + 7) = a2;
  v5 = 0;
  v6 = (int *)((char *)this + 4);
  *((_DWORD *)this + 5) = 0;
  v8 = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 4) = v8;
  v10 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 3) = v10;
  v11 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 2) = v11;
  v12 = *(_DWORD *)a3;
  *v6 = v12;
  *(_DWORD *)this = *((_DWORD *)a2 + 18);
  if ( *((_DWORD *)a2 + 12) > 0x38u
    || v12 < *((_DWORD *)a2 + 14)
    || v11 < *((_DWORD *)a2 + 15)
    || v10 > *((_DWORD *)a2 + 16)
    || a4 == 1
    || v8 > *((_DWORD *)a2 + 17)
    || v11 >= v8
    || v12 >= v10 )
  {
    if ( v12 <= *((_DWORD *)a2 + 14) )
      v12 = *((_DWORD *)a2 + 14);
    *v6 = v12;
    if ( v11 <= *((_DWORD *)a2 + 15) )
      v11 = *((_DWORD *)a2 + 15);
    *((_DWORD *)this + 2) = v11;
    if ( v10 >= *((_DWORD *)a2 + 16) )
      v10 = *((_DWORD *)a2 + 16);
    *((_DWORD *)this + 3) = v10;
    if ( v8 >= *((_DWORD *)a2 + 17) )
      v8 = *((_DWORD *)a2 + 17);
    *((_DWORD *)this + 4) = v8;
    if ( v12 >= v10 || v11 >= v8 )
    {
      *v6 = v10;
      return;
    }
    if ( a4 != 1 && *((_DWORD *)a2 + 12) <= 0x38u )
    {
      if ( a4 != 2 )
        *((_BYTE *)this + 20) = 1;
      return;
    }
    *((_DWORD *)this + 34) = 0;
    v13 = *((_DWORD *)a2 + 12);
    if ( v13 > 0x70 )
    {
      *((_BYTE *)this + 21) = 3;
    }
    else if ( v13 > 0x38 )
    {
      *((_BYTE *)this + 21) = 2;
    }
    v14 = *((_DWORD *)a2 + 13);
    v15 = (int *)*((_QWORD *)a2 + 4);
    LOBYTE(v5) = a4 != 1;
    for ( i = 0LL; v14; --v14 )
    {
      if ( v6[1] < v15[2] )
        break;
      v15 = (int *)((char *)v15 + (unsigned int)(4 * *v15 + 16));
    }
    v16 = 1;
    if ( !v14 )
    {
LABEL_46:
      ERECTL::operator*=(v6, &i);
      if ( v5 )
      {
        if ( a4 || ERECTL::bEqual(v27, a3) )
          return;
      }
      else if ( *((_DWORD *)this + 34) != 1 )
      {
        v16 = 3;
      }
      *((_BYTE *)this + 20) = v16;
      return;
    }
    v17 = DWORD2(i);
    v18 = i;
    while ( 1 )
    {
      --v14;
      if ( v15[1] >= v6[3] )
        goto LABEL_46;
      v19 = *v15;
      v20 = 0;
      v21 = 0;
      if ( *v15 )
        break;
LABEL_45:
      v5 &= v20;
      v15 = (int *)((char *)v15 + (unsigned int)(4 * v19 + 16));
      if ( !v14 )
        goto LABEL_46;
    }
    while ( 1 )
    {
      v22 = (unsigned int)(v21 + 1);
      v30 = *v6;
      if ( v15[v22 + 3] > *v6 )
        break;
LABEL_44:
      v19 = *v15;
      v21 += 2;
      if ( v21 == *v15 )
        goto LABEL_45;
    }
    v23 = v15[v21 + 3] < v6[2];
    v6 = (int *)((char *)this + 4);
    if ( !v23 )
      goto LABEL_45;
    if ( ++*((_DWORD *)this + 34) >= 0xAu )
    {
      *((_BYTE *)this + 20) = 3;
      *((_DWORD *)this + 34) = -1;
      return;
    }
    v24 = v15[v22 + 3];
    v29 = v15[1];
    v25 = v15[v21 + 3];
    v26 = v15[2];
    if ( v18 == v17 || (v6 = (int *)((char *)this + 4), DWORD1(i) == HIDWORD(i)) )
    {
      v18 = v15[v21 + 3];
      DWORD1(i) = v15[1];
      v17 = v24;
      LODWORD(i) = v25;
      DWORD2(i) = v24;
    }
    else
    {
      if ( v25 < v18 )
      {
        v18 = v15[v21 + 3];
        LODWORD(i) = v18;
      }
      v6 = (int *)((char *)this + 4);
      if ( v29 < SDWORD1(i) )
      {
        DWORD1(i) = v29;
        v6 = (int *)((char *)this + 4);
      }
      if ( v24 > v17 )
        v17 = v24;
      DWORD2(i) = v17;
      if ( v26 <= SHIDWORD(i) )
        goto LABEL_41;
    }
    HIDWORD(i) = v26;
LABEL_41:
    if ( v30 >= v25 && v6[2] <= v24 )
      v20 = 1;
    goto LABEL_44;
  }
}

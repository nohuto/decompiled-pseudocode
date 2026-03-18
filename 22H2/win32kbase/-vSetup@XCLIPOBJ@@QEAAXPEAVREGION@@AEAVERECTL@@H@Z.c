/*
 * XREFs of ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C008F4A0
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C015F100 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?bEqual@ERECTL@@QEBAHAEBV1@@Z @ 0x1C0003980 (-bEqual@ERECTL@@QEBAHAEBV1@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C008F794 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 */

void __fastcall XCLIPOBJ::vSetup(XCLIPOBJ *this, struct REGION *a2, struct ERECTL *a3, int a4)
{
  int v5; // r14d
  int *v6; // rsi
  int v8; // r11d
  int v10; // r10d
  int v11; // ecx
  int v12; // r8d
  unsigned int v13; // eax
  __int64 v14; // r9
  int *v15; // r8
  bool v16; // zf
  char v17; // r15
  int v18; // r12d
  int v19; // r13d
  int v20; // edx
  int v21; // r11d
  int v22; // r10d
  __int64 v23; // rcx
  bool v24; // cc
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  ERECTL *v28; // rcx
  __int128 v29; // [rsp+20h] [rbp-48h] BYREF
  int v30; // [rsp+70h] [rbp+8h]
  int v31; // [rsp+78h] [rbp+10h]

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
    v14 = *((unsigned int *)a2 + 13);
    v15 = (int *)*((_QWORD *)a2 + 4);
    LOBYTE(v5) = a4 != 1;
    v29 = 0LL;
    if ( (_DWORD)v14 )
    {
      do
      {
        if ( v6[1] < v15[2] )
          break;
        v15 = (int *)((char *)v15 + (unsigned int)(4 * *v15 + 16));
        v16 = (_DWORD)v14 == 1;
        v14 = (unsigned int)(v14 - 1);
      }
      while ( !v16 );
    }
    v17 = 1;
    if ( !(_DWORD)v14 )
    {
LABEL_46:
      ERECTL::operator*=(v6, &v29, v15, v14);
      if ( v5 )
      {
        if ( a4 || ERECTL::bEqual(v28, a3) )
          return;
      }
      else if ( *((_DWORD *)this + 34) != 1 )
      {
        v17 = 3;
      }
      *((_BYTE *)this + 20) = v17;
      return;
    }
    v18 = DWORD2(v29);
    v19 = v29;
    while ( 1 )
    {
      v14 = (unsigned int)(v14 - 1);
      if ( v15[1] >= v6[3] )
        goto LABEL_46;
      v20 = *v15;
      v21 = 0;
      v22 = 0;
      if ( *v15 )
        break;
LABEL_45:
      v5 &= v21;
      v15 = (int *)((char *)v15 + (unsigned int)(4 * v20 + 16));
      if ( !(_DWORD)v14 )
        goto LABEL_46;
    }
    while ( 1 )
    {
      v23 = (unsigned int)(v22 + 1);
      v31 = *v6;
      if ( v15[v23 + 3] > *v6 )
        break;
LABEL_44:
      v20 = *v15;
      v22 += 2;
      if ( v22 == *v15 )
        goto LABEL_45;
    }
    v24 = v15[v22 + 3] < v6[2];
    v6 = (int *)((char *)this + 4);
    if ( !v24 )
      goto LABEL_45;
    if ( ++*((_DWORD *)this + 34) >= 0xAu )
    {
      *((_BYTE *)this + 20) = 3;
      *((_DWORD *)this + 34) = -1;
      return;
    }
    v25 = v15[v23 + 3];
    v30 = v15[1];
    v26 = v15[v22 + 3];
    v27 = v15[2];
    if ( v19 == v18 || (v6 = (int *)((char *)this + 4), DWORD1(v29) == HIDWORD(v29)) )
    {
      v19 = v15[v22 + 3];
      DWORD1(v29) = v15[1];
      v18 = v25;
      LODWORD(v29) = v26;
      DWORD2(v29) = v25;
    }
    else
    {
      if ( v26 < v19 )
      {
        v19 = v15[v22 + 3];
        LODWORD(v29) = v19;
      }
      v6 = (int *)((char *)this + 4);
      if ( v30 < SDWORD1(v29) )
      {
        DWORD1(v29) = v30;
        v6 = (int *)((char *)this + 4);
      }
      if ( v25 > v18 )
        v18 = v25;
      DWORD2(v29) = v18;
      if ( v27 <= SHIDWORD(v29) )
        goto LABEL_41;
    }
    HIDWORD(v29) = v27;
LABEL_41:
    if ( v31 >= v26 && v6[2] <= v25 )
      v21 = 1;
    goto LABEL_44;
  }
}

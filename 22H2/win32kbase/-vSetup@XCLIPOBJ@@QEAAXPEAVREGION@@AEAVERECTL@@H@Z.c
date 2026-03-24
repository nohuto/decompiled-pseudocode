/*
 * XREFs of ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0029250
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C0142300 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0029548 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEqual@ERECTL@@QEBAHAEBV1@@Z @ 0x1C0082C14 (-bEqual@ERECTL@@QEBAHAEBV1@@Z.c)
 */

void __fastcall XCLIPOBJ::vSetup(XCLIPOBJ *this, struct REGION *a2, struct ERECTL *a3, int a4)
{
  struct ERECTL *v5; // r12
  int v6; // r10d
  char v8; // di
  int v9; // ecx
  signed int *v10; // rsi
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // eax
  int v14; // r9d
  int *v15; // r8
  int v16; // r14d
  int v17; // r10d
  signed int v18; // r13d
  signed int v19; // r12d
  int v20; // ecx
  int v21; // r11d
  __int64 v22; // rdx
  bool v23; // cc
  signed int v24; // ecx
  int v25; // eax
  int v26; // eax
  ERECTL *v27; // rcx
  signed int v28; // [rsp+24h] [rbp-1Ch]
  __int128 v29; // [rsp+28h] [rbp-18h] BYREF
  signed int v30; // [rsp+80h] [rbp+40h]
  int v31; // [rsp+88h] [rbp+48h]

  *((_DWORD *)this + 5) = 0;
  *((_QWORD *)this + 7) = a2;
  v5 = a3;
  v6 = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 4) = v6;
  v8 = 1;
  v9 = *((_DWORD *)a3 + 2);
  v10 = (signed int *)((char *)this + 4);
  *((_DWORD *)this + 3) = v9;
  v11 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 2) = v11;
  v12 = *(_DWORD *)v5;
  *((_DWORD *)this + 1) = *(_DWORD *)v5;
  *(_DWORD *)this = *((_DWORD *)a2 + 7);
  if ( *((_DWORD *)a2 + 20) > 0x38u
    || v12 < *((_DWORD *)a2 + 24)
    || v11 < *((_DWORD *)a2 + 25)
    || v9 > *((_DWORD *)a2 + 26)
    || a4 == 1
    || v6 > *((_DWORD *)a2 + 27)
    || v11 >= v6
    || v12 >= v9 )
  {
    if ( v12 <= *((_DWORD *)a2 + 24) )
      v12 = *((_DWORD *)a2 + 24);
    *v10 = v12;
    if ( v11 <= *((_DWORD *)a2 + 25) )
      v11 = *((_DWORD *)a2 + 25);
    *((_DWORD *)this + 2) = v11;
    if ( v9 >= *((_DWORD *)a2 + 26) )
      v9 = *((_DWORD *)a2 + 26);
    *((_DWORD *)this + 3) = v9;
    if ( v6 >= *((_DWORD *)a2 + 27) )
      v6 = *((_DWORD *)a2 + 27);
    *((_DWORD *)this + 4) = v6;
    if ( v12 >= v9 || v11 >= v6 )
    {
      *v10 = v9;
      return;
    }
    if ( a4 == 1 || *((_DWORD *)a2 + 20) > 0x38u )
    {
      *((_DWORD *)this + 34) = 0;
      v13 = *((_DWORD *)a2 + 20);
      if ( v13 > 0x70 )
      {
        *((_BYTE *)this + 21) = 3;
      }
      else if ( v13 > 0x38 )
      {
        *((_BYTE *)this + 21) = 2;
      }
      v14 = *((_DWORD *)a2 + 21);
      v15 = (int *)*((_QWORD *)a2 + 11);
      v16 = a4 != 1;
      v29 = 0LL;
      if ( v14 )
      {
        do
        {
          if ( *((_DWORD *)this + 2) < v15[2] )
            break;
          v15 = (int *)((char *)v15 + (unsigned int)(4 * *v15 + 16));
          --v14;
        }
        while ( v14 );
        if ( v14 )
        {
          v17 = HIDWORD(v29);
          v18 = DWORD2(v29);
          v19 = DWORD1(v29);
          v31 = v29;
          do
          {
            --v14;
            if ( v15[1] >= v10[3] )
              break;
            v20 = *v15;
            v21 = 0;
            v22 = 0LL;
            if ( *v15 )
            {
              do
              {
                v23 = v15[(unsigned int)(v22 + 1) + 3] <= *v10;
                v10 = (signed int *)((char *)this + 4);
                if ( !v23 )
                {
                  v10 = (signed int *)((char *)this + 4);
                  if ( v15[v22 + 3] >= *((_DWORD *)this + 3) )
                    break;
                  if ( ++*((_DWORD *)this + 34) >= 0xAu )
                  {
                    *((_DWORD *)this + 34) = -1;
                    *((_BYTE *)this + 20) = 3;
                    return;
                  }
                  v24 = v15[v22 + 3];
                  v30 = v15[(unsigned int)(v22 + 1) + 3];
                  v28 = v15[2];
                  v25 = v31;
                  if ( v31 == v18 || v19 == v17 )
                  {
                    v26 = v15[(unsigned int)(v22 + 1) + 3];
                    v18 = v26;
                    v19 = v15[1];
                    v17 = v15[2];
                    *((_QWORD *)&v29 + 1) = __PAIR64__(v28, v30);
                    v31 = v24;
                    *(_QWORD *)&v29 = __PAIR64__(v19, v24);
                  }
                  else
                  {
                    if ( v24 < v31 )
                      v25 = v15[v22 + 3];
                    v31 = v25;
                    if ( v15[1] < v19 )
                      v19 = v15[1];
                    LODWORD(v29) = v25;
                    if ( v30 > v18 )
                      v18 = v30;
                    *(_QWORD *)((char *)&v29 + 4) = __PAIR64__(v18, v19);
                    if ( v28 > v17 )
                    {
                      v17 = v28;
                      HIDWORD(v29) = v28;
                    }
                    v26 = v30;
                  }
                  if ( *v10 >= v24 && *((_DWORD *)this + 3) <= v26 )
                    v21 = 1;
                }
                v20 = *v15;
                v22 = (unsigned int)(v22 + 2);
              }
              while ( (_DWORD)v22 != *v15 );
            }
            v16 &= v21;
            v15 = (int *)((char *)v15 + (unsigned int)(4 * v20 + 16));
          }
          while ( v14 );
          v5 = a3;
        }
      }
      ERECTL::operator*=(v10, &v29, v15);
      if ( v16 )
      {
        if ( a4 || (unsigned int)ERECTL::bEqual(v27, v5) )
          return;
      }
      else if ( *((_DWORD *)this + 34) != 1 )
      {
        v8 = 3;
      }
    }
    else if ( a4 == 2 )
    {
      return;
    }
    *((_BYTE *)this + 20) = v8;
  }
}

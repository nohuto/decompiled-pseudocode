/*
 * XREFs of ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C02A7A64
 * Callers:
 *     GreExtGetObjectW @ 0x1C002E520 (GreExtGetObjectW.c)
 * Callees:
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00AF004 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00AF0A4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C02AB848 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 */

__int64 __fastcall cjGetBrushOrPen(HBRUSH a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v5; // edi
  struct BRUSH *v6; // rsi
  int v7; // eax
  struct BRUSH *v8; // rcx
  int v9; // ebp
  int v10; // r15d
  float *v11; // rdi
  int *v12; // r14
  struct BRUSH *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  struct BRUSH *v17[6]; // [rsp+20h] [rbp-48h] BYREF

  v5 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v17, a1);
  v6 = v17[0];
  if ( !v17[0] )
  {
    EngSetLastError(0x57u);
    goto LABEL_40;
  }
  v7 = *((_DWORD *)v17[0] + 10);
  if ( (v7 & 0x800) == 0 )
  {
    if ( (v7 & 0x400) != 0 )
    {
      if ( (*((_BYTE *)v17[0] + 176) & 0xF) == 7 )
        v9 = *((_DWORD *)v17[0] + 45);
      else
        v9 = 0;
      v10 = 4 * v9 + 28;
      if ( a3 )
      {
        if ( (int)a2 < v10 )
          goto LABEL_40;
        *a3 = *((_DWORD *)v17[0] + 44);
        a3[1] = *((_DWORD *)v6 + 42);
        a3[6] = v9;
        if ( v9 )
        {
          v11 = (float *)*((_QWORD *)v6 + 19);
          v12 = a3 + 7;
          do
          {
            if ( (*((_DWORD *)v6 + 44) & 0xF0000) != 0 )
              bFToL(*v11, v12, 6u);
            else
              *v12 = *(_DWORD *)v11;
            ++v12;
            ++v11;
            --v9;
          }
          while ( v9 );
        }
        a3[2] = *((_DWORD *)v6 + 47);
        a3[3] = *((_DWORD *)v6 + 19);
        *((_QWORD *)a3 + 2) = *((_QWORD *)v6 + 20);
      }
      v5 = v10;
      goto LABEL_40;
    }
    if ( !a3 )
      goto LABEL_38;
    if ( a2 < 0x10 )
      goto LABEL_40;
    bSyncBrushObj(v17[0]);
    v13 = v17[0];
    v14 = *((_DWORD *)v17[0] + 10);
    if ( (v14 & 0x10) != 0 )
    {
      *a3 = 0;
      a3[1] = *((_DWORD *)v13 + 19);
LABEL_33:
      *((_QWORD *)a3 + 1) = 0LL;
      goto LABEL_38;
    }
    if ( (v14 & 0x40) != 0 )
    {
      *(_QWORD *)a3 = 3LL;
    }
    else
    {
      if ( (v14 & 0x20) != 0 )
      {
        *a3 = 2;
        a3[1] = *((_DWORD *)v13 + 19);
        v15 = *((unsigned int *)v13 + 20);
LABEL_37:
        *((_QWORD *)a3 + 1) = v15;
        goto LABEL_38;
      }
      if ( (v14 & 0x100) != 0 )
      {
        *(_QWORD *)a3 = 1LL;
        goto LABEL_33;
      }
      if ( (v14 & 0x80u) == 0 )
        goto LABEL_38;
      *a3 = 5;
      a3[1] = *((_DWORD *)v13 + 19);
    }
    v15 = *((_QWORD *)v13 + 4);
    goto LABEL_37;
  }
  bSyncBrushObj(v17[0]);
  if ( !a3 )
    goto LABEL_38;
  if ( a2 >= 0x10 )
  {
    v8 = v17[0];
    if ( a2 == 32 && *((_DWORD *)v17[0] + 44) == 5 )
    {
      *((_QWORD *)a3 + 1) = 0LL;
      *((_QWORD *)a3 + 2) = 0LL;
      a3[6] = 0;
      v5 = 32;
      *(_QWORD *)a3 = 5LL;
      goto LABEL_40;
    }
    *a3 = *((_DWORD *)v17[0] + 44);
    a3[1] = *((_DWORD *)v8 + 42);
    a3[2] = 0;
    a3[3] = *((_DWORD *)v8 + 19);
LABEL_38:
    v5 = 16;
  }
LABEL_40:
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v17);
  return v5;
}

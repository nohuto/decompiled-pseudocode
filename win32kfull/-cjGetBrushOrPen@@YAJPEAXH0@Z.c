/*
 * XREFs of ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C02AA138
 * Callers:
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00E8C20 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00E8CA0 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C02ADD64 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 */

__int64 __fastcall cjGetBrushOrPen(HBRUSH a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v5; // edi
  struct BRUSH *v6; // rsi
  int v7; // eax
  int v8; // ebp
  int v9; // r15d
  float *v10; // rdi
  int *v11; // r14
  int v12; // eax
  __int64 v13; // rax
  struct BRUSH *v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v15, a1);
  v6 = v15[0];
  if ( !v15[0] )
  {
    EngSetLastError(0x57u);
    goto LABEL_40;
  }
  v7 = *((_DWORD *)v15[0] + 10);
  if ( (v7 & 0x800) == 0 )
  {
    if ( (v7 & 0x400) != 0 )
    {
      if ( (*((_BYTE *)v15[0] + 176) & 0xF) == 7 )
        v8 = *((_DWORD *)v15[0] + 45);
      else
        v8 = 0;
      v9 = 4 * v8 + 28;
      if ( a3 )
      {
        if ( (int)a2 < v9 )
          goto LABEL_40;
        *a3 = *((_DWORD *)v15[0] + 44);
        a3[1] = *((_DWORD *)v6 + 42);
        a3[6] = v8;
        if ( v8 )
        {
          v10 = (float *)*((_QWORD *)v6 + 19);
          v11 = a3 + 7;
          do
          {
            if ( (*((_DWORD *)v6 + 44) & 0xF0000) != 0 )
              bFToL(*v10, v11, 6u);
            else
              *v11 = *(_DWORD *)v10;
            ++v11;
            ++v10;
            --v8;
          }
          while ( v8 );
        }
        a3[2] = *((_DWORD *)v6 + 47);
        a3[3] = *((_DWORD *)v6 + 19);
        *((_QWORD *)a3 + 2) = *((_QWORD *)v6 + 20);
      }
      v5 = v9;
      goto LABEL_40;
    }
    if ( !a3 )
      goto LABEL_38;
    if ( a2 < 0x10 )
      goto LABEL_40;
    bSyncBrushObj(v15[0]);
    v12 = *((_DWORD *)v6 + 10);
    if ( (v12 & 0x10) != 0 )
    {
      *a3 = 0;
      a3[1] = *((_DWORD *)v6 + 19);
LABEL_33:
      *((_QWORD *)a3 + 1) = 0LL;
      goto LABEL_38;
    }
    if ( (v12 & 0x40) != 0 )
    {
      *(_QWORD *)a3 = 3LL;
    }
    else
    {
      if ( (v12 & 0x20) != 0 )
      {
        *a3 = 2;
        a3[1] = *((_DWORD *)v6 + 19);
        v13 = *((unsigned int *)v6 + 20);
LABEL_37:
        *((_QWORD *)a3 + 1) = v13;
        goto LABEL_38;
      }
      if ( (v12 & 0x100) != 0 )
      {
        *(_QWORD *)a3 = 1LL;
        goto LABEL_33;
      }
      if ( (v12 & 0x80u) == 0 )
        goto LABEL_38;
      *a3 = 5;
      a3[1] = *((_DWORD *)v6 + 19);
    }
    v13 = *((_QWORD *)v6 + 4);
    goto LABEL_37;
  }
  bSyncBrushObj(v15[0]);
  if ( !a3 )
    goto LABEL_38;
  if ( a2 >= 0x10 )
  {
    if ( a2 == 32 && *((_DWORD *)v6 + 44) == 5 )
    {
      *((_QWORD *)a3 + 1) = 0LL;
      *((_QWORD *)a3 + 2) = 0LL;
      a3[6] = 0;
      v5 = 32;
      *(_QWORD *)a3 = 5LL;
      goto LABEL_40;
    }
    *a3 = *((_DWORD *)v6 + 44);
    a3[1] = *((_DWORD *)v6 + 42);
    a3[2] = 0;
    a3[3] = *((_DWORD *)v6 + 19);
LABEL_38:
    v5 = 16;
  }
LABEL_40:
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v15);
  return v5;
}

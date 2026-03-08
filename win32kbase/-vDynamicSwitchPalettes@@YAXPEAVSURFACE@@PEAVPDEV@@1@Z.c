/*
 * XREFs of ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C019925C
 * Callers:
 *     bDynamicModeChange @ 0x1C006DF9C (bDynamicModeChange.c)
 * Callees:
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1C000A328 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C002D3CC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C002D440 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0042910 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0046970 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C0050600 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     vMatchAPal @ 0x1C0184D50 (vMatchAPal.c)
 */

void __fastcall vDynamicSwitchPalettes(HPALETTE *a1, struct PDEV *a2, struct PDEV *a3)
{
  __int64 v6; // rax
  HPALETTE v7; // rbx
  __int64 v8; // r15
  HPALETTE v9; // rax
  HPALETTE v10; // rdx
  int v11; // r14d
  struct OBJECT *v12; // rdi
  const unsigned int *v13; // r9
  unsigned int v14; // eax
  unsigned int *v15; // rbx
  unsigned int *v16; // rdx
  int v17; // eax
  unsigned int *v18; // [rsp+50h] [rbp-10h] BYREF
  int v19; // [rsp+58h] [rbp-8h]
  struct OBJECT *v20; // [rsp+90h] [rbp+30h] BYREF
  char v21; // [rsp+98h] [rbp+38h] BYREF

  v6 = SGDGetSessionState(a1);
  v7 = (HPALETTE)*((_QWORD *)a2 + 222);
  v8 = *(_QWORD *)(v6 + 24);
  v9 = a1[16];
  if ( v9 )
  {
    if ( v9 == v7 )
    {
      v17 = *((_DWORD *)a1 + 28);
      if ( (v17 & 0x8000000) != 0 )
        *((_DWORD *)a1 + 28) = v17 & 0xF7FFFFFF;
    }
  }
  else
  {
    *((_DWORD *)a1 + 28) |= 0x20000000u;
    if ( (*((_DWORD *)a2 + 535) & 0x100) != 0 )
    {
      v10 = a1[22];
      v11 = 0;
      if ( !v10 )
        goto LABEL_14;
      EPALOBJ::EPALOBJ((EPALOBJ *)&v20, v10);
      v12 = v20;
      if ( v20 )
      {
        if ( (*((_DWORD *)v20 + 6) & 0x100) != 0 && !XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v20) && *((_QWORD *)v12 + 9) )
        {
          v13 = (const unsigned int *)*((_QWORD *)v7 + 14);
          v19 = 0;
          v18 = 0LL;
          if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v18, 1, 0x100u, v13, 0, 0, 0, 0x400u, 1) )
          {
            v14 = *((_DWORD *)v7 + 15);
            v15 = v18;
            v16 = v18;
            v11 = 1;
            v18[15] = v14;
            vMatchAPal(0LL, v16, v12, &v21, &v20);
            v18 = 0LL;
            v19 = 1;
            a1[16] = (HPALETTE)v15;
          }
          PALMEMOBJ::~PALMEMOBJ(&v18);
        }
        if ( v12 )
          HmgDecrementShareReferenceCountEx((int *)v12, 0LL);
      }
      if ( !v11 )
      {
LABEL_14:
        HmgIncrementShareReferenceCount(*(int **)(v8 + 6016));
        a1[16] = *(HPALETTE *)(v8 + 6016);
      }
    }
    else
    {
      HmgIncrementShareReferenceCount((int *)v7);
      a1[16] = v7;
    }
  }
  if ( (*((_DWORD *)a3 + 535) & 0x100) != 0 && ((_DWORD)a1[14] & 0x20000000) != 0 )
  {
    v20 = (struct OBJECT *)a1[16];
    XEPALOBJ::vUnrefPalette(&v20);
    *((_DWORD *)a1 + 28) &= ~0x20000000u;
    a1[16] = 0LL;
  }
}

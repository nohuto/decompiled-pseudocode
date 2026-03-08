/*
 * XREFs of ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C01845D8
 * Callers:
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x1C01846B0 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C0002B7C (bFToL.c)
 */

void __fastcall ERECTL::vScale(ERECTL *this, const struct POINTFL *a2)
{
  float v2; // xmm2_4
  int *v3; // r14
  int *v4; // rsi
  float v5; // xmm1_4
  int *v6; // rdi
  int v7; // r15d
  int v8; // r12d
  int v9; // ebp
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d

  v2 = *(float *)a2;
  v3 = (int *)((char *)this + 4);
  v4 = (int *)((char *)this + 8);
  v5 = *((float *)a2 + 1);
  v6 = (int *)((char *)this + 12);
  v7 = *((_DWORD *)this + 1);
  v8 = *((_DWORD *)this + 2);
  v9 = *((_DWORD *)this + 3);
  if ( !(unsigned int)bFToL((float)*(int *)this * *(float *)a2, (int *)this, 6u)
    || !(unsigned int)bFToL((float)v7 * v5, v3, v11)
    || !(unsigned int)bFToL((float)v8 * v2, v4, v12)
    || !(unsigned int)bFToL((float)v9 * v5, v6, v13) )
  {
    *v6 = 0;
    *v4 = 0;
    *v3 = 0;
    *(_DWORD *)this = 0;
  }
}

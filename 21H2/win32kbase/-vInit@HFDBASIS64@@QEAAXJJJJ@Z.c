/*
 * XREFs of ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1C0141214
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C0140AE0 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x1C0141090 (-vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vInit(HFDBASIS64 *this, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax

  v5 = a3;
  v7 = 2LL;
  v8 = 2LL;
  v9 = v5;
  do
  {
    v9 -= a4;
    --v8;
  }
  while ( v8 );
  v10 = a5 + v9;
  v11 = a2;
  do
  {
    v11 -= v5;
    --v7;
  }
  while ( v7 );
  *(_QWORD *)this = (__int64)a2 << 28;
  *((_QWORD *)this + 2) = 1610612736 * v10;
  *((_QWORD *)this + 3) = 1610612736 * (v11 + a4);
  *((_QWORD *)this + 1) = (a5 - (__int64)a2) << 28;
}

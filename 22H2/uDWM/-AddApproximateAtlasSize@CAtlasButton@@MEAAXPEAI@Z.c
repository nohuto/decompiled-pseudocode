/*
 * XREFs of ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z @ 0x18003B410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAtlasButton::AddApproximateAtlasSize(CAtlasButton *this, unsigned int *a2)
{
  int *v3; // rdx
  int v5; // eax
  int v6; // ecx
  int v7; // r11d
  int v8; // ecx
  _DWORD *v9; // r11
  int *v10; // rcx
  int v11; // edx
  int v12; // r8d
  int v13; // edx

  v3 = (int *)*((_QWORD *)this + 9);
  v5 = 1;
  if ( v3 )
  {
    v6 = 1;
    if ( v3[8] > 0 )
      v6 = 2;
    v7 = (v3[9] > 0) + v6;
    v8 = 1;
    if ( v3[10] > 0 )
      v8 = 2;
    *a2 += v7 * ((v3[11] > 0) + v8);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 16);
  if ( v9 )
    *a2 += ((v9[8] > 0) + 1 + (v9[9] > 0)) * ((v9[10] > 0) + 1 + (v9[11] > 0));
  v10 = (int *)*((_QWORD *)this + 17);
  if ( v10 )
  {
    v11 = 1;
    if ( v10[8] > 0 )
      v11 = 2;
    v12 = v11 + (v10[9] > 0);
    v13 = 1;
    if ( v10[10] > 0 )
      v13 = 2;
    if ( v10[11] <= 0 )
      v5 = 0;
    *a2 += v12 * (v5 + v13);
  }
}

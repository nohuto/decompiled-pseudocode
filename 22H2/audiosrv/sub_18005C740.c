/*
 * XREFs of sub_18005C740 @ 0x18005C740
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 */

__int64 __fastcall sub_18005C740(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v7; // ebx
  _DWORD *v8; // rax

  v7 = -2147467261;
  if ( !a3 || !a4 || !a5 )
    goto LABEL_10;
  if ( a2 == -1 )
    a2 = *(_DWORD *)(a1 + 120);
  if ( a2 >= *(_DWORD *)(a1 + 124) )
  {
    v7 = -2147024809;
LABEL_10:
    sub_18005E8F8("CVolumeControlBase::GetVolumeRange", 204LL, v7);
    return v7;
  }
  v8 = (_DWORD *)sub_18005D19C(a1 + 88, a2);
  v7 = 0;
  *a3 = v8[2];
  *a4 = v8[3];
  *a5 = v8[4];
  return v7;
}

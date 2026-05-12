/*
 * XREFs of RaidTranslateResourceListAddress @ 0x1C0042B3C
 * Callers:
 *     StorPortGetDeviceBase @ 0x1C0039520 (StorPortGetDeviceBase.c)
 * Callees:
 *     RaidGetResourceListElement @ 0x1C00429A4 (RaidGetResourceListElement.c)
 */

__int64 __fastcall RaidTranslateResourceListAddress(
        _QWORD *a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _QWORD *a7)
{
  _QWORD *v7; // r15
  char v8; // di
  __int64 v9; // rax
  int v12; // r12d
  unsigned int v13; // r14d
  unsigned int v14; // esi
  unsigned __int64 v15; // rdx
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h] BYREF
  _QWORD *v19; // [rsp+80h] [rbp+40h]
  int v20; // [rsp+88h] [rbp+48h] BYREF

  v19 = a1;
  v7 = a7;
  v8 = 0;
  v9 = *a1;
  a6 = 0;
  v20 = 0;
  v12 = 15;
  v17 = 0LL;
  if ( a2 != 17 )
    v12 = a2;
  v18 = 0LL;
  *a7 = 0LL;
  if ( v9 )
  {
    v13 = *(_DWORD *)(v9 + 16);
    v14 = 0;
    if ( v13 )
    {
      while ( 1 )
      {
        RaidGetResourceListElement(a1, v14, &a6, &v20, &v17, &v18);
        if ( a6 == v12 && v20 == a3 )
        {
          v15 = *(_QWORD *)(v17 + 4);
          if ( v15 <= a4 && v15 + *(unsigned int *)(v17 + 12) >= a4 + a5 )
            break;
        }
        if ( ++v14 >= v13 )
          return v8 == 0 ? 0xC0000001 : 0;
        a1 = v19;
      }
      v8 = 1;
      *v7 = a4 + *(_QWORD *)(v18 + 4) - v15;
    }
  }
  return v8 == 0 ? 0xC0000001 : 0;
}

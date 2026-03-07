__int64 __fastcall MiClaimPhysicalRun(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 *a10,
        _DWORD *a11)
{
  _DWORD *v13; // rdx
  __int64 v16; // r12
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v21; // rbx
  _QWORD v22[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+30h] [rbp-40h]
  int v24; // [rsp+38h] [rbp-38h]
  int v25; // [rsp+3Ch] [rbp-34h]
  int v26; // [rsp+40h] [rbp-30h]
  int v27; // [rsp+44h] [rbp-2Ch]
  __int64 v28; // [rsp+48h] [rbp-28h]
  unsigned __int64 v29; // [rsp+50h] [rbp-20h]
  __int64 v30; // [rsp+58h] [rbp-18h]
  __int64 v31; // [rsp+60h] [rbp-10h]
  int v32; // [rsp+D0h] [rbp+60h]
  unsigned __int64 v33; // [rsp+D8h] [rbp+68h]
  __int64 v34; // [rsp+E8h] [rbp+78h]

  v13 = a11;
  v27 = 0;
  v29 = 0LL;
  *a11 = 0;
  if ( a10 )
    *a10 = -1LL;
  v16 = a3;
  v22[1] = a5;
  v25 = a7;
  v22[0] = a1;
  v26 = a9;
  v31 = a8;
  v24 = a6;
  v23 = a3;
  v30 = a4;
  v28 = -1LL;
  v32 = 0;
  v17 = 48 * a2 - 0x220000000000LL;
  v33 = v17 + 48 * a3;
  v34 = a2 + a3;
  while ( 1 )
  {
    v18 = MiTradePage(v22, a2, v13);
    v19 = v18;
    if ( v18 )
      break;
    v19 = 1LL;
    if ( v29 > 1 )
    {
      if ( a2 == (a2 & ~(v29 - 1)) )
        v19 = v29;
      else
        v19 = (~(v29 - 1) & (a2 + v29 - 1)) - a2;
    }
    if ( !v32 )
    {
      if ( v29 )
        v16 = v34 - (a2 & ~(v29 - 1));
      v32 = 1;
    }
    if ( (a6 & 0x2000) == 0 )
      goto LABEL_20;
    if ( v19 >= v34 - a2 )
      return v16;
LABEL_6:
    a2 += v19;
    v17 += 48 * v19;
    if ( v17 >= v33 )
    {
      if ( (a6 & 0x2000) == 0 )
      {
LABEL_20:
        ++dword_140C136EC;
        v21 = a3 - v23;
        dword_140C136F0 = -1431655765 * ((__int64)(v17 + 0x220000000000LL) >> 4);
        if ( a8 )
          *(_DWORD *)(a8 + 40) += -4096 * v21;
        for ( ; v21; --v21 )
        {
          v17 -= 48LL;
          MiReleaseFreshPage(v17);
        }
      }
      return v16;
    }
    v13 = a11;
  }
  v23 -= v18;
  if ( v23 )
    goto LABEL_6;
  ++dword_140C1360C;
  if ( (a6 & 0x400000) != 0 && a10 )
    *a10 = v28;
  return 0LL;
}

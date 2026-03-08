/*
 * XREFs of ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0184B70
 * Callers:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0028270 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x1C00AAA70 (ulGetNearestIndexFromColorref.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C0199D34 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 * Callees:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0184B48 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(ULONG_PTR *this, struct tagPALETTEENTRY a2)
{
  BYTE peRed; // bl
  unsigned __int8 *v5; // rdi
  __int64 v6; // rax
  unsigned __int8 *v7; // rdx
  __int64 v8; // rcx
  ULONG_PTR v9; // rax
  unsigned __int8 *v10; // r10
  unsigned int v11; // r9d
  unsigned __int8 *v12; // rsi
  unsigned __int8 *v13; // r15
  unsigned __int8 *v14; // r12
  unsigned int v15; // r8d

  peRed = a2.peRed;
  if ( !*(_DWORD *)(*this + 28) )
    return XEPALOBJ::ulGetMatchFromPalentry(this, a2);
  v5 = 0LL;
  v6 = SGDGetSessionState(this);
  v7 = (unsigned __int8 *)&unk_1C02A25F0;
  v8 = *(_QWORD *)(v6 + 24);
  v9 = *this;
  if ( *this != *(_QWORD *)(v8 + 6000) )
    v7 = *(unsigned __int8 **)(v9 + 112);
  v10 = v7;
  v11 = 196608;
  v12 = &v7[4 * *(unsigned int *)(v9 + 28)];
  do
  {
    v13 = v7;
    v14 = v5;
    v15 = *(_DWORD *)(*(_QWORD *)(v8 + 3944) + 4 * (*v7 - (unsigned __int64)peRed))
        + *(_DWORD *)(*(_QWORD *)(v8 + 3944) + 4 * (v7[1] - (unsigned __int64)a2.peGreen))
        + *(_DWORD *)(*(_QWORD *)(v8 + 3944) + 4 * (v7[2] - (unsigned __int64)a2.peBlue));
    if ( v15 < v11 )
    {
      v5 = v7;
      if ( !v15 )
        break;
    }
    v7 += 4;
    v5 = v13;
    if ( v15 >= v11 )
    {
      v15 = v11;
      v5 = v14;
    }
    v11 = v15;
  }
  while ( v7 < v12 );
  return (v5 - v10) >> 2;
}

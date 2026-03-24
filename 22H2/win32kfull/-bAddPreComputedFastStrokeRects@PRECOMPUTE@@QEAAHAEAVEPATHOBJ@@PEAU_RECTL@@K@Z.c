/*
 * XREFs of ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02CF490
 * Callers:
 *     ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02CF7D4 (-bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall PRECOMPUTE::bAddPreComputedFastStrokeRects(
        PRECOMPUTE *this,
        struct EPATHOBJ *a2,
        struct _RECTL *a3,
        unsigned int a4)
{
  unsigned int v4; // eax
  __int64 v6; // rbp
  unsigned __int64 v8; // rax
  char *v9; // rax
  char *v10; // rsi
  const void *v11; // rdx
  void *v12; // rcx
  __int64 result; // rax
  void *v14; // rcx

  v4 = *((_DWORD *)a2 + 15);
  v6 = a4;
  if ( v4 + a4 <= v4 )
  {
    if ( v4 )
    {
      *((_DWORD *)a2 + 15) = 0;
      v14 = (void *)*((_QWORD *)a2 + 8);
      goto LABEL_13;
    }
    return 0LL;
  }
  v8 = 16LL * (v4 + a4);
  if ( v8 > 0xFFFFFFFF || (v9 = (char *)PALLOCMEM2((unsigned int)v8, 1734632775LL, 0), (v10 = v9) == 0LL) )
  {
    if ( *((_DWORD *)a2 + 15) )
    {
      *((_DWORD *)a2 + 15) = 0;
      v14 = (void *)*((_QWORD *)a2 + 8);
LABEL_13:
      Win32FreePool(v14);
      *((_QWORD *)a2 + 8) = 0LL;
      return 0LL;
    }
    return 0LL;
  }
  v11 = (const void *)*((_QWORD *)a2 + 8);
  if ( v11 )
    memmove(v9, v11, 16LL * *((unsigned int *)a2 + 15));
  memmove(&v10[16 * *((unsigned int *)a2 + 15)], a3, 16 * v6);
  v12 = (void *)*((_QWORD *)a2 + 8);
  if ( v12 )
    Win32FreePool(v12);
  *((_DWORD *)a2 + 15) += v6;
  result = 1LL;
  *((_QWORD *)a2 + 8) = v10;
  return result;
}

/*
 * XREFs of ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02CE4E0
 * Callers:
 *     ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02CE918 (-bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
 * Callees:
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall PRECOMPUTE::bAddPreComputedFastFillRects(
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
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx

  v4 = *((_DWORD *)a2 + 14);
  v6 = a4;
  if ( v4 + a4 <= v4 )
  {
    if ( v4 )
    {
      *((_DWORD *)a2 + 14) = 0;
      v14 = *((_QWORD *)a2 + 6);
      goto LABEL_14;
    }
    return 0LL;
  }
  v8 = 16LL * (v4 + a4);
  if ( v8 > 0xFFFFFFFF
    || !(_DWORD)v8
    || (v9 = (char *)Win32AllocPool((unsigned int)v8, 1734632775LL), (v10 = v9) == 0LL) )
  {
    if ( *((_DWORD *)a2 + 14) )
    {
      *((_DWORD *)a2 + 14) = 0;
      v14 = *((_QWORD *)a2 + 6);
LABEL_14:
      Win32FreePool(v14);
      *((_QWORD *)a2 + 6) = 0LL;
      return 0LL;
    }
    return 0LL;
  }
  v11 = (const void *)*((_QWORD *)a2 + 6);
  if ( v11 )
    memmove(v9, v11, 16LL * *((unsigned int *)a2 + 14));
  memmove(&v10[16 * *((unsigned int *)a2 + 14)], a3, 16 * v6);
  v12 = *((_QWORD *)a2 + 6);
  if ( v12 )
    Win32FreePool(v12);
  *((_DWORD *)a2 + 14) += v6;
  result = 1LL;
  *((_QWORD *)a2 + 6) = v10;
  return result;
}

/*
 * XREFs of BRUSHOBJ_pvAllocRbrush @ 0x1C026B050
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C029C9F0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     ?MulRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C02A1D20 (-MulRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall BRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, ULONG cj)
{
  __int64 v4; // r8
  PVOID result; // rax
  ULONG v6; // ebx
  __int64 v7; // rax

  if ( gpCachedDbrush )
  {
    v4 = _InterlockedExchange64((volatile __int64 *)gpCachedDbrush, 0LL);
    if ( v4 )
    {
      if ( cj + 16 >= cj && *(unsigned int *)(v4 + 4) >= (unsigned __int64)cj + 16 )
      {
        result = (PVOID)(v4 + 16);
LABEL_6:
        pbo->pvRbrush = result;
        return result;
      }
      Win32FreePool(v4);
    }
  }
  v6 = cj + 16;
  if ( v6 )
  {
    v7 = Win32AllocPoolZInit(v6, 1919050823LL);
    if ( v7 )
    {
      *(_DWORD *)(v7 + 4) = v6;
      result = (PVOID)(v7 + 16);
      goto LABEL_6;
    }
  }
  return 0LL;
}

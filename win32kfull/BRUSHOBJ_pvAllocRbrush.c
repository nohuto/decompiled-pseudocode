/*
 * XREFs of BRUSHOBJ_pvAllocRbrush @ 0x1C0267D00
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C02A92E0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     ?MulRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C02B28D0 (-MulRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall BRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, ULONG cj)
{
  __int64 v2; // rbx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  unsigned int *v5; // r8
  PVOID result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax

  v2 = cj;
  v4 = Gre::Base::Globals((Gre::Base *)pbo);
  if ( *((_QWORD *)v4 + 24) )
  {
    v5 = (unsigned int *)_InterlockedExchange64((volatile __int64 *)v4 + 24, 0LL);
    if ( v5 )
    {
      if ( (int)v2 + 16 >= (unsigned int)v2 && v5[1] >= (unsigned __int64)(v2 + 16) )
      {
        result = v5 + 4;
LABEL_6:
        pbo->pvRbrush = result;
        return result;
      }
      Win32FreePool(v5);
    }
  }
  v7 = v2 + 16;
  if ( v7 )
  {
    v8 = Win32AllocPoolZInit(v7, 1919050823LL);
    if ( v8 )
    {
      *(_DWORD *)(v8 + 4) = v7;
      result = (PVOID)(v8 + 16);
      goto LABEL_6;
    }
  }
  return 0LL;
}

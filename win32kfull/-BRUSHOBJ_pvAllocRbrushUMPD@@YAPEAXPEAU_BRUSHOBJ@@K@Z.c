/*
 * XREFs of ?BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z @ 0x1C0267A94
 * Callers:
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02CA840 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall BRUSHOBJ_pvAllocRbrushUMPD(struct _BRUSHOBJ *a1, unsigned int a2)
{
  PVOID *p_pvRbrush; // rbx
  unsigned int v3; // edi
  _DWORD *v5; // rax

  p_pvRbrush = &a1->pvRbrush;
  if ( !a1->pvRbrush )
  {
    v3 = a2 + 16;
    if ( a2 + 16 < a2 )
      return 0LL;
    v5 = EngAllocUserMem(v3, 0x706D7547u);
    if ( v5 )
    {
      v5[1] = v3;
      v5[2] = 0;
      v5[3] = 1;
      *p_pvRbrush = v5 + 4;
    }
  }
  return *p_pvRbrush;
}

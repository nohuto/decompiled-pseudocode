/*
 * XREFs of ?AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z @ 0x1C01B8724
 * Callers:
 *     ?AssociateInputContextEx@@YA?AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z @ 0x1C01B874C (-AssociateInputContextEx@@YA-AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z.c)
 *     ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x1C01B88F4 (-DestroyInputContext@@YAHPEAUtagIMC@@@Z.c)
 * Callees:
 *     <none>
 */

struct HIMC__ *__fastcall AssociateInputContext(struct tagWND *a1, struct tagIMC *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0LL;
  v4 = *(_QWORD *)(v2 + 208);
  if ( a2 )
    v3 = *(_QWORD *)a2;
  *(_QWORD *)(v2 + 208) = v3;
  return (struct HIMC__ *)v4;
}

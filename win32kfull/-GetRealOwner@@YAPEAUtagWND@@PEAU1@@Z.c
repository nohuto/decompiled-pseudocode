/*
 * XREFs of ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0026A8C
 * Callers:
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0022344 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0026458 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0026850 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GetRealOwner(struct tagWND *a1)
{
  struct tagWND *v1; // rax
  struct tagWND *v2; // rdx
  bool i; // zf

  v1 = (struct tagWND *)*((_QWORD *)a1 + 15);
  v2 = (struct tagWND *)*((_QWORD *)a1 + 13);
  for ( i = a1 == v1; !i; i = v1 == v2 )
  {
    a1 = v1;
    if ( !v1 )
      break;
    v1 = (struct tagWND *)*((_QWORD *)v1 + 13);
  }
  return a1;
}

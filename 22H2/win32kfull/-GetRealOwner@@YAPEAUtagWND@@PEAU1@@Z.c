/*
 * XREFs of ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00261E4
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0025DF0 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0028480 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00952FC (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
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

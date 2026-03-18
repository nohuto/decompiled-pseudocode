/*
 * XREFs of ?SetFullRegion@CRegion@@UEAAXXZ @ 0x1C00B1AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall CRegion::SetFullRegion(CRegion *this)
{
  struct _SLIST_ENTRY *v2; // rcx

  v2 = (struct _SLIST_ENTRY *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    REGION::vDeleteREGION(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 3) = 1;
}

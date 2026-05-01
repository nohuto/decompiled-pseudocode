/*
 * XREFs of ?ContextMenu@CMultitaskingViewElementBase@@UEAAXAEBVContextMenuArgs@@@Z @ 0x180411DB0
 * Callers:
 *     ?ContextMenu@CSwitchItemElement@@MEAAXAEBVContextMenuArgs@@@Z @ 0x180410190 (-ContextMenu@CSwitchItemElement@@MEAAXAEBVContextMenuArgs@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewElementBase::ContextMenu(
        CMultitaskingViewElementBase *this,
        const struct ContextMenuArgs *a2)
{
  void (__fastcall *v2)(__int64); // rax
  __int64 v3; // r8

  if ( *(_DWORD *)a2 == -1 )
    v3 = *((_QWORD *)this + 21);
  else
    v3 = *((_QWORD *)this + 17);
  if ( v3 )
    v2(v3);
  else
    (*(void (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 600LL))(this);
}

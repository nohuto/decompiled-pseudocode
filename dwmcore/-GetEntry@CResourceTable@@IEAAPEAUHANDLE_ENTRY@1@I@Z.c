/*
 * XREFs of ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800AA714
 * Callers:
 *     ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x1800AA62C (-DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180099BBC (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

struct CResourceTable::HANDLE_ENTRY *__fastcall CResourceTable::GetEntry(CResourceTable *this, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  __int64 v4; // r9

  LOBYTE(v2) = HANDLE_TABLE::ValidEntry((CResourceTable *)((char *)this + 16), a2);
  if ( v2 )
    return (struct CResourceTable::HANDLE_ENTRY *)(*(_QWORD *)(v4 + 40) + (unsigned int)(*(_DWORD *)(v4 + 24) * v3));
  else
    return 0LL;
}

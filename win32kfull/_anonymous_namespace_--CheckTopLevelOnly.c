/*
 * XREFs of _anonymous_namespace_::CheckTopLevelOnly @ 0x1C00C8D18
 * Callers:
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00C8AFC (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::CheckTopLevelOnly(__int64 a1)
{
  while ( a1 && (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
    a1 = *(_QWORD *)(a1 + 112);
  return a1;
}

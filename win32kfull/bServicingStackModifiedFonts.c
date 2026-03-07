__int64 __fastcall bServicingStackModifiedFonts(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetSessionState(a1);
  bQueryFntCacheReg(*(HANDLE *)(*(_QWORD *)(v1 + 32) + 19408LL));
  bSetFntCacheReg(2u, 2);
  return 1LL;
}

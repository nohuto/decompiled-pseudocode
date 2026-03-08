/*
 * XREFs of ?CreateUsermodeParameters@TrueTypeFreeGlyphsetRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308E90
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C011EA58 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall TrueTypeFreeGlyphsetRequest::CreateUsermodeParameters(
        TrueTypeFreeGlyphsetRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  _DWORD *v5; // rax

  v5 = UmfdTls::CommitUMBuffer(a2, 0x10u, 1);
  if ( !v5 )
    return 3221225495LL;
  *(_QWORD *)v5 = **((_QWORD **)this + 5);
  v5[2] = *((_DWORD *)this + 12);
  *a3 = v5;
  return 0LL;
}

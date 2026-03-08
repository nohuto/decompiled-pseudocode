/*
 * XREFs of ?CreateUsermodeParameters@UnloadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C011EA58 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall UnloadFontFileRequest::CreateUsermodeParameters(
        UnloadFontFileRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  _QWORD *v5; // rdx

  v5 = UmfdTls::CommitUMBuffer(a2, 0x10u, 1);
  if ( !v5 )
    return 3221225495LL;
  *v5 = **((_QWORD **)this + 5);
  *a3 = v5;
  return 0LL;
}

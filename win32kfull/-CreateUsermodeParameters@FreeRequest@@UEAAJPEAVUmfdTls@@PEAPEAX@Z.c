/*
 * XREFs of ?CreateUsermodeParameters@FreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C011EA58 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall FreeRequest::CreateUsermodeParameters(FreeRequest *this, UmfdUMBuffer **a2, void **a3)
{
  _QWORD *v5; // rax

  v5 = UmfdTls::CommitUMBuffer(a2, 0x10u, 1);
  if ( !v5 )
    return 3221225495LL;
  v5[1] = *((_QWORD *)this + 6);
  *v5 = *((_QWORD *)this + 5);
  *a3 = v5;
  return 0LL;
}

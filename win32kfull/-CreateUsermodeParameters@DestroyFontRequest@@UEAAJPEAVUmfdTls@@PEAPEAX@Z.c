/*
 * XREFs of ?CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0152630
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C011EA58 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x1C011FED4 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 */

__int64 __fastcall DestroyFontRequest::CreateUsermodeParameters(DestroyFontRequest *this, UmfdUMBuffer **a2, void **a3)
{
  char *v6; // rax
  _QWORD *v8; // r10

  v6 = (char *)UmfdTls::CommitUMBuffer(a2, 0x48u, 1);
  if ( !v6 )
    return 3221225495LL;
  *((_QWORD *)this + 6) = v6 + 8;
  FontDriverDdiRequest::PrepareUsermodeFontObj(
    (struct UmfdTls *)a2,
    *((struct _FONTOBJ **)this + 5),
    (struct _FONTOBJ *)(v6 + 8));
  *v8 = *((_QWORD *)this + 6);
  *a3 = v8;
  return 0LL;
}

/*
 * XREFs of ?copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEAG_K_K@Z @ 0x14000DF28
 * Callers:
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000DE60 (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 * Callees:
 *     memcpy_0 @ 0x1400071BC (memcpy_0.c)
 */

unsigned __int64 __fastcall std::wstring::copy(_QWORD *Src, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx

  v3 = a3;
  if ( Src[2] < a3 )
    v3 = Src[2];
  if ( Src[3] >= 8uLL )
    Src = (_QWORD *)*Src;
  memcpy_0(a2, Src, 2 * v3);
  return v3;
}

/*
 * XREFs of ?IsUtf8Process@@YAEPEAUtagWND@@@Z @ 0x1C0169664
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x1C0020F50 (SfnINLPCREATESTRUCT.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsUtf8Process(struct tagWND *a1)
{
  char v1; // bl
  _QWORD *v2; // rcx

  v1 = 0;
  v2 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 424LL);
  if ( v2 )
    return *(_QWORD *)(PsGetProcessPeb(*v2) + 160) == 0LL;
  return v1;
}

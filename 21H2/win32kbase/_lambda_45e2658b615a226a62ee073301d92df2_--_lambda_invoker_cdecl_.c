/*
 * XREFs of _lambda_45e2658b615a226a62ee073301d92df2_::_lambda_invoker_cdecl_ @ 0x1C00D82A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMConfigureDeviceFeedback @ 0x1C00DBFA0 (RIMConfigureDeviceFeedback.c)
 */

char __fastcall lambda_45e2658b615a226a62ee073301d92df2_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  int v2; // edx
  __int64 v3; // rdx

  v2 = *((_DWORD *)a1 + 50);
  if ( (v2 & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)a1 + 59) + 24LL) == 7 && (v2 & 0x400) != 0 )
  {
    if ( (*(&qword_1C0294F10 + 1) & 0x10000) != 0 )
      v3 = (unsigned int)*((char *)&qword_1C0294F10 + 5);
    else
      v3 = 0LL;
    RIMConfigureDeviceFeedback(a1, v3);
  }
  return 1;
}

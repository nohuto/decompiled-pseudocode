/*
 * XREFs of ?ReportFailure_Hr@details@wil@@YGXPAXIPBD110W4FailureType@2@J@Z @ 0x10003E4A
 * Callers:
 *     ?_Log_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10003377 (-_Log_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x10003AA3 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10003E71 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBGW4ReportFailureOptions@12@@Z @ 0x10003D78 (-ReportFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBGW4ReportFailureOptions@12@@Z.c)
 */

void __fastcall wil::details::ReportFailure_Hr(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        wil::details *a8)
{
  int v8; // [esp+0h] [ebp-8h]
  int v9; // [esp+4h] [ebp-4h]

  wil::details::ReportFailure(a1, a2, a3, a4, a5, a6, a7, a8, v8, v9);
}

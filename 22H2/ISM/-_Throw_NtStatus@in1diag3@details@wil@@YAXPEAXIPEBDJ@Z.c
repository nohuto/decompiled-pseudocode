/*
 * XREFs of ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F12A4
 * Callers:
 *     ??0LegacyInputSinkData@@QEAA@PEAX_N@Z @ 0x180044BF0 (--0LegacyInputSinkData@@QEAA@PEAX_N@Z.c)
 *     ??0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAX1@Z @ 0x180131264 (--0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAX1@Z.c)
 * Callees:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180078780 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Throw_NtStatus(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_NtStatus(
    (__int64)this,
    (unsigned int)a2,
    a3,
    (__int64)a4,
    v4,
    retaddr,
    0,
    (unsigned int)a4);
}

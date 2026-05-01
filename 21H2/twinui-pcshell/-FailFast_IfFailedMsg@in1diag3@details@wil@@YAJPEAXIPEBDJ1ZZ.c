/*
 * XREFs of ?FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800D5144
 * Callers:
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x1800D525C (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 *     _lambda_0d9fadf3b0a1cd5c1af5e2319cce9b5e_::operator() @ 0x1800D7B80 (_lambda_0d9fadf3b0a1cd5c1af5e2319cce9b5e_--operator().c)
 *     _lambda_b4c239c7973e05cc538f5b37e4c5171e_::operator() @ 0x1800DA624 (_lambda_b4c239c7973e05cc538f5b37e4c5171e_--operator().c)
 * Callees:
 *     ?_FailFast_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z @ 0x1800D53B8 (-_FailFast_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::FailFast_IfFailedMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        ...)
{
  void *v7; // [rsp+20h] [rbp-28h]
  char *v8; // [rsp+38h] [rbp-10h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  if ( (int)a4 < 0 )
  {
    LODWORD(v7) = (_DWORD)a4;
    wil::details::in1diag3::_FailFast_HrMsg(this, a2, a3, retaddr, v7, a5, (const char *)&a6, v8);
    JUMPOUT(0x1800D517CLL);
  }
  return (unsigned int)a4;
}

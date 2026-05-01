/*
 * XREFs of ??1?$CAutoHandle@PEAUHDC__@@@@QEAA@XZ @ 0x1804862F0
 * Callers:
 *     __lambda_688f7da27bd069ce265bc30902a9ac85_::operator()_::_1_::dtor$0 @ 0x1804B22CE (__lambda_688f7da27bd069ce265bc30902a9ac85_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
int __fastcall CAutoHandle<HDC__ *>::~CAutoHandle<HDC__ *>(HDC *a1)
{
  HDC v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = DeleteDC(v1);
  return (int)v1;
}

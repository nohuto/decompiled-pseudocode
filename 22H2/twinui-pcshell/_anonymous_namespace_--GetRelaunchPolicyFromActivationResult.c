/*
 * XREFs of _anonymous_namespace_::GetRelaunchPolicyFromActivationResult @ 0x1803BA59C
 * Callers:
 *     _lambda_d35354d926b4f7c0d2efe226c9ec2890_::operator() @ 0x1800CF82C (_lambda_d35354d926b4f7c0d2efe226c9ec2890_--operator().c)
 * Callees:
 *     _Init_thread_footer @ 0x1800910C8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180091130 (_Init_thread_header.c)
 */

__int64 __fastcall anonymous_namespace_::GetRelaunchPolicyFromActivationResult(int a1)
{
  _DWORD *v2; // rax

  if ( dword_180653374 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180653374);
    if ( dword_180653374 == -1 )
    {
      dword_18064EF7C = 0;
      dword_18064EF78 = -2147009295;
      Init_thread_footer(&dword_180653374);
    }
  }
  v2 = &unk_18064EF70;
  while ( *v2 != a1 )
  {
    v2 += 2;
    if ( v2 == (_DWORD *)&PPILayoutOperation::_insertSide )
      return 1LL;
  }
  return (unsigned int)v2[1];
}

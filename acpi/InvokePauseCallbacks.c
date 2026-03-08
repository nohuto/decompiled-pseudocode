/*
 * XREFs of InvokePauseCallbacks @ 0x1C0053994
 * Callers:
 *     RunContext @ 0x1C0053F34 (RunContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

void InvokePauseCallbacks()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = qword_1C0070080;
    if ( (__int64 *)qword_1C0070080 == &qword_1C0070080 )
      break;
    if ( *(__int64 **)(qword_1C0070080 + 8) != &qword_1C0070080
      || (v1 = *(_QWORD *)qword_1C0070080, *(_QWORD *)(*(_QWORD *)qword_1C0070080 + 8LL) != qword_1C0070080) )
    {
      __fastfail(3u);
    }
    qword_1C0070080 = *(_QWORD *)qword_1C0070080;
    *(_QWORD *)(v1 + 8) = &qword_1C0070080;
    (*(void (__fastcall **)(_QWORD))(v0 + 16))(*(_QWORD *)(v0 + 24));
  }
}

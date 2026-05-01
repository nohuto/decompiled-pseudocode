/*
 * XREFs of ?last_error@test_state@tip@@QEBAPEBUFailureInfo@wil@@XZ @ 0x1800AD1F0
 * Callers:
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAX_J@Z @ 0x1800ACA2C (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAX_J@Z.c)
 * Callees:
 *     <none>
 */

const struct wil::FailureInfo *__fastcall tip::test_state::last_error(tip::test_state *this)
{
  int v1; // r10d
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9
  int v5; // ecx

  v1 = 0;
  v2 = *((_QWORD *)this + 8);
  v3 = 0LL;
  v4 = v2 + 160LL * *((_QWORD *)this + 10);
  while ( v2 != v4 )
  {
    v5 = *(_DWORD *)(v2 + 4);
    if ( v1 != v5 )
      v3 = v2;
    v2 += 160LL;
    if ( v1 == v5 )
      v5 = v1;
    v1 = v5;
  }
  return (const struct wil::FailureInfo *)v3;
}

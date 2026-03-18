/*
 * XREFs of ?QueryInputQueueForInputType@CInputSink@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00961A4
 * Callers:
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0095E04 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputSink::QueryInputQueueForInputType(_QWORD *a1, int a2, __int64 a3)
{
  int v3; // edx
  __int64 v4; // rcx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  v3 = a2 - 1;
  if ( !v3 )
  {
    v4 = a1[5];
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 40LL))(v4, a3);
  }
  v6 = v3 - 1;
  if ( !v6 )
  {
    v4 = a1[6];
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 40LL))(v4, a3);
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v4 = a1[7];
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 40LL))(v4, a3);
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v4 = a1[8];
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 40LL))(v4, a3);
  }
  if ( v8 == 1 )
  {
    v4 = a1[9];
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 40LL))(v4, a3);
  }
  return 3221225485LL;
}

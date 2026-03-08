/*
 * XREFs of ?QueryInputQueueForInputType@CInputSink@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C006AD4C
 * Callers:
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C006ACF0 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputSink::QueryInputQueueForInputType(_QWORD *a1, int a2, __int64 a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  __int64 v6; // rcx
  int v8; // edx

  v3 = a2 - 1;
  if ( !v3 )
  {
    v6 = a1[5];
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 40LL))(v6, a3);
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = a1[6];
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 40LL))(v6, a3);
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = a1[7];
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 40LL))(v6, a3);
  }
  v8 = v5 - 1;
  if ( !v8 )
  {
    v6 = a1[8];
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 40LL))(v6, a3);
  }
  if ( v8 == 1 )
  {
    v6 = a1[9];
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 40LL))(v6, a3);
  }
  return 3221225485LL;
}

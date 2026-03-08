/*
 * XREFs of KiInsertQueueApc @ 0x140354598
 * Callers:
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     KiSchedulerApc @ 0x140353560 (KiSchedulerApc.c)
 *     KiSuspendThread @ 0x140354348 (KiSuspendThread.c)
 *     KeRequestTerminationThread @ 0x140354D78 (KeRequestTerminationThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1403554AC (KiInsertDeferredPreemptionApc.c)
 *     KeTryToInsertQueueApc @ 0x140570BD0 (KeTryToInsertQueueApc.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiInsertQueueApc(__int64 a1)
{
  __int64 v1; // rdx
  _BYTE *v2; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *result; // rax
  void (__fastcall __noreturn *v9)(); // r9
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD **v12; // r8
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = (_BYTE *)(v1 + 586);
  if ( !*(_BYTE *)(a1 + 80) && *v2 )
  {
    v3 = 600LL;
  }
  else
  {
    *(_BYTE *)(a1 + 80) = *v2;
    v3 = 152LL;
  }
  v4 = v3 + v1;
  v5 = *(char *)(a1 + 81);
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( !(_BYTE)v5 )
      goto LABEL_6;
    v9 = *(void (__fastcall __noreturn **)())(a1 + 32);
    if ( v9 == KiSchedulerApcTerminate )
    {
      *(_BYTE *)(v1 + 194) |= 2u;
      v10 = (_QWORD *)(a1 + 16);
      v11 = v4 + 16 * v5;
      result = *(_QWORD **)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
        goto LABEL_12;
      *v10 = result;
      v10[1] = v11;
      result[1] = v10;
      *(_QWORD *)v11 = v10;
      return result;
    }
    if ( (char *)v9 != (char *)KeSpecialUserApcKernelRoutine )
    {
LABEL_6:
      v6 = (_QWORD *)(a1 + 16);
      v7 = v4 + 16 * v5;
      result = *(_QWORD **)(v7 + 8);
      if ( *result == v7 )
      {
        *v6 = v7;
        v6[1] = result;
        *result = v6;
        *(_QWORD *)(v7 + 8) = v6;
        return result;
      }
LABEL_12:
      __fastfail(3u);
    }
    v12 = (_QWORD **)(16 * v5 + v4);
    for ( result = *v12; result != v12; result = (_QWORD *)*result )
      ;
    *(_BYTE *)(v1 + 194) |= 1u;
  }
  else
  {
    v15 = (_QWORD *)(v4 + 16 * v5);
    for ( result = (_QWORD *)v15[1]; result != v15 && result[4]; result = (_QWORD *)result[1] )
      ;
  }
  v13 = (_QWORD *)*result;
  v14 = (_QWORD *)(a1 + 16);
  if ( *(_QWORD **)(*result + 8LL) != result )
    goto LABEL_12;
  *v14 = v13;
  v14[1] = result;
  v13[1] = v14;
  *result = v14;
  return result;
}

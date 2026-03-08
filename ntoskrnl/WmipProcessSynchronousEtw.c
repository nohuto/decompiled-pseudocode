/*
 * XREFs of WmipProcessSynchronousEtw @ 0x1408689F0
 * Callers:
 *     WmipAddDataSource @ 0x140867978 (WmipAddDataSource.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     WmipLegacyEtwWorker @ 0x14084D950 (WmipLegacyEtwWorker.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall WmipProcessSynchronousEtw(_QWORD **a1)
{
  _QWORD *v2; // rbx
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v5 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
LABEL_16:
      __fastfail(3u);
    *a1 = v5;
    v5[1] = a1;
    WmipLegacyEtwWorker(v2[2]);
    v6 = v2 + 5;
    while ( 1 )
    {
      v7 = (_QWORD *)*v6;
      if ( (_QWORD *)*v6 == v6 )
        break;
      if ( (_QWORD *)v7[1] != v6 )
        goto LABEL_16;
      v8 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_16;
      *v6 = v8;
      *(_QWORD *)(v8 + 8) = v6;
      KeSetEvent((PRKEVENT)(v7 + 2), 0, 0);
    }
    ExFreePoolWithTag(v2, 0x70696D57u);
  }
  v3 = a1 + 2;
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 )
      goto LABEL_16;
    v9 = (_QWORD *)*v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 )
      goto LABEL_16;
    *v3 = v9;
    v9[1] = v3;
    KeWaitForSingleObject(v4 + 4, Executive, 0, 0, 0LL);
    ExFreePoolWithTag(v4, 0x70696D57u);
  }
}

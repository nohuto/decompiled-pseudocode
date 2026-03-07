__int64 __fastcall ObpInsertCallbackByAltitude(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // r15
  _QWORD *v5; // r14
  unsigned int v6; // esi
  _QWORD *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  struct _KTHREAD *v10; // rcx
  const UNICODE_STRING *v12; // rbp
  LONG v13; // eax
  bool v14; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = (__int64 *)(a1 + 184);
  v5 = (_QWORD *)(a1 + 200);
  v6 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
  v7 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
    goto LABEL_2;
  v12 = (const UNICODE_STRING *)a2[3];
  while ( 1 )
  {
    v13 = RtlCompareAltitudes((PCUNICODE_STRING)(v7[3] + 16LL), v12 + 1);
    v14 = v13 == 0;
    if ( v13 <= 0 )
      break;
    v7 = (_QWORD *)*v7;
    if ( v7 == v5 )
    {
      v14 = v13 == 0;
      break;
    }
  }
  if ( !v14 )
  {
LABEL_2:
    v8 = (__int64 *)v7[1];
    v9 = *v8;
    if ( *(__int64 **)(*v8 + 8) != v8 )
      __fastfail(3u);
    *a2 = v9;
    a2[1] = v8;
    *(_QWORD *)(v9 + 8) = a2;
    *v8 = (__int64)a2;
  }
  else
  {
    v6 = -1071906799;
  }
  ExReleasePushLockEx(v3, 0LL);
  v10 = KeGetCurrentThread();
  v14 = v10->SpecialApcDisable++ == -1;
  if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  return v6;
}

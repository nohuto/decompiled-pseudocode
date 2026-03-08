/*
 * XREFs of ACPIButtonCompletePendingIrps @ 0x1C001873C
 * Callers:
 *     ACPIButtonEvent @ 0x1C00189F0 (ACPIButtonEvent.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIButtonCompletePendingIrps(__int64 a1, int a2)
{
  char v3; // di
  KIRQL v5; // al
  __int64 *v6; // r8
  KIRQL v7; // r9
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 **v11; // rax
  __int64 **v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  IRP *v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // r8
  _QWORD *v19; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v20; // [rsp+28h] [rbp-10h]

  v20 = (__int64 *)&v19;
  v3 = 0;
  v19 = &v19;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiButtonLock);
  v6 = (__int64 *)AcpiButtonList;
  v7 = v5;
  while ( v6 != &AcpiButtonList )
  {
    v8 = v6;
    v9 = v6;
    v6 = (__int64 *)*v6;
    if ( *(_QWORD *)(v8[2] + 40) == a1 && _InterlockedExchange64(v8 - 8, 0LL) )
    {
      *(_DWORD *)*(v8 - 18) = a2;
      *((_DWORD *)v8 - 30) = 0;
      *(v8 - 14) = 4LL;
      v10 = *v8;
      if ( *(__int64 **)(v10 + 8) != v9
        || (v11 = (__int64 **)v9[1], *v11 != v9)
        || (*v11 = (__int64 *)v10, *(_QWORD *)(v10 + 8) = v11, v12 = (__int64 **)v20, (_QWORD **)*v20 != &v19) )
      {
LABEL_15:
        __fastfail(3u);
      }
      v9[1] = (__int64)v20;
      *v9 = (__int64)&v19;
      *v12 = v9;
      v20 = v9;
    }
  }
  KeReleaseSpinLock(&AcpiButtonLock, v7);
  v13 = v19;
  while ( v13 != &v19 )
  {
    v14 = (_QWORD *)*v13;
    v15 = (IRP *)(v13 - 21);
    v16 = v13;
    v13 = v14;
    if ( (_QWORD *)v14[1] != v16 )
      goto LABEL_15;
    v17 = (_QWORD *)v16[1];
    if ( (_QWORD *)*v17 != v16 )
      goto LABEL_15;
    *v17 = v14;
    v14[1] = v17;
    IofCompleteRequest(v15, 0);
    v3 = 1;
  }
  return v3;
}

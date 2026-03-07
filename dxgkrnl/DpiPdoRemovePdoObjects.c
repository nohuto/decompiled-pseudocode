__int64 __fastcall DpiPdoRemovePdoObjects(__int64 a1, char a2, union _LARGE_INTEGER *a3)
{
  __int64 v3; // rbx
  struct _ERESOURCE *v7; // r15
  char v8; // si
  _QWORD *v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax

  v3 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  v7 = (struct _ERESOURCE *)(v3 + 3320);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 3320), 1u);
  v8 = (int)DpiAcquireCoreSyncAccessSafe(a1, 1) >= 0;
  v9 = (_QWORD *)(v3 + 3480);
  v10 = *(_QWORD **)(v3 + 3480);
  while ( v10 != v9 )
  {
    v11 = (__int64)(v10 - 4);
    v10 = (_QWORD *)*v10;
    v12 = *(_QWORD *)(v11 + 48);
    if ( v12 )
    {
      if ( a2 )
        *(_BYTE *)(*(_QWORD *)(v12 + 64) + 509LL) = 0;
      DpiPdoRemovePdo(a1, v11, v8, 0LL, a3);
    }
  }
  if ( a2 )
    DpiPdoDestroyPendingPdoObjects(a1);
  if ( v8 )
    DpiReleaseCoreSyncAccessSafe(a1, 1);
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegion();
  return 0LL;
}

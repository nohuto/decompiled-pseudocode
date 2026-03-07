char *__fastcall ACPIExtListEnumNext(__int64 a1)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  char *result; // rax
  KIRQL v5; // al
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  char *v10; // rdi
  KIRQL v11; // al
  __int64 v12; // rcx

  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v6 = *(_QWORD *)(a1 + 32);
    v7 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 24) = v5;
    v8 = *(_QWORD **)(v7 + v6);
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
    {
      v8 = *(_QWORD **)(a1 + 8);
      v9 = (_QWORD *)*v8;
    }
    v10 = (char *)v8 - v7;
    *(_QWORD *)(a1 + 8) = v9;
    KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), v5);
    ACPIInitDereferenceDeviceExtensionUnlocked(*(_QWORD *)(a1 + 32));
    v11 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v12 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 24) = v11;
    result = 0LL;
    *(_QWORD *)(a1 + 32) = v10;
    if ( &v10[v12] != *(char **)a1 )
      return v10;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 40);
    v3 = *(_QWORD **)(v2 + *(_QWORD *)(a1 + 32));
    if ( (_QWORD *)*v3 == v3 )
      v3 = *(_QWORD **)(a1 + 8);
    *(_QWORD *)(a1 + 32) = (char *)v3 - v2;
    *(_QWORD *)(a1 + 8) = *v3;
    result = 0LL;
    if ( v3 != *(_QWORD **)a1 )
      return (char *)v3 - v2;
  }
  return result;
}

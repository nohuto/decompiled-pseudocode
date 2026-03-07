void __fastcall ACPIEcDispatchQueries(__int64 a1)
{
  KSPIN_LOCK *v2; // r14
  unsigned int v3; // esi
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  void (__fastcall *v6)(_QWORD, __int64); // rdi
  __int64 v7; // rbx
  KIRQL v8; // r10
  unsigned __int8 v9; // al
  unsigned int v10; // ebx
  KIRQL v11; // al
  unsigned __int8 v12; // al
  bool v13; // zf
  KIRQL v14; // dl

  v2 = (KSPIN_LOCK *)(a1 + 88);
  while ( 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(v2);
    v9 = *(_BYTE *)(a1 + 445);
    if ( !v9 )
      break;
    v3 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 448) + 24LL * v9 + 1);
    v4 = (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 448) + 24LL * v9 + 1) >> 5;
    *(_DWORD *)(a1 + 4 * v4 + 124) &= ~(1 << (v3 & 0x1F));
    v5 = *(_QWORD *)(a1 + 448);
    *(_BYTE *)(a1 + 445) = *(_BYTE *)(v5 + 24LL * v9);
    v6 = *(void (__fastcall **)(_QWORD, __int64))(v5 + 24LL * v9 + 8);
    v7 = *(_QWORD *)(v5 + 24LL * v9 + 16);
    KeReleaseSpinLock(v2, v8);
    v6(v3, v7);
  }
  if ( !*(_BYTE *)(a1 + 122) )
  {
    while ( 1 )
    {
      v12 = *(_BYTE *)(a1 + 444);
      if ( !v12 )
        break;
      v10 = v12;
      *(_DWORD *)(a1 + 4 * ((unsigned __int64)v12 >> 5) + 124) &= ~(1 << (v12 & 0x1F));
      *(_BYTE *)(a1 + 444) = *(_BYTE *)(v12 + a1 + 188);
      *(_BYTE *)(a1 + 122) = 1;
      KeReleaseSpinLock(v2, v8);
      ACPIEcRunQueryMethod(a1, v10);
      v11 = KeAcquireSpinLockRaiseToDpc(v2);
      v8 = v11;
      if ( *(_BYTE *)(a1 + 122) == 1 )
      {
        *(_BYTE *)(a1 + 122) = 2;
        v14 = v11;
        goto LABEL_11;
      }
    }
    v13 = *(_BYTE *)(a1 + 121) == 1;
    *(_BYTE *)(a1 + 122) = 0;
    if ( v13 )
      ACPIEcUnloadPending(a1);
  }
  v14 = v8;
LABEL_11:
  KeReleaseSpinLock(v2, v14);
}

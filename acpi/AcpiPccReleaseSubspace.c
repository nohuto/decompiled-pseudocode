__int64 __fastcall AcpiPccReleaseSubspace(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  unsigned int v3; // edi
  __int64 v4; // rbx
  KIRQL v5; // r8
  _QWORD *v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edx

  v1 = (KSPIN_LOCK *)(a1 + 648);
  v3 = -1073741823;
  v4 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 648));
  if ( (*(_BYTE *)(a1 + 4) & 0x1E) == 0xA )
  {
    v6 = (_QWORD *)(a1 + 232);
    v7 = *(__int64 **)(a1 + 232);
    if ( v7 == (__int64 *)(a1 + 232) )
    {
      v9 = *(_DWORD *)(a1 + 4) & 0xFFFFFFE1 | 6;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 232);
      if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD *)(v8 + 8) != v4) )
        __fastfail(3u);
      *v6 = v8;
      *(_QWORD *)(v8 + 8) = v6;
      v9 = *(_DWORD *)(a1 + 4) & 0xFFFFFFE1 | 0xA;
    }
    *(_DWORD *)(a1 + 4) = v9;
    v3 = 0;
  }
  KeReleaseSpinLock(v1, v5);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 40) = 0;
    KeSetEvent((PRKEVENT)(v4 + 16), 0, 0);
  }
  return v3;
}

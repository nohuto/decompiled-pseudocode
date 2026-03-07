void __fastcall Control_TransferData_Free(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  KIRQL v8; // di
  __int64 v9; // r8
  struct _MDL *v10; // rcx

  v2 = *(_QWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 64) == 2 )
  {
    v5 = *(_QWORD **)(a2 + 88);
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v6 = *(_QWORD **)(a1 + 232);
    if ( *v6 != a1 + 224 )
      __fastfail(3u);
    v5[1] = v6;
    *v5 = a1 + 224;
    *v6 = v5;
    *(_QWORD *)(a1 + 232) = v5;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  else if ( *(_DWORD *)(a2 + 64) == 3 )
  {
    if ( *(_BYTE *)(a1 + 280) )
    {
      if ( *(_DWORD *)(a2 + 200) )
      {
        TR_SendCompleteStageRequest(a1);
        SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL), a2 + 168);
      }
    }
    else if ( *(_QWORD *)(a2 + 96) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
      v8 = KfRaiseIrql(2u);
      LOBYTE(v9) = (*(_BYTE *)(v2 + 32) & 1) == 0;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v7 + 8) + 96LL))(v7, *(_QWORD *)(a2 + 96), v9);
      KeLowerIrql(v8);
      *(_QWORD *)(a2 + 96) = 0LL;
    }
    v10 = *(struct _MDL **)(a2 + 72);
    if ( v10 && v10 != *(struct _MDL **)(v2 + 48) && v10 != *(struct _MDL **)(a1 + 120) )
    {
      IoFreeMdl(v10);
      *(_QWORD *)(a2 + 72) = 0LL;
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
}

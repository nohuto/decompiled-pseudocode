void __fastcall Isoch_Stage_FreeScatterGatherList(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rdi
  KIRQL v7; // si
  __int64 v8; // r8

  if ( *(_BYTE *)(a1 + 280) )
  {
    v4 = *(_DWORD *)(a2 + 160);
    if ( v4 )
    {
      TR_SendCompleteStageRequest(a1, v4);
      SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL), a2 + 128);
    }
  }
  else if ( *(_QWORD *)(a2 + 72) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
    v7 = KfRaiseIrql(2u);
    LOBYTE(v8) = (*(_BYTE *)(v5 + 32) & 1) == 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v6 + 8) + 96LL))(v6, *(_QWORD *)(a2 + 72), v8);
    KeLowerIrql(v7);
    *(_QWORD *)(a2 + 72) = 0LL;
  }
}

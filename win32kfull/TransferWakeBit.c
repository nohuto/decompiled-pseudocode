int __fastcall TransferWakeBit(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rsi

  LODWORD(v3) = CalcWakeMask(a2, a2, 0);
  v4 = v3 & 0x1C07;
  if ( (v4 & *(_DWORD *)(*(_QWORD *)(a1 + 448) + 8LL)) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 432);
    if ( (v3 & 1) != 0 )
    {
      v6 = *(_QWORD *)(v5 + 104);
      *(_QWORD *)(v5 + 104) = a1;
    }
    else
    {
      v6 = *(_QWORD *)(v5 + 96);
      *(_QWORD *)(v5 + 96) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 432));
    }
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v6 + 448) + 8LL), ~v4);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), v4);
    v3 = *(_QWORD *)(a1 + 448);
    _InterlockedOr((volatile signed __int32 *)(v3 + 4), v4);
  }
  return v3;
}

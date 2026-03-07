__int64 __fastcall PopIssueDirectedPowerTransition(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  char v4; // si

  v3 = *(_QWORD *)(a2 - 160 + 80);
  if ( *(_BYTE *)a1 == 3 )
    return PopCompleteDirectedPowerTransitionCallback(v3, a1, 0LL);
  v4 = 0;
  if ( PopDirectedDripsIsPnpSoftwareDeviceNode(a2 - 160) )
    return PopCompleteDirectedPowerTransitionCallback(v3, a1, 0LL);
  if ( *(_DWORD *)(a1 + 4) != 1 )
  {
    v4 = 1;
    PoFxActivateDevice(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL));
  }
  return PopFxIssueDirectedPowerTransition(v3, v4, a1);
}

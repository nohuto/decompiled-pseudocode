__int64 __fastcall HUBDSM_AckingPdoPreStartFromStoppedEnabled(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  **(_BYTE **)(v1 + 16) = 0;
  KeSetEvent((PRKEVENT)(v1 + 1608), 0, 0);
  return 4077LL;
}

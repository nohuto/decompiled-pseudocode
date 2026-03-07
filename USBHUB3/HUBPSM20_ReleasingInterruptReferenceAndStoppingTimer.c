__int64 __fastcall HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = HUBMISC_StopPortTimer(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1472LL))(*(_QWORD *)(v1 + 1328), 4046LL);
  HUBMUX_ReleaseInterruptReference((volatile signed __int32 *)v1);
  return v2;
}

char __fastcall KiOpPreprocessSecureFault(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, _QWORD *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // r11
  __int64 v6; // r10

  if ( !VslVsmEnabled || *(_DWORD *)(BugCheckParameter3 + 24) != 3 )
    KeBugCheckEx(0x12u, 4uLL, BugCheckParameter3, BugCheckParameter4, *(_QWORD *)(BugCheckParameter3 + 32));
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *(_QWORD *)(BugCheckParameter3 + 32);
  v5 = *(_QWORD *)(BugCheckParameter3 + 40);
  v6 = *(_QWORD *)(BugCheckParameter3 + 48);
  if ( a3 )
    *a3 = -1LL;
  if ( v4 != 1 && v4 != 2 && v4 != 4 )
    KeBugCheckEx(0x18Du, v4, v5, BugCheckParameter3, BugCheckParameter4);
  *(_QWORD *)(BugCheckParameter3 + 48) = 0LL;
  *(_DWORD *)BugCheckParameter3 = 268435460;
  *(_DWORD *)(BugCheckParameter3 + 24) = 2;
  if ( v4 == 1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 32) = 8LL;
  }
  else
  {
    *(_QWORD *)(BugCheckParameter3 + 32) = v4 != 2;
    if ( a3 )
      *a3 = v6;
  }
  if ( (unsigned int)Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledNoReporting() )
    _InterlockedIncrement64((volatile signed __int64 *)&CurrentPrcb->NumberOfSecureFaults);
  return 0;
}

void ACPIStartNextGlobalLockRequest()
{
  int v0; // edx
  KIRQL v1; // di
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rax
  int v5; // edx
  IRP **v6; // rbx
  IRP *v7; // rcx

  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  v2 = (_QWORD *)((char *)AcpiInformation + 48);
  v3 = (_QWORD *)*((_QWORD *)AcpiInformation + 6);
  if ( v3 == (_QWORD *)((char *)AcpiInformation + 48) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v0) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v0,
        3,
        18,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids);
    }
    ACPIReleaseHardwareGlobalLock();
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v1);
  }
  else
  {
    if ( (_QWORD *)v3[1] != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v1);
    v6 = (IRP **)(v3 - 2);
    *((_QWORD *)AcpiInformation + 9) = v6;
    *((_DWORD *)AcpiInformation + 20) = *((unsigned __int16 *)v6 + 5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_qq(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        3,
        19,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        (char)v6,
        (char)*v6);
    }
    if ( *((_WORD *)v6 + 4) == 1 )
    {
      v7 = *v6;
      v7->IoStatus.Status = 0;
      IofCompleteRequest(v7, 0);
    }
    else if ( *((_WORD *)v6 + 4) == 2 )
    {
      ((void (__fastcall *)(IRP **))*v6)(v6);
    }
  }
}

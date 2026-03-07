__int64 __fastcall PoFxRegisterPrimaryDevice(PVOID Object, __int64 a2, __int64 a3)
{
  void *v6; // rsi
  int v7; // edi

  if ( Object && a2 && *(_DWORD *)a2 == 1 )
  {
    v6 = (void *)PopFxConvertV1Components(a2 + 80, *(unsigned int *)(a2 + 4));
    if ( v6 )
    {
      v7 = PopFxRegisterDevice(Object, *(_QWORD *)(a2 + 72), 0LL, a3);
      if ( v7 >= 0 && PopErrataDisablePrimaryDeviceFastResume && (*(_DWORD *)(a2 + 8) & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)a3 + 824LL), 0x80u);
      ExFreePoolWithTag(v6, 0x4D584650u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}

char __fastcall ACPIIsPowerNodeMissingDependencies(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rbp
  int v3; // r14d
  unsigned int v4; // r15d
  __int64 i; // rdi
  __int64 v6; // r12
  int v7; // eax
  int v8; // edx
  __int64 v9; // r8
  int v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h]

  v1 = 0;
  v12 = 0LL;
  v11 = 0;
  if ( (*(_DWORD *)(a1 + 16) & 0x1000LL) == 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 96);
  if ( !v2 )
    return 0;
  v3 = 0;
  v4 = **(_DWORD **)(v2 + 32);
  if ( v4 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v6 = *(_QWORD *)(v2 + 32);
      v7 = AMLIGetNameSpaceObject(*(void **)(i + v6 + 40));
      if ( v7 < 0 )
        break;
      ACPIInternalGetDeviceFromNSOBJ(v12, 0LL, v9, &v11);
      AMLIDereferenceHandleEx(v12);
      if ( v11 != 3 )
        return 1;
      if ( ++v3 >= v4 )
        return v1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sL(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        21,
        43,
        (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
        *(_QWORD *)(i + v6 + 40),
        v7);
  }
  return v1;
}

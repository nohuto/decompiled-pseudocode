/*
 * XREFs of InternalRawAccessOpRegionHandler @ 0x1C0039CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C00035BC (ACPIInternalGetDeviceFromNSOBJ.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0024980 (WPP_RECORDER_SF_qq.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C0048724 (AMLIGetParent.c)
 *     GetFieldUnitRegionObj @ 0x1C004B944 (GetFieldUnitRegionObj.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 */

__int64 __fastcall InternalRawAccessOpRegionHandler(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  int FieldUnitRegionObj; // ebp
  __int64 v11; // rdx
  __int64 v12; // r12
  int v13; // edx
  __int64 v14; // r13
  int v15; // eax
  bool v16; // zf
  _DWORD *v17; // r14
  unsigned int v18; // ebp
  __int64 Pool2; // rax
  __int64 v20; // r8
  _QWORD *v21; // rbx
  size_t v23; // r8
  PVOID v24; // rbp
  int v25; // edx
  unsigned int v26; // edi
  int v27; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+48h] [rbp-50h] BYREF
  PVOID Object[9]; // [rsp+50h] [rbp-48h] BYREF

  Object[0] = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  dword_1C006F938 = 0;
  pszDest = 0;
  FieldUnitRegionObj = GetFieldUnitRegionObj(a3, &v28);
  if ( FieldUnitRegionObj >= 0 )
  {
    v11 = v28;
    if ( v28 )
    {
      v7 = v28 + 120;
      dword_1C006F938 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v28 + 128), 1u);
        v11 = v28;
      }
      DereferenceObjectEx(v11, v11);
    }
  }
  if ( FieldUnitRegionObj || !v7 )
    return 3221225473LL;
  v12 = AMLIGetParent(v7);
  AMLIDereferenceHandleEx(v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_qq(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      3,
      10,
      (__int64)&WPP_46f050f87a9c3f86e1bf3d4ff5286087_Traceguids,
      a3,
      v12);
  }
  if ( !a5 || !*(_QWORD *)(a5 + 16) )
    return 3221225473LL;
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v14 = a4 + 16;
    v15 = 8;
  }
  else
  {
    v14 = *(_QWORD *)(a4 + 32);
    v15 = *(_DWORD *)(a4 + 24);
  }
  v16 = *(_DWORD *)(a3 + 28) == 0;
  v17 = (_DWORD *)(a3 + 36);
  v27 = v15;
  if ( v16 || (v18 = *v17 + 56, v18 <= 0x40) )
    v18 = 64;
  Pool2 = ExAllocatePool2(64LL, v18, 1332765505LL);
  v21 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 4) = v18;
  *(_DWORD *)Pool2 = 1;
  *(_BYTE *)(Pool2 + 8) = a1;
  *(_BYTE *)(Pool2 + 9) = *(_BYTE *)(a3 + 20) & 0xF;
  *(_BYTE *)(Pool2 + 12) = (*(_DWORD *)(a3 + 20) >> 4) & 6;
  *(_BYTE *)(Pool2 + 10) = BYTE1(*(_DWORD *)(a3 + 20));
  *(_QWORD *)(Pool2 + 16) = a2;
  *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(Pool2 + 28) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(Pool2 + 32) = *(_DWORD *)(a3 + 16);
  *(_BYTE *)(Pool2 + 11) = *(_BYTE *)(a3 + 24);
  if ( *(_DWORD *)(a3 + 28) )
  {
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a3 + 32);
    v23 = (unsigned int)*v17;
    *(_DWORD *)(Pool2 + 52) = *v17;
    memmove((void *)(Pool2 + 56), (const void *)(a3 + 40), v23);
  }
  ACPIInternalGetDeviceFromNSOBJ(v12, Object, v20, 0LL);
  v24 = Object[0];
  v21[5] = Object[0];
  v26 = (*(__int64 (__fastcall **)(_QWORD *, __int64, int *, _QWORD, __int64, __int64))(a5 + 16))(
          v21,
          v14,
          &v27,
          *(_QWORD *)(a5 + 24),
          a6,
          a7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v25) = 4;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v25,
      3,
      11,
      (__int64)&WPP_46f050f87a9c3f86e1bf3d4ff5286087_Traceguids,
      v26);
  }
  if ( v24 )
    ObfDereferenceObject(v24);
  if ( v26 == -1073741789 )
  {
    *(_WORD *)(a4 + 2) = 1;
    *(_DWORD *)(a4 + 16) = v27;
  }
  ExFreePoolWithTag(v21, 0x4F706341u);
  AMLIDereferenceHandleEx(v12);
  return v26;
}

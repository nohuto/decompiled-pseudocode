/*
 * XREFs of NtUserfnINLPCREATESTRUCT @ 0x1C00657C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C0065A48 (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C00BD434 (RtlInitLargeAnsiString.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall NtUserfnINLPCREATESTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  PERESOURCE *v15; // rax
  __int64 v16; // rbx
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  _OWORD v25[3]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v26; // [rsp+70h] [rbp-58h]
  __int128 v27; // [rsp+80h] [rbp-48h]
  _QWORD v28[2]; // [rsp+90h] [rbp-38h] BYREF
  _BYTE v29[16]; // [rsp+A0h] [rbp-28h] BYREF

  memset_0(v25, 0, 0x70uLL);
  v15 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v12, v11, v13, v14);
  v16 = 0LL;
  if ( !ExIsResourceAcquiredSharedLite(*v15) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( a4 )
  {
    v17 = (_OWORD *)a4;
    if ( a4 >= MmUserProbeAddress )
      v17 = (_OWORD *)MmUserProbeAddress;
    v25[0] = *v17;
    v25[1] = v17[1];
    v25[2] = v17[2];
    v26 = v17[3];
    v27 = v17[4];
    if ( a7 )
    {
      v18 = *((_QWORD *)&v26 + 1);
      if ( *((_QWORD *)&v26 + 1) )
        v18 = *((_QWORD *)&v26 + 1);
      RtlInitLargeAnsiString(v28, v18, MmUserProbeAddress);
      v20 = v27;
      if ( (v27 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (_QWORD)v27 )
          v20 = v27;
        RtlInitLargeAnsiString(v29, v20, v19);
      }
    }
    else
    {
      v21 = *((_QWORD *)&v26 + 1);
      if ( *((_QWORD *)&v26 + 1) )
      {
        if ( (BYTE8(v26) & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v21 = *((_QWORD *)&v26 + 1);
      }
      v28[1] = v21;
      HIDWORD(v28[0]) &= ~0x80000000;
      if ( v21 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( *(_WORD *)(v21 + 2 * v22) );
        LODWORD(v28[0]) = 2 * v22;
        HIDWORD(v28[0]) = (2 * v22 + 2) & 0x7FFFFFFF;
      }
      else
      {
        v28[0] = 0LL;
      }
      v23 = v27;
      if ( (v27 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (_QWORD)v27 )
        {
          if ( (v27 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v23 = v27;
        }
        RtlInitLargeUnicodeString(v29, v23);
      }
    }
    return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64, __int64))&WPP_MAIN_CB.SectorSize
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             (unsigned __int64)v25 & -(__int64)(a4 != 0),
             a5);
  }
  if ( a2 != 129 )
    return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64, __int64))&WPP_MAIN_CB.SectorSize
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             (unsigned __int64)v25 & -(__int64)(a4 != 0),
             a5);
  return v16;
}

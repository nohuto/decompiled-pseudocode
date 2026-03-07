__int64 __fastcall HalpApicInitializeLocalUnit(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // eax
  bool v17; // zf
  unsigned int *v18; // rcx
  _DWORD v19[6]; // [rsp+20h] [rbp-18h] BYREF
  int v20; // [rsp+40h] [rbp+8h] BYREF

  v20 = 0;
  v19[0] = 0;
  if ( !HalpApicX2Mode && !HalpApicUsingMsrs )
  {
    if ( !HalpLocalApicPhysical.QuadPart )
      return 3221225486LL;
    if ( !HalpLocalApic )
    {
      HalpLocalApic = (__int64)HalMapIoSpace(HalpLocalApicPhysical, 0x1000uLL, MmNonCached);
      if ( !HalpLocalApic )
        return 3221225626LL;
    }
  }
  result = HalpApicSetupRegisterAccess();
  if ( (int)result >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 27) && (unsigned __int8)HalpApicIsCmciImplemented(&v20, v19) )
    {
      *(_DWORD *)(a1 + 32) = v20;
      *(_DWORD *)(a1 + 36) = v19[0];
    }
    v10 = *(unsigned int *)(a1 + 32);
    v11 = a4 | 0x10000;
    if ( (_DWORD)v10 )
      ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(v10, v11);
    v12 = *(unsigned int *)(a1 + 36);
    if ( (_DWORD)v12 )
      ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(v12, v11);
    HalpApicSetPriority(0LL, 15LL);
    v13 = a3 | 0x100;
    if ( HalpApicDirectedEndOfInterruptModeEnabled
      && (((__int64 (__fastcall *)(__int64))HalpApicRead)(48LL) & 0x1000000) != 0 )
    {
      v13 |= 0x1000u;
    }
    ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(240LL, v13);
    ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(800LL, a4 | 0x30000u);
    ((void (__fastcall *)(__int64, __int64))HalpApicWrite)(992LL, 11LL);
    ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(880LL, a5);
    ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(832LL, v11);
    v14 = ((__int64 (__fastcall *)(__int64))HalpApicRead)(848LL);
    v15 = v14;
    LODWORD(v15) = v14 | 0x10000;
    ((void (__fastcall *)(__int64, __int64))HalpApicWrite)(848LL, v15);
    ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(848LL, v11);
    ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(864LL, a4 | 0x18400u);
    v16 = ((__int64 (__fastcall *)(__int64))HalpApicRead)(32LL);
    v17 = HalpApicX2Mode == 0;
    v18 = a6;
    *a6 = v16;
    if ( v17 )
      *v18 = HIBYTE(v16);
    if ( *(_BYTE *)(a1 + 27) )
      return 0LL;
    result = HalpApicDescribeLocalLines(a1);
    if ( (int)result >= 0 )
    {
      *(_BYTE *)(a1 + 27) = 1;
      return 0LL;
    }
  }
  return result;
}

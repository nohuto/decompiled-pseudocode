/*
 * XREFs of OSInterface @ 0x1C0057DA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _stricmp_0 @ 0x1C0001AF7 (_stricmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     IsCompatableDSDTRevision @ 0x1C004BE28 (IsCompatableDSDTRevision.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 */

__int64 __fastcall OSInterface(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // esi
  const char **v6; // r14
  unsigned int v7; // ebx
  const char *v8; // r15
  bool v9; // al
  bool v10; // cf
  _QWORD v12[22]; // [rsp+20h] [rbp-99h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v12[0] = "Windows 2000";
  v12[1] = "Windows 2001";
  v12[2] = "Windows 2001 SP1";
  v12[3] = "Windows 2001.1";
  v12[4] = "Windows 2001 SP2";
  v12[5] = "Windows 2001.1 SP1";
  v12[6] = "Windows 2006";
  v12[7] = "Windows 2006 SP1";
  v12[8] = "Windows 2006.1";
  v12[9] = "Windows 2009";
  v12[10] = "Windows 2012";
  v12[11] = "Windows 2013";
  v12[12] = "Windows 2015";
  v12[13] = "Windows 2016";
  v12[14] = "Windows 2017";
  v12[15] = "Windows 2017.2";
  v12[16] = "Windows 2018";
  v12[17] = "Windows 2018.2";
  v12[18] = "Windows 2019";
  v12[19] = "Windows 2020";
  v12[20] = "Windows 2021";
  v12[21] = "Windows 2022";
  v5 = ValidateArgTypes(a1, v3, 0, "A");
  if ( !v5 )
  {
    v5 = ValidateArgTypes(a1, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), 0, "Z");
    if ( !v5 )
    {
      v6 = (const char **)v12;
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
      v7 = 0;
      v8 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) + 32LL);
      while ( stricmp_0(*v6, v8) )
      {
        ++v7;
        ++v6;
        if ( v7 >= 0x16 )
          goto LABEL_9;
      }
      v9 = IsCompatableDSDTRevision();
      v5 = 0;
      v10 = gdwHighestOSVerQueried < v7;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)v9 & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
      if ( v10 )
        gdwHighestOSVerQueried = v7;
LABEL_9:
      if ( ghCheckOsiString && (int)ghCheckOsiString(v8) >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL)
                                                 + 0xFFFFFFFF;
        return 0;
      }
    }
  }
  return v5;
}

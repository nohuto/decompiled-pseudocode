/*
 * XREFs of ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C013ED8C
 * Callers:
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C014B1D8 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C01392E0 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C013DDD4 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C013E5A0 (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C013E608 (_CcdOpenRegistrySubkey_0.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C014B4A0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C0166174 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4,
        char a5)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  int v25; // eax
  ULONG v26; // [rsp+30h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-89h] BYREF
  HANDLE v28; // [rsp+40h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-79h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v31[80]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-1h] BYREF
  int v33; // [rsp+C8h] [rbp+7h]

  v28 = 0LL;
  v26 = 0;
  v8 = CcdOpenRegistrySubkey(
         (int)&v28,
         983103,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         &v26);
  v11 = v8;
  if ( v8 < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v22[3] = v11;
    v22[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v22[5] = a2;
    v22[6] = a3;
    v22[7] = a4;
    WdLogEvent5_WdError(v22);
    return (unsigned int)v11;
  }
  Handle = 0LL;
  DestinationString = 0LL;
  v12 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&DestinationString, a2);
  v11 = v12;
  if ( v12 < 0 )
    goto LABEL_9;
  v26 = 2;
  v11 = CcdOpenRegistrySubkey_0(
          &Handle,
          0xF003Fu,
          v28,
          &DestinationString,
          (PULONG)((unsigned __int64)&v26 & -(__int64)(a5 != 0)));
  operator delete[](DestinationString.Buffer);
  DestinationString = 0LL;
  if ( (int)v11 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v24[3] = v11;
    v24[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v24[5] = a2;
    v24[6] = a3;
    v24[7] = a4;
    WdLogEvent5_WdWarning(v24);
    goto LABEL_6;
  }
  if ( v26 == 1 )
  {
    v33 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v32;
    v32 = *(_QWORD *)L"SetId";
    *(_QWORD *)&ValueName.Length = 786442LL;
    v25 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2);
    v11 = v25;
    if ( v25 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v23[3] = v11;
      v23[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
      v23[5] = a2;
      v23[6] = a3;
      v23[7] = a4;
      WdLogEvent5_WdError(v23);
      goto LABEL_6;
    }
  }
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR((CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v31, Handle, a2);
  v11 = a3(v31, a4);
  ZwClose(Handle);
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
  v20[3] = v11;
  v20[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
  v20[5] = a2;
  v20[6] = a3;
  v20[7] = a4;
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v31);
LABEL_6:
  ZwClose(v28);
  return (unsigned int)v11;
}

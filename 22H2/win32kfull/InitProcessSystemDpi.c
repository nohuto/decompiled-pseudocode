/*
 * XREFs of InitProcessSystemDpi @ 0x1C0044CB0
 * Callers:
 *     <none>
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C0044E58 (GetDPIServerInfoForDpi.c)
 *     Feature_PerProcessSystemDpi__private_ReportDeviceUsage @ 0x1C01666E0 (Feature_PerProcessSystemDpi__private_ReportDeviceUsage.c)
 */

__int64 __fastcall InitProcessSystemDpi(__int64 a1)
{
  __int64 ThreadTeb; // rax
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  BOOL v10; // eax
  unsigned int v11; // eax
  __int64 result; // rax
  int v13; // [rsp+78h] [rbp+10h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h]

  v15 = 0LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x80u) == 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1360LL) + 720LL);
  }
  else
  {
    ThreadTeb = PsGetThreadTeb(KeGetCurrentThread());
    v3 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v4 = *(unsigned int *)(v3 + 48);
    ProbeForRead((volatile void *)(unsigned int)v4, 0x480uLL, 4u);
    v5 = *(_QWORD *)(v4 + 480);
  }
  v15 = v5;
  v6 = v5 & 0x40000000000000LL;
  v7 = v5 & 0x20000000000000LL;
  Feature_PerProcessSystemDpi__private_ReportDeviceUsage();
  v14 = 0;
  v13 = 0;
  FastGetProfileDwordEx(0LL, 4LL, L"EnablePerProcessSystemDPI", 0LL, 0, &v14, &v13);
  if ( v6 )
    v10 = 0;
  else
    v10 = v7 || v13 || v14 != 0;
  if ( v10 )
  {
    v11 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v9, v8) + 96) + 40LL) + 68LL);
    *(_WORD *)(a1 + 284) = v11;
    return GetDPIServerInfoForDpi(v11);
  }
  else
  {
    result = *(unsigned __int16 *)(gpsi + 6998LL);
    *(_WORD *)(a1 + 284) = result;
  }
  return result;
}

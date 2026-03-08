/*
 * XREFs of NVMeLogTelemetryWaitForCmdComplete @ 0x1C001FED4
 * Callers:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     NVMeLogTelemetry @ 0x1C0008A04 (NVMeLogTelemetry.c)
 *     GetLunExtension @ 0x1C001B754 (GetLunExtension.c)
 */

__int64 __fastcall NVMeLogTelemetryWaitForCmdComplete(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 SrbExtension; // rax
  __int64 v8; // rdx
  unsigned __int8 v9; // r15
  unsigned int v10; // ebx
  unsigned __int8 v11; // di
  unsigned int v12; // esi
  __int64 LunExtension; // r14
  __int64 v14; // r10
  unsigned int v15; // r11d
  __int64 result; // rax
  unsigned int v17; // r9d
  int v18; // [rsp+28h] [rbp-D0h]
  int v19; // [rsp+30h] [rbp-C8h]
  int v20; // [rsp+38h] [rbp-C0h]
  int v21; // [rsp+40h] [rbp-B8h]

  v5 = a4;
  v6 = a3;
  SrbExtension = GetSrbExtension(a2);
  v9 = *(_BYTE *)(v8 + 3);
  v10 = -1;
  v11 = 0;
  v12 = 0;
  LunExtension = 0LL;
  v14 = SrbExtension;
  v15 = -1;
  result = 0xFFFFFFFFLL;
  if ( v17 >= 0xFA )
  {
    if ( v14 )
    {
      v10 = (unsigned __int8)*(_DWORD *)(v14 + 4096);
      v11 = *(_BYTE *)(v14 + 4253) & 1;
      if ( v11 && (v10 == 2 || v10 - 9 <= 1) )
        v12 = (unsigned __int8)*(_DWORD *)(v14 + 4136);
      LunExtension = GetLunExtension(a1, *(_DWORD *)(v14 + 4100));
      LODWORD(result) = v15;
    }
    if ( (unsigned int)v5 < (unsigned int)v6 )
    {
      if ( v14 )
      {
        v15 = (*(unsigned __int16 *)(v14 + 4250) >> 9) & 7;
        LODWORD(result) = (unsigned __int8)(*(unsigned __int16 *)(v14 + 4250) >> 1);
      }
    }
    else
    {
      v9 = 9;
    }
    return NVMeLogTelemetry(
             a1,
             LunExtension & -(__int64)(LunExtension != 0),
             0LL,
             1,
             "WaitForCmdComplete",
             v18,
             v19,
             v20,
             v21,
             "TimeoutInMS",
             v6,
             "TotalWaitTimeInMS",
             v5,
             "SrbStatus",
             v9,
             "IsAdminCmd",
             v11,
             "CmdOpCode",
             v10,
             "CmdExtra",
             v12,
             "StatusCodeType",
             v15,
             "StatusCode",
             (unsigned int)result);
  }
  return result;
}

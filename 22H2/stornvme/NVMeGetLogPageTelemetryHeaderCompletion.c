/*
 * XREFs of NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0014F50
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall NVMeGetLogPageTelemetryHeaderCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rbp
  int v10; // eax
  unsigned int v11; // ecx
  char v12; // al
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  v6 = SrbExtension;
  if ( *(_BYTE *)(v5 + 3) == 1
    && (*(_BYTE *)(v5 + 2) != 40 ? (v7 = *(_QWORD *)(v5 + 24), v8 = 16LL) : (v7 = *(_QWORD *)(v5 + 64), v8 = 60LL),
        (v9 = *(_QWORD *)(SrbExtension + 4200), *(_DWORD *)(SrbExtension + 4240) >= 0x200u)
     && *(_DWORD *)(v8 + a2) >= 0x28u) )
  {
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_OWORD *)v7 = 0LL;
      *(_OWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 32) = 0LL;
    }
    *(_WORD *)v7 = *(_WORD *)(v9 + 5);
    *(_BYTE *)(v7 + 2) = *(_BYTE *)(v9 + 7);
    v10 = *(unsigned __int16 *)(v9 + 12);
    if ( (_WORD)v10 )
    {
      *(_DWORD *)(v7 + 30) = 17827840;
      v11 = (v10 + 1) << 9;
      v12 = *(_BYTE *)(v7 + 34) & 0xF0 | 3;
      *(_BYTE *)(v7 + 39) = v11;
      *(_BYTE *)(v7 + 34) = v12;
      *(_BYTE *)(v7 + 38) = BYTE1(v11);
      result = HIWORD(v11);
      *(_BYTE *)(v7 + 36) = HIBYTE(v11);
      *(_BYTE *)(v7 + 37) = BYTE2(v11);
    }
    else
    {
      result = StorPortDebugPrint(1LL, "\tStorNVMe: No Telemetry Host Log page available!\n");
    }
    if ( *(_BYTE *)(a1 + 16) )
    {
      *(_WORD *)(v9 + 5) = 0;
      *(_BYTE *)(v9 + 7) = 0;
      *(_DWORD *)(v9 + 8) = 0;
      *(_WORD *)(v9 + 12) = 0;
    }
    *(_DWORD *)(v8 + a2) = 40;
  }
  else
  {
    result = StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
  }
  if ( !*(_BYTE *)(a1 + 16) )
    result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(v6 + 4240), (__int64 *)(v6 + 4200), *(_QWORD *)(v6 + 4208));
  *(_BYTE *)(v6 + 4253) |= 8u;
  *(_QWORD *)(v6 + 4200) = 0LL;
  *(_DWORD *)(v6 + 4240) = 0;
  return result;
}

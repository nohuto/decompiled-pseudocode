/*
 * XREFs of PerfControlHwp @ 0x1C0007100
 * Callers:
 *     <none>
 * Callees:
 *     ReadIoMemRaw @ 0x1C0008848 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0008BE0 (WriteIoMemRaw.c)
 */

void __fastcall PerfControlHwp(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 IoMemRaw; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // [rsp+20h] [rbp-18h]

  if ( a3 || a4 )
  {
    if ( !*(_BYTE *)(a1 + 105) || a4 )
    {
      IoMemRaw = ReadIoMemRaw(a1 + 120);
      *(_BYTE *)(a1 + 105) = 1;
    }
    else
    {
      IoMemRaw = *(_QWORD *)(a1 + 136);
      v7 = a1 + 120;
    }
    LODWORD(v9) = IoMemRaw;
    HIDWORD(v9) = HIDWORD(IoMemRaw) & 0xFFFFFBFF | (*(_BYTE *)(a2 + 37) != 0 ? 0x400 : 0);
    WriteIoMemRaw(v7, *(_QWORD *)(a1 + 144) & *(_QWORD *)a2 | v9 & ~*(_QWORD *)(a1 + 144));
    *(_QWORD *)(a1 + 136) = v8;
  }
}

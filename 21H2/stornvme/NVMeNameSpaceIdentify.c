/*
 * XREFs of NVMeNameSpaceIdentify @ 0x1C0007F68
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x1C000A984 (NVMeParseNameSpaceIdentifyData.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     NVMeVersionCheck @ 0x1C0024AE8 (NVMeVersionCheck.c)
 */

char __fastcall NVMeNameSpaceIdentify(__int64 a1)
{
  __int64 v2; // r13
  _QWORD *v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // r14d
  int v6; // r15d
  int v7; // ebp
  unsigned int v8; // r12d
  void *v9; // rcx
  int v10; // edx
  __int64 v11; // rcx
  char v12; // r8
  char *v13; // rcx
  int v15; // [rsp+70h] [rbp+8h]
  void *v16; // [rsp+78h] [rbp+10h]
  __int64 v17; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 1640);
  v3 = *(_QWORD **)(a1 + 1736);
  v17 = *(_QWORD *)(a1 + 4064);
  LOBYTE(v4) = -1;
  v5 = *(_DWORD *)(v2 + 516);
  if ( v5 > 0xFF )
    v5 = 255;
  v6 = 0;
  if ( v5 )
  {
    v7 = 1;
    do
    {
      v8 = v7;
      if ( !*(_BYTE *)(a1 + 20) || *(_DWORD *)(a1 + 216) == v7 )
      {
        v9 = *(void **)(a1 + 952);
        *(_BYTE *)(a1 + 867) = 0;
        memset(v9, 0, 0x10A0uLL);
        v10 = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
        *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 952);
        *(_DWORD *)(a1 + 856) = 1;
        do
          *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) |= ++v10;
        while ( v10 < 2 );
        *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
        v11 = *(_QWORD *)(a1 + 952);
        *(_QWORD *)(v11 + 4120) = *(_QWORD *)(a1 + 1744);
        *(_BYTE *)(v11 + 4136) = v7 == 0;
        *(_BYTE *)(v11 + 4096) = 6;
        *(_DWORD *)(v11 + 4100) = v7;
        ProcessCommand(a1, a1 + 864);
        WaitForCommandCompleteWithCustomTimeout(a1);
        LOBYTE(v4) = -122;
        if ( *(_WORD *)(a1 + 4) == 0x8086 )
        {
          LOBYTE(v4) = 17;
          if ( *(_WORD *)(a1 + 6) == 8209 )
          {
            HIBYTE(v15) = *((_BYTE *)v3 + 384);
            BYTE2(v15) = *((_BYTE *)v3 + 385);
            BYTE1(v15) = *((_BYTE *)v3 + 386);
            LOBYTE(v4) = *((_BYTE *)v3 + 387);
            LOBYTE(v15) = v4;
            if ( v15 != -559038737 && v7 == 1 )
            {
              memset(v3, 0, 0x1000uLL);
              LOBYTE(v4) = -16;
              *v3 = 67108336LL;
              *((_BYTE *)v3 + 130) = 9;
              v3[1] = 67108336LL;
              v3[2] = 67108336LL;
            }
          }
        }
        if ( *(_BYTE *)(a1 + 867) == 1 )
        {
          v12 = *(_BYTE *)(a1 + 20);
          if ( v12
            || v5 <= 1
            || !(unsigned __int8)NVMeVersionCheck(a1)
            || (v4 = *((_BYTE *)v3 + 26) & 0xF, *((_BYTE *)v3 + 4 * v4 + 130))
            || *v3 )
          {
            if ( !v12 )
            {
              LOBYTE(v4) = StorPortExtendedFunction(0LL, a1, 424LL, 1701672526LL);
              break;
            }
            v13 = *(char **)(a1 + 1656);
            v16 = v13;
            *(_QWORD *)(a1 + 1656) = v13 + 424;
            NVMeParseNameSpaceIdentifyData(a1, (int)v3, v2, v17, v7, v13);
            ++v6;
            *(_QWORD *)(a1 + 8LL * (unsigned int)(v7 - 1) + 1752) = v16;
            LOBYTE(v4) = v7;
            *(_DWORD *)(a1 + 224) = (unsigned __int16)v7;
          }
        }
        if ( *(_BYTE *)(a1 + 20) )
          break;
      }
      ++v7;
    }
    while ( v8 < v5 );
  }
  *(_DWORD *)(a1 + 212) = v6;
  return v4;
}

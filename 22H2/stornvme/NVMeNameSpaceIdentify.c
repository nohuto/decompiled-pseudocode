/*
 * XREFs of NVMeNameSpaceIdentify @ 0x1C001A730
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000DC0C (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     IsIntelChatham @ 0x1C000A684 (IsIntelChatham.c)
 *     NVMeVersionCheck @ 0x1C001C288 (NVMeVersionCheck.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

char __fastcall NVMeNameSpaceIdentify(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rsi
  unsigned int v4; // r15d
  int v5; // r12d
  unsigned int v6; // ecx
  int v7; // r14d
  void *v8; // rcx
  int v9; // edx
  __int64 v10; // rcx
  char v11; // r8
  char *v12; // rcx
  int v14; // [rsp+70h] [rbp+40h]
  char *v15; // [rsp+78h] [rbp+48h]

  v1 = *(_QWORD *)(a1 + 1624);
  v2 = *(_QWORD **)(a1 + 1720);
  v4 = 255;
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 516);
  if ( v6 > 0xFF || (v4 = *(_DWORD *)(v1 + 516), v6) )
  {
    v7 = 1;
    do
    {
      if ( !*(_BYTE *)(a1 + 16) || *(_DWORD *)(a1 + 200) == v7 )
      {
        v8 = *(void **)(a1 + 936);
        *(_BYTE *)(a1 + 851) = 0;
        memset(v8, 0, 0x10A0uLL);
        v9 = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
        *(_QWORD *)(a1 + 904) = *(_QWORD *)(a1 + 936);
        *(_DWORD *)(a1 + 840) = 1;
        do
          *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4253LL) |= ++v9;
        while ( v9 < 2 );
        *(_WORD *)(*(_QWORD *)(a1 + 936) + 4244LL) = 0;
        v10 = *(_QWORD *)(a1 + 936);
        *(_QWORD *)(v10 + 4120) = *(_QWORD *)(a1 + 1728);
        *(_BYTE *)(v10 + 4136) = v7 == 0;
        *(_BYTE *)(v10 + 4096) = 6;
        *(_DWORD *)(v10 + 4100) = v7;
        ProcessCommand(a1, a1 + 848);
        WaitForCommandCompleteWithCustomTimeout(a1);
        LOBYTE(v1) = IsIntelChatham(a1);
        if ( (_BYTE)v1 )
        {
          HIBYTE(v14) = *((_BYTE *)v2 + 384);
          BYTE2(v14) = *((_BYTE *)v2 + 385);
          BYTE1(v14) = *((_BYTE *)v2 + 386);
          LOBYTE(v1) = *((_BYTE *)v2 + 387);
          LOBYTE(v14) = v1;
          if ( v14 != -559038737 && v7 == 1 )
          {
            memset(v2, 0, 0x1000uLL);
            LOBYTE(v1) = -16;
            *v2 = 67108336LL;
            *((_BYTE *)v2 + 130) = 9;
            v2[1] = 67108336LL;
            v2[2] = 67108336LL;
          }
        }
        if ( *(_BYTE *)(a1 + 851) == 1 )
        {
          v11 = *(_BYTE *)(a1 + 16);
          if ( v11
            || v4 <= 1
            || !(unsigned __int8)NVMeVersionCheck(a1)
            || (v1 = *((_BYTE *)v2 + 26) & 0xF, *((_BYTE *)v2 + 4 * v1 + 130))
            || *v2 )
          {
            if ( !v11 )
            {
              LOBYTE(v1) = StorPortExtendedFunction(0LL, a1, 104LL, 1701672526LL);
              break;
            }
            v12 = *(char **)(a1 + 1640);
            v15 = v12;
            *(_QWORD *)(a1 + 1640) = v12 + 104;
            memset(v12, 0, 0x68uLL);
            v15[64] = *((_BYTE *)v2 + 26) & 0xF;
            *((_DWORD *)v15 + 12) = *((_DWORD *)v2 + (*((_BYTE *)v2 + 26) & 0xF) + 32);
            *((_DWORD *)v15 + 13) = 1 << v15[50];
            *((_QWORD *)v15 + 7) = *v2;
            v15[65] = v2[3] & 1;
            v15[66] = *((_BYTE *)v2 + 29) & 7;
            *((_WORD *)v15 + 46) = *((_WORD *)v2 + 23);
            *((_WORD *)v15 + 47) = *((_WORD *)v2 + 50);
            *((_WORD *)v15 + 48) = *((_WORD *)v2 + 51);
            *(_QWORD *)(v15 + 84) = v2[15];
            ++v5;
            *(_OWORD *)(v15 + 68) = *(_OWORD *)(v2 + 13);
            *(_WORD *)v15 = 1;
            *((_DWORD *)v15 + 1) = 4;
            *((_WORD *)v15 + 1) = 0;
            v15[8] = 0;
            v15[9] = 0;
            v15[10] = v7 - 1;
            *((_DWORD *)v15 + 4) = v7;
            *(_QWORD *)(a1 + 8LL * (unsigned int)(v7 - 1) + 1736) = v15;
            LOBYTE(v1) = v7;
            *(_DWORD *)(a1 + 208) = (unsigned __int16)v7;
          }
        }
        if ( *(_BYTE *)(a1 + 16) )
          break;
      }
      LOBYTE(v1) = v7++;
    }
    while ( v7 - 1 < v4 );
  }
  *(_DWORD *)(a1 + 196) = v5;
  return v1;
}

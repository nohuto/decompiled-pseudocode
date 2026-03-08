/*
 * XREFs of NVMeControllerIdentify @ 0x1C001C564
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000D7A8 (NVMeControllerInitPart1.c)
 *     NVMeControllerIdentifyWorkItem @ 0x1C0014EA0 (NVMeControllerIdentifyWorkItem.c)
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     IsIntelChatham @ 0x1C0007B94 (IsIntelChatham.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

char __fastcall NVMeControllerIdentify(_QWORD *a1)
{
  int i; // ecx
  __int64 v3; // rcx
  __int64 v4; // rax
  char result; // al
  _DWORD *v6; // rbx

  LocalCommandReuse((__int64)a1, (__int64)(a1 + 118));
  for ( i = 0; i < 2; *(_BYTE *)(a1[130] + 4253LL) |= i )
    ++i;
  *(_WORD *)(a1[130] + 4244LL) = 0;
  v3 = a1[130];
  v4 = a1[231];
  *(_BYTE *)(v3 + 4096) = 6;
  *(_DWORD *)(v3 + 4100) = 0;
  *(_QWORD *)(v3 + 4120) = v4;
  *(_BYTE *)(v3 + 4136) = 1;
  ProcessCommand((__int64)a1, (__int64)(a1 + 119));
  WaitForCommandCompleteWithCustomTimeout((int)a1);
  result = IsIntelChatham((__int64)a1);
  if ( result )
  {
    v6 = (_DWORD *)a1[230];
    if ( *(_WORD *)v6 != 0x8086 )
    {
      memset(v6, 0, 0x1000uLL);
      *((_BYTE *)v6 + 261) |= 1u;
      *((_QWORD *)v6 + 3) = 0x326D616874616843LL;
      result = 35;
      *(_WORD *)((char *)v6 + 73) = 1059;
      *v6 = 538017926;
      v6[1] = 842084402;
      *((_BYTE *)v6 + 64) = 48;
      *((_BYTE *)v6 + 72) = 1;
      *((_BYTE *)v6 + 259) = 3;
      *((_WORD *)v6 + 256) = 17510;
      v6[129] = 1;
    }
  }
  return result;
}

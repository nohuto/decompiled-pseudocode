/*
 * XREFs of ExpPartitionCreatePool @ 0x1408480E8
 * Callers:
 *     SmFirstTimeInit @ 0x1407DDCE0 (SmFirstTimeInit.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeGetCurrentNode @ 0x14039F7D4 (KeGetCurrentNode.c)
 *     ExpPartitionCreatePoolInternal @ 0x1408483B0 (ExpPartitionCreatePoolInternal.c)
 */

__int64 __fastcall ExpPartitionCreatePool(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  bool v6; // zf
  unsigned int v7; // ecx
  unsigned int v8; // edi
  int v9; // r8d
  int v10; // r10d
  unsigned __int16 *CurrentNode; // r14
  __int64 result; // rax
  __int16 v13; // cx
  unsigned __int16 v14; // bp
  __int64 v15; // [rsp+30h] [rbp-38h]
  signed int v16; // [rsp+70h] [rbp+8h]

  do
  {
    v6 = !_BitScanForward(&v7, *(_DWORD *)(a1 + 24));
    v16 = v7;
    if ( v6 )
      return 3221225495LL;
  }
  while ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 24), v7) );
  v8 = v7;
  CurrentNode = (unsigned __int16 *)KeGetCurrentNode();
  if ( (_UNKNOWN *)KeNodeBlock[*CurrentNode] == (_UNKNOWN *)((char *)&KiNodeInit + 304 * *CurrentNode) )
    CurrentNode = 0LL;
  result = ExpPartitionCreatePoolInternal(a1, v10, v9, (_DWORD)CurrentNode, v16);
  if ( (int)result >= 0 )
  {
    v13 = *CurrentNode;
    HIDWORD(v15) = 0;
    v14 = 0;
    if ( KeNumberNodes )
    {
      LODWORD(v15) = (2 * (*CurrentNode & 0x7F)) | 1;
      do
      {
        if ( v14 != v13 )
        {
          v8 = v16;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v14) + 8LL * v16) = v15;
          KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v14) + 16LL), 0, 0);
          v13 = *CurrentNode;
        }
        ++v14;
      }
      while ( v14 < (unsigned __int16)KeNumberNodes );
    }
    *a4 = v8;
    result = 0LL;
    v8 = 8;
  }
  if ( v8 != 8 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 24), v8);
  return result;
}

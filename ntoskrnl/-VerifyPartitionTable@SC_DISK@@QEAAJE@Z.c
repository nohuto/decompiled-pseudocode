/*
 * XREFs of ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x1406737BC
 * Callers:
 *     IoVerifyPartitionTable @ 0x14093DC20 (IoVerifyPartitionTable.c)
 * Callees:
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14067224C (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 */

__int64 __fastcall SC_DISK::VerifyPartitionTable(SC_DISK *this, char a2)
{
  int v2; // r8d
  __int64 result; // rax
  SC_DISK *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 64);
  result = 0LL;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v4 = this;
      return SC_GPT::VerifyPartitionTable(&v4, a2);
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}

__int64 __fastcall MI_READ_PTE_LOCK_FREE(unsigned __int64 a1)
{
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx

  result = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL
    && a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (result & 1) != 0
    && ((result & 0x20) == 0 || (result & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v3 = result | 0x20;
      v4 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      if ( (v4 & 0x20) == 0 )
        v3 = result;
      result = v3;
      if ( (v4 & 0x42) != 0 )
        return v3 | 0x42;
    }
  }
  return result;
}

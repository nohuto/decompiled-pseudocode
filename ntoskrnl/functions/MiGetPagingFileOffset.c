__int64 __fastcall MiGetPagingFileOffset(__int64 *a1)
{
  __int64 v1; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v5; // rdx
  __int64 v6; // rax

  v1 = *a1;
  if ( (unsigned int)MiPteInShadowRange(a1)
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v5 = v1 | 0x20;
      v6 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)a1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v1;
      v1 = v5;
      if ( (v6 & 0x42) != 0 )
        v1 = v5 | 0x42;
    }
  }
  if ( (v1 & 4) == 0 )
    return 0LL;
  if ( qword_140C657C0 )
  {
    if ( (v1 & 0x10) == 0 )
      v1 &= ~qword_140C657C0;
  }
  return HIDWORD(v1);
}

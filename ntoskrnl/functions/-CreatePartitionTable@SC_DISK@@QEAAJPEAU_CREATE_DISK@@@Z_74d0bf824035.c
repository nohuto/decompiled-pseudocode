__int64 __fastcall SC_DISK::CreatePartitionTable(SC_DISK *this, struct _CREATE_DISK *a2)
{
  struct _CREATE_DISK *v3; // r9
  SC_DISK *v4; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a2->PartitionStyle == PARTITION_STYLE_MBR )
    {
      SC_MBR::Initialize((SC_MBR *)&v4, this);
      return SC_MBR::CreatePartitionTable((SC_MBR *)&v4, v3);
    }
    if ( a2->PartitionStyle == PARTITION_STYLE_GPT )
    {
      v4 = this;
      return SC_GPT::CreatePartitionTable((SC_GPT *)&v4, a2);
    }
    if ( a2->PartitionStyle != PARTITION_STYLE_RAW )
      return 3221225659LL;
  }
  v4 = this;
  return SC_RAW::CreatePartitionTable((SC_RAW *)&v4);
}

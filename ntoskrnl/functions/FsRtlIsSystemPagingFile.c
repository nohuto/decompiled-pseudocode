__int64 __fastcall FsRtlIsSystemPagingFile(__int64 a1)
{
  return MmIsFileObjectAPagingFile(a1);
}

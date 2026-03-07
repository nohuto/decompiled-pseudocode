void __fastcall VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::~VIDSCH_FLIP_QUEUE_HISTORY_ENTRY(PVOID *this)
{
  ExFreePoolWithTag(this[9], 0);
}

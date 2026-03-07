void __fastcall AtomicExecutionCheck::~AtomicExecutionCheck(AtomicExecutionCheck *this)
{
  AtomicExecutionCheck::Disarm(this);
}

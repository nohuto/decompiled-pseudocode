CBatchCommand *__fastcall CBatchCommand::`scalar deleting destructor'(CBatchCommand *this)
{
  CBatchCommand::Destroy(this);
  operator delete(this);
  return this;
}

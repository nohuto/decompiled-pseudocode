void **__fastcall CScanPipeline::`scalar deleting destructor'(void **this, char a2)
{
  CScanPipeline::~CScanPipeline(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

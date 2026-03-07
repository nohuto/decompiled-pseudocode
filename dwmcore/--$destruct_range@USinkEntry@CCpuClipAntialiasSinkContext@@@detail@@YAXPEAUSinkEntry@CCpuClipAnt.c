void *__fastcall detail::destruct_range<CCpuClipAntialiasSinkContext::SinkEntry>(
        CCpuClipAntialiasSinkContext::SinkEntry *this,
        CCpuClipAntialiasSinkContext::SinkEntry *a2)
{
  CCpuClipAntialiasSinkContext::SinkEntry *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CCpuClipAntialiasSinkContext::SinkEntry::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)v3 + 432);
    }
    while ( v3 != a2 );
  }
  return result;
}

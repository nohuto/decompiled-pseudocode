void *__fastcall std::unique_ptr<CMmcssTask>::~unique_ptr<CMmcssTask>(CMmcssTask **a1, unsigned int a2)
{
  CMmcssTask *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CMmcssTask::`scalar deleting destructor'(v2, a2);
  return result;
}

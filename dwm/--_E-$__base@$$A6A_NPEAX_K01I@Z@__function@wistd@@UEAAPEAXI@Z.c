_QWORD *__fastcall wistd::__function::__base<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

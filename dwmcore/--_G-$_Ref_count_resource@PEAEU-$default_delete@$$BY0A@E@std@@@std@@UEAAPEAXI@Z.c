void *__fastcall std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

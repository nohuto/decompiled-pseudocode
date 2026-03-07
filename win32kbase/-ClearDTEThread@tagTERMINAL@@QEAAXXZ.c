void __fastcall tagTERMINAL::ClearDTEThread(tagTERMINAL *this)
{
  *((_QWORD *)this + 8) = 0LL;
}

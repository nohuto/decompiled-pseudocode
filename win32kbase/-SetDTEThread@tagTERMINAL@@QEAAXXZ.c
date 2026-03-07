void __fastcall tagTERMINAL::SetDTEThread(tagTERMINAL *this)
{
  *((_QWORD *)this + 8) = **((_QWORD **)this + 2);
}

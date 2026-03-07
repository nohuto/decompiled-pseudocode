struct tagQ *__fastcall tagTHREADINFO::GetQ(tagTHREADINFO *this)
{
  return (struct tagQ *)*((_QWORD *)this + 54);
}

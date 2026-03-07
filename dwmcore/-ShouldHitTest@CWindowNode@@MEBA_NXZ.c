bool __fastcall CWindowNode::ShouldHitTest(CWindowNode *this)
{
  bool result; // al

  result = 0;
  if ( !*((_BYTE *)this + 890) )
    return *((_QWORD *)this + 88) != 0LL;
  return result;
}

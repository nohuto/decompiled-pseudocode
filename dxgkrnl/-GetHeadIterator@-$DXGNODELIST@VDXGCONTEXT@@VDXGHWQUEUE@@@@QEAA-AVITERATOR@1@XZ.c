_QWORD *__fastcall DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  a2[1] = *a1;
  result = a2;
  *a2 = a1;
  return result;
}

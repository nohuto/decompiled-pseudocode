__int64 __fastcall GetgpPublicObjectList(_QWORD *a1)
{
  __int64 result; // rax

  result = gpPublicObjectList;
  *a1 = gpPublicObjectList;
  return result;
}

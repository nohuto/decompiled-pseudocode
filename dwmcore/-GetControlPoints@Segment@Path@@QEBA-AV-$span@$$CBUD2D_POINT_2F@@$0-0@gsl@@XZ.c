_QWORD *__fastcall Path::Segment::GetControlPoints(_BYTE *a1, _QWORD *a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  switch ( *a1 )
  {
    case 0:
      goto LABEL_10;
    case 1:
      *a2 = 0LL;
      a2[1] = 0LL;
      return a2;
    case 2:
    case 3:
LABEL_10:
      *a2 = 1LL;
      break;
    case 4:
      *a2 = 2LL;
      break;
    case 5:
      *a2 = 3LL;
      break;
    default:
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
  }
  a2[1] = a1 + 8;
  if ( a1 == (_BYTE *)-8LL )
  {
    gsl::details::terminate((gsl::details *)0xFFFFFFFFFFFFFFF8LL);
    JUMPOUT(0x1800D3E6ALL);
  }
  return a2;
}

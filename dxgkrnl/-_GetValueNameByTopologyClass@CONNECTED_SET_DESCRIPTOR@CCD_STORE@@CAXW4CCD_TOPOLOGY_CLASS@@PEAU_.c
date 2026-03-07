__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(int a1, __int64 a2)
{
  const wchar_t *v3; // rcx
  __int64 result; // rax

  switch ( a1 )
  {
    case 1:
      v3 = L"Internal";
LABEL_11:
      *(_WORD *)(a2 + 2) = 18;
      result = 16LL;
      goto LABEL_9;
    case 2:
      v3 = L"Clone";
      *(_WORD *)(a2 + 2) = 12;
      result = 10LL;
      goto LABEL_9;
    case 4:
      v3 = L"eXtend";
      goto LABEL_7;
    case 8:
      v3 = L"External";
      goto LABEL_11;
  }
  if ( a1 != 15 )
  {
    WdLogSingleEntry1(1LL, a1);
    v3 = L"Recent";
    *(_WORD *)(a2 + 2) = 14;
    goto LABEL_8;
  }
  v3 = L"Recent";
LABEL_7:
  *(_WORD *)(a2 + 2) = 14;
LABEL_8:
  result = 12LL;
LABEL_9:
  *(_QWORD *)(a2 + 8) = v3;
  *(_WORD *)a2 = result;
  return result;
}

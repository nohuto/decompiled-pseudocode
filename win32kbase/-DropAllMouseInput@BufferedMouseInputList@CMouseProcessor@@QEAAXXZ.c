void __fastcall CMouseProcessor::BufferedMouseInputList::DropAllMouseInput(
        CMouseProcessor::BufferedMouseInputList *this,
        unsigned int a2)
{
  CMouseProcessor::MouseInputMessage **v3; // rbx
  CMouseProcessor::MouseInputMessage *v4; // rcx
  CMouseProcessor::MouseInputMessage *v5; // rax
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C029D543, 0LL, 0LL, 2u, &v6);
  v3 = (CMouseProcessor::MouseInputMessage **)((char *)this + 8);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (CMouseProcessor::MouseInputMessage *)v3 )
      break;
    if ( *((CMouseProcessor::MouseInputMessage ***)v4 + 1) != v3
      || (v5 = *(CMouseProcessor::MouseInputMessage **)v4,
          *(CMouseProcessor::MouseInputMessage **)(*(_QWORD *)v4 + 8LL) != v4) )
    {
      __fastfail(3u);
    }
    *v3 = v5;
    *((_QWORD *)v5 + 1) = v3;
    CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v4, a2);
  }
}

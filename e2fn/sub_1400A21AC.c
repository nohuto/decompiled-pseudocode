__int64 __fastcall sub_1400A21AC(__int64 a1, const UNICODE_STRING *a2)
{
  __int64 result; // rax
  int v5; // ebx
  int v6; // eax

  if ( !a1 )
    return sub_140161000(0LL, a2);
  qword_1400DF6B0 = a1;
  *(_DWORD *)&DestinationString.Length = 34078720;
  DestinationString.Buffer = (PWSTR)&stru_1400DF410.Queue.Wcb.NumberOfChannels;
  RtlCopyUnicodeString(&DestinationString, a2);
  result = WdfVersionBind(a1, &DestinationString, &unk_1400DF0D0, &qword_1400DF6A8);
  if ( (int)result >= 0 )
  {
    qword_1400DF680 = *(_QWORD *)(qword_1400DF678 + 1608);
    v5 = sub_1400A2400(&unk_1400DF0D0);
    if ( v5 < 0 )
      goto LABEL_8;
    v5 = sub_1400A233C();
    if ( v5 < 0 )
      goto LABEL_8;
    v6 = sub_140161000(a1, a2);
    v5 = v6;
    if ( v6 < 0 )
    {
      DbgPrintEx(0x4Du, 0, "DriverEntry failed 0x%x for driver %wZ\n", (unsigned int)v6, &DestinationString);
      sub_1400A20F0();
LABEL_8:
      sub_1400A2148();
      return (unsigned int)v5;
    }
    if ( *(_BYTE *)(qword_1400DF6A8 + 48) )
    {
      if ( *(_QWORD *)(a1 + 104) )
        qword_1400DF6B8 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 104) = sub_1400A2310;
    }
    else if ( (*(_DWORD *)(qword_1400DF6A8 + 8) & 2) != 0 )
    {
      qword_1400DF680 = (__int64)sub_1400A2300;
    }
    return 0LL;
  }
  return result;
}

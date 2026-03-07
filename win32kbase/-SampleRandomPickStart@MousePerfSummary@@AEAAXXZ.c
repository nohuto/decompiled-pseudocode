void __fastcall MousePerfSummary::SampleRandomPickStart(MousePerfSummary *this)
{
  unsigned __int64 v1; // rax

  v1 = *((_QWORD *)this + 65);
  if ( v1 + 1 >= v1 )
  {
    *((_QWORD *)this + 65) = v1 + 1;
    if ( !((unsigned __int64)rand() % *((_QWORD *)this + 65)) )
    {
      *((_QWORD *)this + 70) = *((_QWORD *)this + 53);
      *((_QWORD *)this + 71) = *((_QWORD *)this + 54);
      *((_QWORD *)this + 72) = *((_QWORD *)this + 55);
      *((_QWORD *)this + 73) = *((_QWORD *)this + 56);
      *((_DWORD *)this + 155) = *((_DWORD *)this + 120);
      *((_DWORD *)this + 154) = *((_DWORD *)this + 122);
      *((_BYTE *)this + 528) = 1;
    }
  }
}

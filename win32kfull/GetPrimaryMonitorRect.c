__int64 __fastcall GetPrimaryMonitorRect(__int64 a1)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1);
  GetMonitorRect(a1, *(_QWORD *)(DispInfo + 96));
  return a1;
}

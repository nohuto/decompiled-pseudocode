__int64 __fastcall WmipSystemControl(__int64 a1, __int64 a2)
{
  return IoWMISystemControl(WmipWmiLibInfo, a1, a2);
}

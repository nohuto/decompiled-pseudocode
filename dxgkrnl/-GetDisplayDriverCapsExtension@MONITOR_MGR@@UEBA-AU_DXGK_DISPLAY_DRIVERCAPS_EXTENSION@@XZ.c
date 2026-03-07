_DWORD *__fastcall MONITOR_MGR::GetDisplayDriverCapsExtension(MONITOR_MGR *this, _DWORD *a2)
{
  _DWORD *result; // rax

  result = a2;
  *a2 = *(_DWORD *)(*((_QWORD *)this + 3) + 24LL);
  return result;
}

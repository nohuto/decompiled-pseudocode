const struct _DXGKWIN32KENG_INTERFACE *__fastcall DXGPROCESS::GetWin32kInterface(DXGPROCESS *this)
{
  return (const struct _DXGKWIN32KENG_INTERFACE *)*((_QWORD *)this + 11);
}

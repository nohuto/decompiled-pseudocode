struct _LUID __fastcall DXGMONITOR::GetAdapterLuid(DXGMONITOR *this, _QWORD *a2)
{
  struct _LUID result; // rax

  result = (struct _LUID)a2;
  *a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL) + 404LL);
  return result;
}

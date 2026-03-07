struct _LUID __fastcall CD3DResource::GetAdapterLuid(CD3DResource *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 80LL) + 896LL);
  return (struct _LUID)a2;
}

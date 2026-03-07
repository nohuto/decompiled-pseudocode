struct _LUID __fastcall CFlipExBuffer::GetAdapterLuid(CFlipExBuffer *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 45);
  return (struct _LUID)a2;
}

struct _LUID __fastcall CD2DResource::GetAdapterLuid(CD2DResource *this, _QWORD *a2)
{
  char *v3; // rcx
  __int64 v4; // rcx
  struct _LUID result; // rax

  v3 = (char *)this + *(int *)(*((_QWORD *)this - 11) + 8LL) - 88;
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3) + 896);
  result = (struct _LUID)a2;
  *a2 = v4;
  return result;
}

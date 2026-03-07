_DWORD *__fastcall CRenderTargetBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a1 - 104);
  if ( v3 )
  {
    v4 = v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 16LL);
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v4 + 8LL))(v4, a2);
  }
  else
  {
    *a2 = DisplayId::Invalid;
  }
  return a2;
}

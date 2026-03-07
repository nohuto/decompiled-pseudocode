__int64 __fastcall CDrawListEntryBatch::Release(CDrawListEntryBatch *this)
{
  char *v1; // rsi
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v5; // rdx

  v1 = (char *)this + 8;
  v2 = (volatile signed __int32 *)((char *)this + 16);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CDrawListEntryBatch *)((char *)this + 16));
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 24LL))(v1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v5 = *(_QWORD *)v1;
      --*v2;
      (*(void (__fastcall **)(char *, __int64))(v5 + 16))(v1, 1LL);
    }
  }
  return v3;
}

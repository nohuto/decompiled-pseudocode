__int64 __fastcall SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *a1 = a2;
  if ( a2 )
  {
    v2 = a2 + 8 + *(int *)(*(_QWORD *)(a2 + 8) + 4LL);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return result;
}

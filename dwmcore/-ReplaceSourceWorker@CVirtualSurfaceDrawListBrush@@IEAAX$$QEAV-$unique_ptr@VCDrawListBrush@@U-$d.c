__int64 __fastcall CVirtualSurfaceDrawListBrush::ReplaceSourceWorker(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  if ( *a3 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a3 + 8LL))(*a3, 3LL) )
    return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a3 + 40LL))(*a3, a2);
  result = *a3;
  v6 = *a2;
  *a2 = *a3;
  *a3 = v6;
  return result;
}

__int64 __fastcall std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CDrawListBrush>::operator()((__int64)a1, *a1);
  return result;
}
